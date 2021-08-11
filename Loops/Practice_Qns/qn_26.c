#include<stdio.h>
#include<math.h>

int main()
{
    int b;
    printf("Enter the binary number: ");
    scanf("%d",&b);
    int i=0,n=0;
    while(b>0)
    {
        n+=(b%10) * ((int)(pow(2,i)));
        i++;
        b/=10;
    }
    printf("%d",n);
    return 0;
}