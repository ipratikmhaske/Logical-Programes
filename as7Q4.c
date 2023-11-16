// Write a program which accept number from user and return multiplication of all digits.

// Input:  2395
// Output: 270

// Input:  1018
// Output: 8

// Input:  9440
// Output: 144

// Input:  922432
// Output: 864

#include<stdio.h>

int MultDigit(int iNo)
{
     int iDigit = 0;
     int iTemp = 1;

     while(iNo>0)
     {
        iDigit = iNo % 10;

        if(iDigit > 0)
        {
            iTemp = iDigit * iTemp;
        }

        iNo = iNo / 10;
     }

     return iTemp;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = MultDigit(iValue);

    printf("%d", iRet);

    return 0;
}
