// Accept N numbers from user and accept one another number as NO return index of Last occurance of that NO.

// Input:   N:  6
//            NO: 66
//            Elements: 85  66  3  66   93  88  
// Output: 3

// Input:   N:  6
//            NO: 93
//            Elements: 85  11  3  15  93  111  
// Output: 4

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{   
    int iCnt = 0;
    int iTemp = 0;

    for(iCnt = iLength; iCnt >= 0 ; iCnt--)
    {
      if(Arr[iCnt] == iNo)
      {
         break;
      } 
    }
    if(Arr[iCnt] == iNo)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }  
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int * p = NULL;
    int iValue = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurence of number is %d", iRet);
    }

    free(p);

    return 0;
}