// Print table of 19 upto 10 multiples
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 190; i++)
    {
        if (i % 19 == 0)
            printf("%d ", i);
    }
    return 0;
}