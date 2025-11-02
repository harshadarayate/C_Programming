#include <stdio.h>
double FhtoCs(float fTemp)
{
    float fResult = 0.0;
    fResult = ((fTemp - 32) * (5.0/9.0));
    return fResult;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);
    printf("%0.2f temperature in Fahrenheit is equal to %f celsius.\n\n", fValue, dRet);
    return 0;
}


////////////////////////////////////////////////////
//
// Time Complexity : O(1)
//
////////////////////////////////////////////////////
