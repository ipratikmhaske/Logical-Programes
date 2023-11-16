// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 6   iCol = 6

// Output:   *  *  *  *  *  *
//           *           *  *  
//           *        *     *
//           *     *        *
//           *  *           *
//           *  *  *  *  *  *

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;

    for(iCntRow = iRow;iCntRow > 0; iCntRow--)
    {
        for(iCntCol = 1;iCntCol <= iCol; iCntCol++)
        {
            if((iCntRow == iCntCol) || (iCntRow ==1) || (iCntCol == 1) || (iCntRow == iRow) || (iCntCol == iCol))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
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