/*****************************************************************

CREATOR - REENPHY GEORGE

TITLE - Reverse the entered string.

DATE - 13th SEPTEMBER, 2021

*****************************************************************/

#include<stdio.h>
#include<string.h>

void reverse(char str[])
{
    int len = strlen(str);
    int i=0 , j=len-1 , flag=0;
    while(i <= j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed String: %s" , str);
}
int main()
{
    char str[30];
    printf("Enter the string: ");
    gets(str);
    reverse(str);    
}