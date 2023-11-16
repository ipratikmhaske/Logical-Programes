// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 6    iCol = 5

// Output:   1  2  3  4
//           1  *  *  4
//           1  *  *  4
//           1  2  3  4   

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;
    int iNumber = 0;

    for(iCntRow = 1;iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1;iCntCol <= iCol; iCntCol++)
        {
            iNumber++;
            
            if((iCntRow == 1) || (iCntCol ==1) || (iCntRow == iRow) || (iCntCol == iCol))
            {
                printf("%d\t",iNumber);
            }
            else
            {
                printf("*\t");
            } 
        }
        iNumber = 0;
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