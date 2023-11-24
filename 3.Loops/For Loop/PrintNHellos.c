// Print Hello World 'n' times.Take 'n' as input from user

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of prints: ");
    scanf("%d", &n);
    // SCOPE Of Variables
    //  for(int i=1;i<=n;i++){
    //      printf("Hello World\n");
    //  };

    int i;
    for (i = 1; i <= 6; i++)
    {
        printf("Hello World \n");
    }
    printf("%d", i);
    return 0;
}