#include <stdio.h>

int main()
{
    int x = 7,y =10, z = 5,result = 0;
    result = ++y - 10 || z - 5 && x++;
    printf("%d %d %d %d \n",x,y,z,result);
    result += y++ - 11 || z++ - 5 && x++;
    printf("%d %d %d %d \n",x,y,z,result);
    result += y + 1 > 11 && (z++ >= 6 || x++);
    printf("%d %d %d %d \n",x,y,z,result);
}
