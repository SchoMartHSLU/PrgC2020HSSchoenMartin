#include <stdio.h>

int main( int argc, char* argv[] )
{
    int x = 0, y = 0;
    printf("before: x %d, y %d\n", x,y);

    //Erster Fall
    x = y ? 1 : 100;
    printf("after x %d, y %d\n", x,y);

    //Zweiter Fall
    y = 200;
    x = y ? 1 : 100;
    printf("(y=200)after x %d, y %d\n", x,y);

    //Dritter Fall
    y = -1;
    x = y ? 1 : 100;
    printf("(y=-1)after x %d, y %d\n", x,y);




	return 0;
}
