#include <stdio.h>
float add(float x, float y)
{
    return x+y;
}
float sub(float x, float y)
{
    return x-y;
}
float div(float x, float y)
{
    return x/y;
}
int main()
{
    int a;
    float b,c;
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------\n");

    printf("Enter the first number\n");
    scanf("%f",&b);
    printf("Enter the second number\n");
    scanf("%f",&b);

    printf("Enter + for addition : ");
    printf("Enter - for subtraction : ");
    printf("Enter / for division : ");
    printf("Enter * for multiplicationS : ");

    switch (a)
    {
    case '+':
        printf("The sum of the two numbers is ");
        printf(add());
        break;
    case '-':
        printf("The subtration of the two numbers is ");
        printf(sub());
        break;
    case '/':
        printf("The division of the two numbers is ");
        printf(div());
        break;
    case '*':
        printf("The multiplication of the two numbers is ");
        printf(mult());
        break;

    default:
        printf("Invalid input");
        break;
    }
    return 0;
}