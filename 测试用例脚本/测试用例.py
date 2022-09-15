from liboffice import OfficeWord
from liboffice import OfficeExcel
import re
import os
import shutil
# 架构设计文档
SA_DOC_PATH = 'Test\[PH-PRD-QC-002-2022]_ArchitecturalDesign_RTE.docx'
# 集成用例
TEST_SR_PATH = 'Test\[PH-PRD-QC-002-2022]_IntegrationTestCase&TestResult_SR_李涛.xlsx'
TEST_SR_DIFFER_PATH = '[PH-PRD-QC-002-2022]_IntegrationTestCase&TestResult_SR_李涛_ID_去重数据.xlsx'
# TEST_SR_DIFFER_PATH = ''
TEST_E2E_PATH = 'Test\[PH-PRD-QC-002-2022]_IntegrationTestCase&TestResult_E2E_李涛.xlsx'
TEST_E2E_DIFFER_PATH = '[PH-PRD-QC-002-2022]_IntegrationTestCase&TestResult_E2E_李涛_ID_去重数据.xlsx'

OutputPathFiles = []

# excel获取id
def get_id_by_excel_word(excelPath:str,wordPath:str,title:str,titleLvel:int):
    # 从excel读取id
    excel = OfficeExcel(excelPath)
    excel.open()
    excel.select_sheet(excel.show_all_sheetnames()[4])
    oldIdList = excel.get_value_by_col(4)
    newIdList = ['ExcelID']
    for i in oldIdList:
        s = re.findall('SA_R2_\d*',i)
        for j in s:
            newIdList.append(j)
    
    newIdList.sort()

    # 将word数据的ID读出来
    word = OfficeWord(wordPath)
    wordIdList = word.get_regular_string_by_title('SA_R2_\d*',title,titleLvel)
    wordIdList.sort()
    wordIdList.insert(0,'WordID')

    # 将ID导入新的 IDexcel
    excel_Id = OfficeExcel(excel.fileName.replace('.xlsx','_ID.xlsx'))
    excel_Id.open()
    excel_Id.select_sheet(excel_Id.show_all_sheetnames()[0])
    excel_Id.set_value_by_col(1,newIdList)
    excel_Id.highlight_duplicate_by_col(1,['ExcelID'])  # 去除重复
    excel_Id.set_value_by_col(2,wordIdList) # 将WordId写入IdExcel

    # 将word id导入 去重Excel
    excel_Dup = OfficeExcel(excel_Id.fileName.replace('.xlsx','_去重数据.xlsx'))
    excel_Dup.open()
    excel_Dup.select_sheet(excel_Dup.show_all_sheetnames()[0])
    excel_Dup.set_value_by_col(3,wordIdList)

    OutputPathFiles.append(excel_Id.pathFilename)
    OutputPathFiles.append(excel_Dup.pathFilename)
# 根据Word和excel来判断哪些id未被实现
def hightlight_undo(excelPath:str,target_col:int,current_col:int):
    # 打开excel
    excel = OfficeExcel(excelPath)
    excel.open()
    excel.select_sheet(excel.show_all_sheetnames()[0])

    # 比较差异
    targetList = excel.get_value_by_col(target_col)
    currentList = excel.get_value_by_col(current_col)
    addIndex=[]
    for i,d in enumerate(targetList,start = 1):
        if(i == len(targetList)):
            break
        try:
            if(targetList[i] != currentList[i]):
                currentList.insert(i,'XXX')
                addIndex.append(i)
        except IndexError:
            addIndex.append(i)
            currentList.insert(i,'XXX')
    # 另存高亮差异excel
    for i,d in enumerate(currentList):
        if(i in addIndex):
            excel.set_cell_highlight(i+1,current_col,11)
        excel.sheet.cell(i+1,current_col).value = d
    excel.wb.save(excel.fileName.replace('.xlsx','_高亮.xlsx'))

    OutputPathFiles.append(excel.fileName.replace('.xlsx','_高亮.xlsx'))

def stop():
    for i in OutputPathFiles:
        shutil.move(i,'output')


if __name__ == "__main__" :
    # 删除输出
    try:
        shutil.rmtree('output')
    except:
        print('[log] output dir not exist')
    # 创建输出文件夹
    os.mkdir('output')

    # 获取E2E测试用例需求ID
    get_id_by_excel_word(TEST_E2E_PATH,SA_DOC_PATH,'Data Transformation',2)

    # 显示E2E测试用例未完成ID
    hightlight_undo(TEST_E2E_DIFFER_PATH,target_col=3,current_col=2)
    
    # 获取SR测试用例需求ID
    get_id_by_excel_word(TEST_SR_PATH,SA_DOC_PATH,'S-R Communciation',2)

    # 显示SR测试用例未完成ID
    hightlight_undo(TEST_SR_DIFFER_PATH,target_col=3,current_col=2)

    print('--------------')


    stop()
    # str = 'SA_R2_180\nSA_R2_183\nSA_R2_181'
    # print(re.findall('SA_R2_\d*',str))


        

