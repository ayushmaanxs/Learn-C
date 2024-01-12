//Consider a boy standing at (0,0) in a matrix of order (N*M).He has to reach the destination at (N,M).Find all the possible number of paths that the boy can take to reach from the source to destination.The direction in which he is allowed to move is Down 'D' and Right 'R'.Also he can take only one step at a time.
//we will do it using lesser number of variables

#include <stdio.h>

int maze2(int n,int m) {
    int rightWays = 0;
    int downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){   //we can not go down
        rightWays +=maze2(n,m-1);
    }
    if(m==1){
        downWays +=maze2(n-1,m);
    }
    if(n>1 && m>1){
        rightWays +=maze2(n,m-1);
        downWays +=maze2(n-1,m);
    }
    int totalWays = rightWays + downWays;
    return totalWays;
}

int main(){
    int n,m;
    printf("Enter number of rows of the maze: ");
    scanf("%d",&n);
    printf("Enter number of columns of the maze: ");
    scanf("%d",&m);
    int NoOfWays=maze2(n,m);
    printf("Total possible number of ways is : %d",NoOfWays);
    return 0;
}