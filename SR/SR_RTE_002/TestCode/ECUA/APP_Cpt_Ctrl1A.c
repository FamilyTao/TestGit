#include "APP_Cpt_Ctrl1A.h"
#include "Rte_Cpt_Ctrl1A.h"
#include "Rte_Cpt_Ctrl1A_Type.h"

static int send_count = 1;
PrimitiveUint16 Value_Send1 = 1;
StructA Value_Send2 = {0,1,2,3};
void AppRunnableCtrl1A(void)
{
    int ret = 0;

    switch (send_count)
    {
        case 1:
                // Step.1
                ret = Rte_IWrite_RunnableCtrl1A_PpComplexData_dataElementPrimitive(Value_Send1); //ret = RTE_E_OK
                send_count++;
            break;
        case 2:
                // Step.4
                PrimitiveUint16 *p = Rte_IWriteRef_RunnableCtrl1A_PpStructA_dataElementsStructA();
                *value_p = Value_Send2;
                send_count++;
            break;

        default:
            break;
    }

}

