// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 5    iCol = 5

// Output:   a  b  c  d  e 
//           1  2  3  4  5
//           a  b  c  d  e
//           1  2  3  4  5
//           a  b  c  d  e

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;
    int iNumber = 1;
    char ch = 'a';

    for(iCntRow = 1;iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1;iCntCol <= iCol; iCntCol++)
        {

                if((iCntRow % 2) == 0)
            {
                printf("%d ", iNumber);
                iNumber++;
            }
            else
            {
                printf("%c ",ch);
                ch++;
            }
        }
        iNumber = 1;
        ch = 'a';
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