//////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Description   : It prints the first N even numbers.
// Input         : Integer
// Output        : Nothing
// Author        : Anas Samad Shaikh
// Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 1;

    if (iNo <= 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}