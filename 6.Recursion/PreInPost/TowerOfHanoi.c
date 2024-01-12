// we have three rods (A, B, and C) and N disks. Initially, all the disks are stacked in decreasing value of diameter i.e., the smallest disk is placed on the top and they are on rod A. The objective of the puzzle is to move the entire stack to another rod (here considered C), obeying the following simple rules: 

// Only one disk can be moved at a time.
// Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
// No disk may be placed on top of a smaller disk.
//S-source H-helper D-destination

#include <stdio.h>
void tower(int n,char s,char h,char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("Move disc on top of %c to %c \n",s,d);   
    tower(n-1,h,s,d);
    return;
}

int main(){
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}