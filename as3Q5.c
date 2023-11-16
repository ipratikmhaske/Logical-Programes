//Accept one character from user and check whether that character is vowel(a,e,i,o,u) or not

// Input =  E
// Output = True

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL chkVowel(char cChk)
{
    if(cChk == 'a' || cChk == 'e' || cChk == 'i' || cChk == 'o' || cChk == 'u'||
       cChk == 'A' || cChk == 'E' || cChk == 'I' || cChk == 'O' || cChk == 'U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = chkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is not a  vowel");
    }



    return 0;
}