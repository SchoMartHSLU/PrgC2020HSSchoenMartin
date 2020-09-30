#include <stdio.h>
#include <stdlib.h>

void bubble(int *array, int elemente)
{
    int i, temp;

    while (elemente--)
        for (i = 1; i <= elemente; i++)
            if (array[i - 1] > array[i])
            {
                temp = array[i];
                array[i] = array[i - 1];
                array[i - 1] = temp;
            }
}

int main(int argc, char *argv[])
{
    int i;
    int value1 = 0, value2 = 0, value3 = 0;
    // make sure, we have exactly 3 arguments
    if (argc != 4)
    {
        printf("usage: logicOperators val1 val2 val3\n");
    }
    else
    {
        value1 = atoi(argv[1]);
        value2 = atoi(argv[2]);
        value3 = atoi(argv[3]);
        printf("Value1 %d, Value2 %d, Value3 %d\n", value1, value2, value3);

        if (value1 < 0 || value2 < 0 || value3 < 0)
        {
            printf("The entered values are not positiv. Exiting.");
        }
        else
        {
            int arraySortieren[] = {value1, value2, value3};
            int N = sizeof(arraySortieren) / sizeof(int);
            bubble(arraySortieren, N);

            for (i = 0; i < N; i++)
            {
                printf("%d\n ", arraySortieren[i]);
            }
        }
    }
    return 0;
}
