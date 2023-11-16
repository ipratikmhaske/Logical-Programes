// Accept number of rows and number of columns from user and display below pattern

// Input:   iRow = 4    iCol = 4

// Output:   A  B  C  D  
//           a  b  c  d
//           A  B  C  D
//           a  b  c  d   

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntRow = 0;
    int iCntCol = 0;
    char cCount = '\0', cVar = '\0';

    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1,cCount = 'A',cVar = 'a';iCntCol <= iCol; iCntCol++,cCount++,cVar++)
        {
            if((iCntRow % 2) !=  0)
            {
                printf("%c\t", cCount);
            }
            else
            {
                printf("%c\t", cVar);
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