// WAP to create a calculator that performs basic arithematic operations (add,subtract,multiply and divide) using switch case only.The calculator should input two numbers and an opertaor form user
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    char ch; // + , - , / , *
    scanf("%c", &ch);
    int b;
    scanf("%d", &b);
    if (ch == '+')
        printf("%d", a + b);
    if (ch == '-')
        printf("%d", a - b);
    if (ch == '/')
        printf("%d", (float)a / b);
    if (ch == '*')
        printf("%d", a * b);
    return 0;
}