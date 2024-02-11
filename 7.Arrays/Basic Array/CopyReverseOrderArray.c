// Write a program to copy the contents of an array into another in the reverse order.
#include <stdio.h>
int main()
{
    int arr[7] = {4, 6, 22, 3, 16, 12, 29};
    int rarr[7]; // rarr stands for Reversed Array
    for (int i = 6; i >= 0; i--)
    {
        rarr[7 - i] = arr[i];
        printf("The %dth element of the reversed array is : %d\n", 7 - i, rarr[7 - i]);
    }
}