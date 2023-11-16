 // Accept N numbers from user and display summation of digits of each number

// Input:   N:  6
//            Elements: 8225  665  3  76  953  858
// Output:  17  17  3  13  17  21

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)
{
   int iCnt = 0;
   int iDigit = 0;
   int temp = 0;
   int iSum = 0;
   

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      temp = Arr[iCnt];

      while(temp != 0)
      {
       iDigit = temp % 10;

        if(iDigit != 0)
        {
          iSum = iSum + iDigit;

        }

        temp = temp / 10;
        
      }
      
      printf("%d\t", iSum);

      iSum = 0;
    }
}


int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int * p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d\n", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    DigitSum(p, iSize);

    free(p);

    return 0;
}