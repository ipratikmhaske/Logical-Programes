// Write a program which accept number from user and count frequency of such a digits which are less than 6

// Input:  1234
// Output: 4

// Input:  3982
// Output: 2

// Input:  17921
// Output: 3

#include<stdio.h>

int FreqCount(int iNo)
{
    int iDigit = 0;
    int iTemp = 0;

    while(iNo>0)
    {
        iDigit = iNo%10;

        if(iDigit<6)
        {
            iTemp++;
        }

        iNo = iNo/10;
    }

    return iTemp;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = FreqCount(iValue);

    printf("%d", iRet);

    return 0;
}