// Accept N numbers from user and written difference between summation of even elements and summation of odd elements

// Input:   N:  6
//            Elements: 85  66  3  80  93  88
// Output:  53   (234 - 181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iAns = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      if((Arr[iCnt] % 2) == 0)
      {
         iEvenSum = Arr[iCnt] + iEvenSum;
      }
      else //if((Arr[iLength] / 2) != 0)
      {
         iOddSum = Arr[iCnt] + iOddSum;
      }
    }

    iAns = iEvenSum - iOddSum;

    return iAns;

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

    iRet = Difference(p, iSize);

    printf("Result is %d", iRet);

    free(p);

    return 0;
}