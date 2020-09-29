#include <stdio.h>
#include <stdbool.h> //library für boolesche datentypen in c - true gibt 1 und fals gibt 0. 



int readValue = 0;
const char writtenNumber[10][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

int main(void)
{

    while (true)
    {
        /* code */

        printf("Enter a number between (including) 0 and 9 to display the number as text. Enter 10 to stop the program: ");
        scanf("%i", &readValue);

        if (readValue > 10 || readValue < 0)
        {
            printf("Invalid -> try again\n");
        }
        else if (readValue == 10)
        {
            printf("Thank you. Good bye.");
            return 0;
        }
        else
        {

            printf("%i as text is %s\n", readValue, writtenNumber[readValue]);
        }
    }
}
