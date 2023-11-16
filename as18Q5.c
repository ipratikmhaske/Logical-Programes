// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 6   iCol = 6

// Output:   1  2  3  4  5
//           1  2        5  
//           1     3     5
//           1        4  5
//           1  2  3  4  5

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;
    int iNumber = 1;

    for(iCntRow = 1;iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1;iCntCol <= iCol; iCntCol++)
        {
            if((iCntRow == iCntCol) || (iCntRow ==1) || (iCntCol == 1) || (iCntRow == iRow) || (iCntCol == iCol))
            {
                printf("%d\t", iNumber);
                iNumber++;
            }
            else
            {
                printf(" \t");
                iNumber++;
            }           
        }
        iNumber = 1;
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d\n %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}