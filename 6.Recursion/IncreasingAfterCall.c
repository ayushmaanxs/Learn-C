// Print 1 to n after recursive call
#include <stdio.h>
void increasing(int n)
{
    if (n == 0) return; //base case
    increasing(n - 1);  //call
    printf("%d\n", n);  //code
    return;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    increasing(n);
    return 0;
}