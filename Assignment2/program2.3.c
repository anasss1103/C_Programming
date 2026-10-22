//////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It prints Hello if the number is less than 10,
//                 otherwise it prints Demo.
// Input         : Integer
// Output        : Nothing
// Author        : Anas Samad Shaikh
// Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}