#include<stdio.h>

int main()
{
    int temp;
    printf("Enter the temperature: ");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("\nFreezing weather\n\n");
    }
    else if (temp>=0&&temp<10)
    {
        printf("\nCold weather\n\n");
    }
    else if (temp>=10&&temp<20)
    {
        printf("\nNormal in Temp\n\n");
    }
    else if (temp>=20&&temp<30)
    {
        printf("\nVery Cold weather\n\n");
    }
    else if (temp>=30&&temp<40)
    {
        printf("\nHot\n\n");
    }
    else
    {
        printf("\nVery Hot\n\n");
    }
    return 0;
}