#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is an even number\n\n",n);
    }
    else
    {
        printf("%d is an odd number\n\n",n);
    }
    return 0;
}