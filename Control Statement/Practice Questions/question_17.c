#include<stdio.h>

int main()
{
    int l,b,a,p;
    printf("Enter length of the rectangle: ");
    scanf("%d",&l);
    printf("Enter breadth of the rectangle: ");
    scanf("%d",&b);
    p=2*(l+b);
    a=(l*b);
    if(a>p)
    {
        printf("\nArea is greater than perimeter\n\n");
    }
    else if(a<p)
    {
        printf("\nArea is less than perimeter\n\n");
    }
    return 0;
}