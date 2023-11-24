// Print the sum of this series: 1-2+3-4+5-6... upto n
// Finding Series Sum With Improper Way It is improper way because if we put n=1lakh then loop will run 1 lakh time
/*
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Upto how many terms you want the sum: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum - i;
        }
        else
        {
            sum = sum + i;
        }
    };
    printf("The sum of the series is %d", sum);
    return 0;
}
*/

// More better way for the same question-Derive the formula for the sum of even odd
#include <stdio.h>
int main()
{
    int n, sum;
    printf("Upto how many terms you want the sum: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        sum = -(n / 2);
        printf("The sum of the series is %d", sum);
    }
    else if (n % 2 != 0)
    {
        sum = n - (n - 1) / 2;

        printf("The sum of the series is %d", sum);
    };
    return 0;
}