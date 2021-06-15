// Program to find largest of two numbers using conditional operator //

#include <stdio.h>
int main()
{
    int n1, n2, g;
    printf("Enter the first no: ");
    scanf("%d", &n1);
    printf("Enter the second no: ");
    scanf("%d", &n2);
    g = (n1 > n2) ? n1 : n2;
    printf("Greatest no is: %d", g);
    return 0;
}