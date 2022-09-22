#include "APP_Cpt_Obs1A.h"
#include "Rte_Cpt_Obs1A.h"
#include "Rte_Cpt_Obs1A_Type.h"


static int read_count = 1;
void AppRunnable_Obs1A(void)
{
    // Step.2
    if(0 != read_count)
    {
        PrimitiveUint16 Value_Receive1 = Rte_IRead_Runnable_Obs1A_RpData_dataElementPrimitive();
        read_count--;
    }
}