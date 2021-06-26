#include<stdio.h>

int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Congratulation! You are eligible for casting your vote.\n\n");
    }
    else
    {
        printf("\nSorry, You are'nt eligible for casting your vote.\n\n");
    }
    return 0;
}