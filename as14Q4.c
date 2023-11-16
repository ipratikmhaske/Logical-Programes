// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 4    iCol = 5

// Output:   4  4  4  4  4  
//           3  3  3  3  3
//           2  2  2  2  2
//           1  1  1  1  1

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;

    for(iCntRow = 1;iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = iRow;iCntCol > 0; iCntCol--)
        {
            printf("%d\t", iCntRow);
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