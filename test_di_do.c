#include "revpi_do.h"
#include "revpi_di.h"

int main()
{
int pin_state;
        while(1)
        {
        pin_state = 0;
        writeVariableValue("O_1",pin_state);
        sleep(1);
        printf("Wrote value %d on pin O_1 \n", pin_state);
        readVariableValue("I_1",&pin_state);
        sleep(1);
        printf("Read value %d from pin I_1 \n", pin_state);

        pin_state = 1;
        writeVariableValue("O_1",pin_state);
        sleep(1);
        printf("Wrote value %d on pin O_1 \n", pin_state);
        readVariableValue("I_1",&pin_state);
        sleep(1);
        printf("Read value %d from pin I_1 \n", pin_state);
        }
}

