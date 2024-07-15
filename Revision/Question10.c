/*
Print the given pattern Alphabet and Number Triangle

1
A B
1 2 3
A B C D
1 2 3 4 5

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 65;
        for(int j=1;j<=i;j++){
            if(i%2==0){
                char ch=(char)a;
                printf("%c ",ch);
                a++;
            }
            else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}
