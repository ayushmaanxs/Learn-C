#include <stdio.h>
int main()
{
    // Using Typecasting
    int x = 65;
    printf("%d\n", x);
    char ch = (char)x;
    printf("%c\n", ch);

    char ch1 = 'A';
    printf("%c\n", ch1);
    int y = (int)ch1;
    printf("%d\n", y);
    return 0;
}