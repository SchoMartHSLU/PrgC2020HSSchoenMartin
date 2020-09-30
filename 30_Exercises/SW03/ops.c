#include <stdio.h>

int main(int argc, char *argv[])
{
    short largeShort = 32760;
    printf("initial: %d ", largeShort);
    largeShort = largeShort + 12345;
    printf("after: %d \n\n", largeShort);

    int numerator = 19, denominater = 5, result = 0;

    printf("before: num %d, den %d, res %d \n", numerator, denominater, result);
    result = numerator / denominater;
    printf("after: num %d, den %d, res %d \n", numerator, denominater, result);


    float e = 2.71828128;
    printf("before: %f\n", e);
    e++;
    printf("after: %f\n", e);
    e--;
    printf("after: %f\n", e);

    float dblNumber = 12.8;
    printf("before: %f \n", dblNumber);
    dblNumber = dblNumber%3;
    printf("after: %f\n",dblNumber);



    return 0;
}
