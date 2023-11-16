// Write a program which accept number from user and return summtion of all its non factor

// Input:   12
// Output:  50

// Input:   10
// Output:  37

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if((iNo%iCnt) != 0)
        {
            iSum = iCnt + iSum;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}

