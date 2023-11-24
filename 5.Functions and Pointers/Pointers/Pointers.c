#include <stdio.h>
int main()
{
    int a = 5;
    //int* -> int ka address store krta hai
    int *x = &a;    //storing address of 'a' inside 'x'
    printf("%p\n", x);  // printing the thing stored inside 'x' i.e., address of 'a'
    printf("%p\n", &x); // printing address of 'x'
    printf("%d\n", *x); // printing the value whose address is stored inside 'x'
    *x = 7;             // updating value of 'a'
    printf("%d\n", a);    // printing updated value of 'a'
    //int** -> int* ka address store krta hai
    int** y = &x;
    int***z=&y;
    printf("%p\n",y);
    printf("%d\n",**y);
    printf("%d",***z);
    return 0;
}