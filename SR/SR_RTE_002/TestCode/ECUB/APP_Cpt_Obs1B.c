#include "APP_Cpt_Obs1B.h"
#include "Rte_Cpt_Obs1B.h"
#include "Rte_Cpt_Obs1B_Type.h"

static int read_count = 1;
void AppRunnable_Obs1B(void)
{

        // Step.7
    if(0 != read_count)
    {
        StructA value_receive2 = Rte_IRead_Runnable_Obs1B_RpStruct_dataElementsStructA();
        read_count--;
    }
}
