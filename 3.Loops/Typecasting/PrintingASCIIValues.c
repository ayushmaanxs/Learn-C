// Write a program to print all the ASCII Values and their equivalent characters of 26 alphaets using a while loop
#include <stdio.h>
int main()
{
    // Using Typecasting
    for (int i = 65; i <= 90; i++)
    {
        printf("%d -> ", i);
        char ch = (char)i;
        printf("%c\n", ch);
    };
    return 0;
}