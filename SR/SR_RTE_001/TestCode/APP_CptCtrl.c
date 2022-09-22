#include "APP_CptCtrl.h"
#include "Rte_CptCtrl.h"
#include "Rte_CptCtrl_Type.h"

static int send_count = 1;
PrimitiveUint16 Value_Send1 = 1;
void AppRunnableCtrl(void)
{
    int ret = 0;

    switch (send_count)
    {
        case 1:
                // Step.1
                ret = Rte_Write_PpExplict_dataElementPrimitive(Value_Send1); //ret = RTE_E_OK
                send_count++;
            break;

        default:
            break;
    }
}

