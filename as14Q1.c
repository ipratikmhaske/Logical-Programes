// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 4    iCol = 4

// Output:   A  B  C  D  
//           A  B  C  D
//           A  B  C  D
//           A  B  C  D   

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;
    char iCount = '\0';

    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1,iCount = 'A';iCntCol <= iCol; iCntCol++,iCount++)
        {
             printf("%c\t", iCount);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d\n %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}