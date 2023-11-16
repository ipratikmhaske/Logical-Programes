// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 4    iCol = 5

// Output:   2  4  6  8  10
//           1  3  5  7  9
//           2  4  6  8  10
//           1  3  5  7  9

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;
    int iEvenCount = 2, iOddCount = 1;

    for(iCntRow = 0;iCntRow < iRow; iCntRow++)
    {
        for(iCntCol = 1;iCntCol <= iCol; iCntCol++)
        {

                if((iCntRow % 2) == 0)
            {
                printf("%d ", iEvenCount);
                iEvenCount = iEvenCount +2;
            }
            else
            {
                printf("%d ",iOddCount);
                iOddCount = iOddCount +2;

            }
        }
        iOddCount = 1;
        iEvenCount = 2;
        printf("\n");
    }
}

// void Pattern(int row, int col)
// {
//     int rowNumber = 2;
//     int j = 2;
//     int k =1;
//     for (int i = rowNumber; i <= row+2; i++)
//     {
//         for(int g = col;)
//         if (rowNumber % 2 == 0)
//         {
//             printf("%d ", j);
//             j = j + 2;
//         }
//         else{
//             printf("%d ",k);
//             k=k+2;
//         }
//     }

// }

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d\n %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}