/*
Print Pascal Triangle

      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 10 10 5 1
1 6 15 20 15 6 1

*/
#include <stdio.h>
// int factorial(int x){
//     int fact =1;
//     for(int i=2;i<=x;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// int combination(int n,int r){
//     int icj=factorial(n)/(factorial(r)*factorial(n-r));
//     return icj;
// }
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(int k=0;k<=i;k++){
    //         int icj=combination(i,k);
    //         printf("%d ",icj);
    //     }
    //     printf("\n");
    // }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        int first = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", first);
            first = first * (i - j) / (j + 1); // icj
        }
        printf("\n");
    }
    return 0;
}