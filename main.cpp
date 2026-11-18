#include "FEHLCD.h"

int main()
{
    LCD.WriteLine("Hello World!");
    while (1) {
        LCD.Update();
        // Never end
        //Yash test commit
    }
    return 0;

}