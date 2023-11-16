// Accept two numbers from user and display first number in second number of times

// input:   12 5
// output:  12 12 12 12 12

// input:   -2 3
// output:  -2 -2 -2

// input:   21 -3
// output:  21 21 21

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency<0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt =0; iCnt!=iFrequency; iFrequency-- )
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    printf("Enter the frequency\n");
    scanf("%d", &iCount);

    Display(iValue,iCount);

    return 0;
}