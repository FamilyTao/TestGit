#include "APP_CptObs.h"
#include "Rte_CptObs.h"
#include "Rte_CptObs_Type.h"

static int read_count = 1;
void AppRunnable_Obs(void)
{

        // Step.7
    if(0 != read_count)
    {
        PrimitiveUint16 value_receive1 = Rte_Read_RpExplicit_dataElementPrimitive();
        read_count--;
    }
}
