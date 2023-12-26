// Print decreasing increasing From 1 to n after recursive call
#include <stdio.h>
void incdec(int n)
{
    if (n == 0) return; //base case
    printf("%d\n", n);  //code
    incdec(n - 1);  //call
    printf("%d\n", n);  //code
    return;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    incdec(n);
    return 0;
}