/**************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to calculate total marks, percentage and print the grade.

DATE - 10th AUGUST, 2021

**************************************************************************/

#include<stdio.h>

int main()
{
    int roll , m1 , m2 , m3;
    char name[24];
    printf("Enter student's name : ");
    gets(name);
    printf("Enter the roll no: ");
    scanf("%d" , &roll);
    printf("Enter the mark of 1st subject: ");
    scanf("%d" , &m1);
    printf("Enter the mark of 2nd subject: ");
    scanf("%d" , &m2);
    printf("Enter the mark of 3rd subject: ");
    scanf("%d" , &m3);
    int total = m1 + m2 + m3;
    int percent = total / 3;
    if(percent >= 75)
    {
        printf("\nFirst Class with Distinction\n\n");
    }
    else if(percent >= 60 && percent < 75)
    {
        printf("\nFirst Class\n\n");
    }
    else
    {
        printf("\nSecond Class\n\n");
    }
    return 0;
}