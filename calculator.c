#include <stdio.h>
float add(float num1, float num2);
float sub(float num1, float num2);
float div(float num1, float num2);
float mult(float num1, float num2);

int main()
{
    int a;
    float b, c, temp;
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------\n");

    printf("Enter 1 for addition : \n");
    printf("Enter 2 for subtraction : \n");
    printf("Enter 3 for division : \n");
    printf("Enter 4 for multiplication : \n");
    scanf("%d", &a);

    printf("Enter the first number\n");
    scanf("%f", &b);
    printf("Enter the second number\n");
    scanf("%f", &c);

    switch (a)
    {
    case 1:
        printf("The sum of the two numbers is ");
        temp = add(b, c);
        break;
    case 2:
        printf("The subtration of the two numbers is ");
        temp = sub(b, c);
        break;
    case 3:
        printf("The division of the two numbers is ");
        temp = div(b, c);
        break;
    case 4:
        printf("The multiplication of the two numbers is ");
        temp = mult(b, c);
        break;

    default:
        break;
        printf("Invalid input");
    }
    printf("%f",temp);
    return 0;

}
float add(float num1, float num2)
{
    return num1 + num2;
}
float sub(float num1, float num2)
{
    return num1 - num2;
}
float div(float num1, float num2)
{
    return num1 / num2;
}
float mult(float num1, float num2)
{
    return num1 * num2;
}