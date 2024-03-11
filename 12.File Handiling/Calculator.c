// WAP to create a calculator that performs basic arithematic operations (add,subtract,multiply and divide) using switch case and functions.The calculator should input two numbers and an opertaor form user
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    char ch; // + , - , / , *
    scanf("%c", &ch);
    int b;
    scanf("%d", &b);
    switch (ch)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '/':
        printf("%d", (float)a / b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    default:
        printf("Invalid Operator");
        break;
    }
    return 0; 
    //9 bytes size 2* int = 4 and char = 1
}