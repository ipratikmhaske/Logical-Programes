// Accept N numbers from user and display all such numbers which contains 3 digits in it

// Input:   N:  6
//            Elements: 8225  665  3  76  953  858
// Output:  665  953  858

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
   int iCnt = 0;
   int iDigitCount = 0;
   int temp = 0;
   

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      temp = Arr[iCnt];

      while(temp != 0)
      {
        temp % 10;

        if(temp != 0)
        {
          iDigitCount++;  
        }

        temp = temp / 10;
        
      }

      if(iDigitCount == 3)
      {
        printf("%d\t", Arr[iCnt]);
      }

      iDigitCount = 0;
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

    Digits(p, iSize);

    free(p);

    return 0;
}