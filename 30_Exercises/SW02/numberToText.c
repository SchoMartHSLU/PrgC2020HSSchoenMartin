#include <stdio.h>
int readValue = 0;


int main(void)
{
    while (true)
    {
        /* code */

        printf("Enter a number between (including) 0 and 9 to display the number as text. Enter 10 to stop the program: ");
        scanf("%d", &readValue);

        if (readValue > 10 || readValue < 0)
        {
            printf("Invalid -> try again");
        }
        else if (readValue == 10)
        {
            printf("Thank you. Good bye.");
            return 0;
        }
        else
        {

            printf("%d as text is %c", readValue, WrittenNumber);
        }
    }
}
