// Find the second largest element in a given array
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7] = {-10, 4, 4, -80, -19, -5, -12};
    int max = INT_MIN;
    int smax = INT_MIN;

    // Solving using single loop
    for (int i = 0; i <= 6; i++)
    {
        if (max < arr[i])
        {
            smax = max;   // smax is now previous max
            max = arr[i]; // max is now new max
        }
        //&& max!=arr[i] - to avoid wrong result if any element of array is present more than one time i.e., 4 in this case 

        else if (smax < arr[i] && max!=arr[i]) // if this part runs then it means that our max > arr[i]
        {
            smax = arr[i];
        }
    }

    /*
    Solving Using Double loop
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    // printf("%d",max);
    for(int i=0;i<=6;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    */
    printf("%d", smax);
    return 0;
}