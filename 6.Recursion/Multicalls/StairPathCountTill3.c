// You are given 'n' representing number of stairs in a staircase .You are standing at the bottom of the staircase .You are allowed to climb 1 steps , 2 steps,3 steps in one move.Count the number of paths that can be used to climb the staircase up
// Similar to fibonacci series question

#include <stdio.h>
int stair(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if(n==3)
        return 4;
    int totalWays = stair(n - 1) + stair(n - 2) + stair(n-3);
    return totalWays;
}

int main()
{
    int n;
    printf("Enter number of steps available: ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("%d", stair(n));
    return 0;
}