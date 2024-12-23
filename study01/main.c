#include <stdio.h>
#include "app.h"
int main(int argc, char* argv[])
{
        int num1 = 100, num2 = 55;
        int value = 0;
        value = add(num1, num2);
        printf("%d + %d = %d\r\n", num1, num2, value);
        value = sub(num1, num2);
        printf("%d - %d = %d\r\n", num1, num2, value);
        return 0;
}
                                        
                                        
