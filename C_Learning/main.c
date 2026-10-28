#include <stdio.h>

#include <stdio.h>

int temperature = 25;

int main(void)
{
    if (temperature > 30)
    {
        printf("A\n");
    }

    if (temperature > 20)
    {
        printf("B\n");
    }
    else
    {
        printf("C\n");
    }

    printf("D\n");

    return 0;
}
/*
#include <stdio.h> makes the declaration of printf available to your program.

int main(void) defines the function where execution begins in this program.

int temperature = 25; declares an integer variable and initializes it to 25.

int adjusted = temperature + 5; calculates a new value and stores it in another integer variable.

printf prints formatted text. Each %d is replaced with an integer value, and \n means newline.

return 0; indicates successful completion to the host environment.
*/