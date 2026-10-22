//////////////////////////////////////////////////////////////
//
//Function Name : Display
//Description   : It is used to display "Marvellous" five times on the screen.
//Input         : Integer
//Output        : Integer
//Author        : Vedant Dinesh Patil
//Date          : 22/10/2026
#include <stdio.h>

void Display(int iNo)
{
    while (iNo > 0)
    {
        printf("* ");
        iNo--;
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