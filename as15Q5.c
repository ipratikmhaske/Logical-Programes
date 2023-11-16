// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 4    iCol = 4

// Output:   1  2  3  4
//           2  3  4  5
//           3  4  5  6
//           4  5  6  7

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;
    int iNumber = 1;
    int iNumberCnt = 2;

    for(iCntRow = 1;iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1;iCntCol <= iCol; iCntCol++)
        {
            
            printf("%d\t", iNumber);
            iNumber++;
            
          
        }
        iNumber = iNumberCnt++;
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