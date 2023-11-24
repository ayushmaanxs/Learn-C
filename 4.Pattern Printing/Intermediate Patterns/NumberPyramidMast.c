/*
Print the given pattern

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int nsp=n-1;  //Number of spaces
    int nst=1;  //Number of stars
    for(int i=1;i<=n;i++){
        for(int q=1;q<=nsp;q++){  //spaces ke liye loop
            printf("  ");
        }
        nsp--;
        for(int j=1;j<=i;j++){  //normal number triangle
            printf("%d ",j);
        }
        int a=i-1;
        for(int k=1;k<=i-1;k++){  //extra numbers in reverse order
            printf("%d ",a);
            a--;
        }
        
        printf("\n");
    }
    return 0;
}