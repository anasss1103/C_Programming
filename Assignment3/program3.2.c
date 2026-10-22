//////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactor
// Description   : It prints all even factors of a number.
// Input         : Integer
// Output        : Nothing
// Author        : Anas Samad Shaikh 
// Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        return;
    }

    for (i = 1; i <= iNo; i++)
    {
        if (iNo % i == 0 && i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}
