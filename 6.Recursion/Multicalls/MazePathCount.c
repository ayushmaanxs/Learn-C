//Consider a boy standing at (0,0) in a matrix of order (N*M).He has to reach the destination at (N,M).Find all the possible number of paths that the boy can take to reach from the source to destination.The direction in which he is allowed to move is Down 'D' and Right 'R'.Also he can take only one step at a time.
//CR-current rows
//CC-current Column
//ER-Ending Row
//EC-Ending Column

#include <stdio.h>

int maze(int cr,int cc,int er,int ec) {
    int rightWays=0;
    int downWays=0;
    if(cr==er && cc==ec){
        return 1;
    }
    if(cr==er){ //Only Right ways should be called
        rightWays += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){ //Only downw ways should be called
        downWays += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightWays+=maze(cr,cc+1,er,ec);
        downWays+=maze(cr+1,cc,er,ec);
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
    int NoOfWays=maze(1,1,n,m);
    printf("Total possible number of ways is : %d",NoOfWays);
    return 0;
}