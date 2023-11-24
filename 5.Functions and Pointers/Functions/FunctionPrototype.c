#include <stdio.h>

int main()
{
    void fun(); // prototype of fun()
    fun();
    return 0;
}
void fun()
{
    printf("Hello");
    return;
}
