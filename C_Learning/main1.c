#include <stdio.h>

int main(void)
{
    int temperature = 25;

    if (temperature > 25)
    {
        printf("Temperature is high\n");
    }

    if (temperature < 25)
    {
        printf("Temperature is low\n");
    }

    printf("Temperature: %d\n", temperature);

    return 0;
}