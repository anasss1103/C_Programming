//////////////////////////////////////////////////////////////
//
//Function Name : CheckMultipleDivisibility
//Description   : It is used to check whether a number is
//                divisible by 3, 5, both, or neither.
//Input         : Integer
//Output        : Nothing
//Author        : Anas Samad Shaikh
//Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by Both\n");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 Only\n");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}