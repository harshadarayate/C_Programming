#include <stdio.h>
double RectArea(float fWidth, float fHeight)
{
    double dResult = 0.0;
    dResult = fWidth * fHeight;
    return dResult;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f", &fValue1);

    printf("Enter height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectanle is : %0.2f\n",dRet);
    return 0;
}


////////////////////////////////////////////////////
//
// Time Complexity : O(1)
//
////////////////////////////////////////////////////
