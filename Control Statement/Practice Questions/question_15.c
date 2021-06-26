#include<stdio.h>

int main()
{
    int day;
    printf("Enter the day in integer: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("\nSunday\n\n");
        break;
    case 2:
        printf("\nMonday\n\n");
        break;
    case 3:
        printf("\nTuesday\n\n");
        break;
    case 4:
        printf("\nWednesday\n\n");
        break;
    case 5:
        printf("\nThursday\n\n");
        break;
    case 6:
        printf("\nFriday\n\n");
        break;
    case 7:
        printf("\nSaturday\n\n");
        break;
    default:
        printf("\nWrong input!!\nTry again\n\n");
    }
    return 0;
}