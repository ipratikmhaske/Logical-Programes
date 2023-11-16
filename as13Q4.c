// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 3    iCol = 4

// Output:   *  #  *  #  
//           *  #  *  #
//           *  #  *  #   

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;

    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1; iCntCol <= iCol; iCntCol++)
        {
            if((iCntCol % 2) != 0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
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