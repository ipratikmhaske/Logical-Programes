// Accept number from user and check wheather number is even or odd

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo%2) ==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    return 0;
}