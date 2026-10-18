#include <stdio.h>

int main(void)
{
  int temperature = 25; // Example temperature value
  int adjusted = temperature + 5;

  temperature = 30; // Update temperature to a new value

  printf("Temperature: %d\n", temperature);
  printf("Adjusted: %d\n", adjusted);
  
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