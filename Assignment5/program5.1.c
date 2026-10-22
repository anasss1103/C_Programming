//////////////////////////////////////////////////////////////
//
//Function Name : FindGreatest
//Description   : It is used to find the greatest among
//                three numbers.
//Input         : Integer, Integer, Integer
//Output        : Nothing
//Author        : Anas Samad Shaikh
//Date          : 22/10/2026
//
/////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst >= iSecond && iFirst >= iThird)
    {
        printf("%d is Greatest\n", iFirst);
    }
    else if(iSecond >= iFirst && iSecond >= iThird)
    {
        printf("%d is Greatest\n", iSecond);
    }
    else
    {
        printf("%d is Greatest\n", iThird);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}