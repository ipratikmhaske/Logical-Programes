// Accept one character from user and convert case of that character

// Input:  A
// OUtput: a

//Input:   a
// Output: A

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue=cValue+32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
   {
       printf("%c", cValue=cValue-32);
   }
}

int main()
{
    char cValue ='\0';

    printf("Enter the character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}