#include <stdio.h>
int main(void)
{
    int k,i=50,j=100,l;
    i = i | (j&&100);
    k=i||(j||100);
    l=i&(j&&100);
    printf("%d %d\n",i,j);
    printf("%d %d",k,l);
}
