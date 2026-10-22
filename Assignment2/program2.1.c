//////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to print * N times.
// Input         : Integer
// Output        : Nothing
// Author        : Anas Samad Shaikh
// Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while (iCnt < iNo)
    {
        printf("* ");
        iCnt++;
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