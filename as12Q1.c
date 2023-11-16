// Accept number from user and display below pattern.

// Input : 5
// Output : A B C D E

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char cAlpha = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", cAlpha);
        cAlpha++;

      if(cAlpha > 'Z')
        {
            cAlpha ='A';
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}