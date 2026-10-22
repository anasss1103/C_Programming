//////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description   : It converts lowercase characters to uppercase
//                 and uppercase characters to lowercase.
// Input         : Character
// Output        : Nothing
// Author        : Anas Samad Shaikh
// Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char CValue)
{
    if (CValue >= 'a' && CValue <= 'z')
    {
        printf("%c", CValue - 32);
    }
    else if (CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return 0;
}