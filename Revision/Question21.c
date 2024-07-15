/*
Hourglass Pattern

* * * *
 * * * 
  * *
   *
  * *
 * * *
* * * *

*/
#include <stdio.h>
int main(){
  int n,a;
  printf("Enter number of rows: ");
  scanf("%d",&n);
  int nsp=0;
  int nst=n-2;
  a=nst-2;
  for(int i=1;i<=n;i++){
    if(i>a){
      for(int j=1;j<=nsp;j++){
        printf(" ");
      }
      for (int k=1;k<=nst;k++){
        printf("* ");
      }
      nsp++;
      nst--;
    }
    else{
      for (int k=1;k<=nst;k++){
        printf("* ");
      }
      for(int j=1;j<=nsp;j++){
        printf(" ");
      }
      nsp--;
      nst++;
    }
    printf("\n");
  }
  return 0;
}