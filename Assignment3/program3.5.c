//////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : It checks whether a character is a vowel.
// Input         : Character
// Output        : Boolean (TRUE or FALSE)
// Author        : Anas Samad Shaikh
// Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char cValue)
{
    if (cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
    }

    if (cValue == 'a' ||
        cValue == 'e' ||
        cValue == 'i' ||
        cValue == 'o' ||
        cValue == 'u')
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

    printf("Enter character: ");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}