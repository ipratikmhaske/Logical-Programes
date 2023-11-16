// Accept N numbers from user and return frequency of even numbers

// Input:   N:  6
//            Elements: 85  66  3  55  93  88
// Output: 2

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iTemp = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      if((Arr[iCnt] % 2) == 0)
      {
         iTemp++;
      }
    }
      return iTemp;
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

    iRet = CountEven(p, iSize);

    printf("result is %d", iRet);

    free(p);

    return 0;
}