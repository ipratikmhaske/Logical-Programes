// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 3    iCol = 4

// Output:   1  2   3   4    
//           5  6   7   8  
//           9  10  11  12    

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;
    int iCnt = 1;

    for(iCntRow = 1;iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1;iCntCol <= iCol; iCntCol++)
        {
            printf("%d\t", iCnt);
            iCnt++;
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