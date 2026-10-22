//////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   :It prints the first number the specified
//                 number of times.
// Input         : Integer
// Output        : Nothing
// Author        : Anas Samad Shaikh
// Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}