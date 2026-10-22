//////////////////////////////////////////////////////////////
//
//Function Name : CalculateDiscount
//Description   : It is used to calculate the shopping
//                discount and final payable amount.
//Input         : Float (Purchase Amount)
//Output        : Nothing
//Author        : Anas Samad Shaikh
//Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Purchase Amount\n");
    }
    else if (fAmount < 1000)
    {
        fDiscount = 0.0f;
        fFinalAmount = fAmount;
    }
    else if (fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f;
        fFinalAmount = fAmount - fDiscount;
    }
    else
    {
        fDiscount = fAmount * 0.20f;
        fFinalAmount = fAmount - fDiscount;
    }

    if (fAmount >= 0)
    {
        printf("Payable Amount = %.2f\n", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}