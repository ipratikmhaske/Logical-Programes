// Accept number from user and display below pattern.

// Input :  8
// Output : 2   4   6   8   10  12  14  16

#include<stdio.h>

void Pattern(int iNo)
{
   int iCnt = 0;

   for(iCnt=0; iCnt<iNo; iCnt++)
   {
    printf("%d ",2*(iCnt+1));
   }

}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}