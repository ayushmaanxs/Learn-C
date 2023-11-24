#include <stdio.h>
int main()
{
    int x = 5;
    printf("%d\n", x);
    printf("%d\n", x++); // use x then increment
    printf("%d\n", x);
    printf("%d\n", ++x); // first do increment then use
    return 0;
}