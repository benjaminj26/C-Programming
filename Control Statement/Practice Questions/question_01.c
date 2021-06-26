#include<stdio.h>

int main()
{
    int n1, n2;
    char ch;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    scanf("%c",&ch);
    printf("Enter the operator: ");
    scanf("%c",&ch);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    switch (ch)
    {
    case '+' :
        printf("Result = %d\n\n",n1+n2);
        break;
    case '-':
        printf("Result = %d\n\n",n1-n2);
        break;
    case '*':
        printf("Result = %d\n\n",n1*n2);
        break;
    case '/':
        printf("Result = %d\n\n",n1/n2);
        break;
    case '%':
        printf("Result = %d\n\n",n1%n2);
        break;
    default:
    printf("Wrong operator entered!!\n Try Again\n\n");
        break;
    }
    return 0;
}