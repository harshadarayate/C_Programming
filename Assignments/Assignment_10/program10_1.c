#include <stdio.h>

# define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    
    dArea = PI * fRadius * fRadius;

    return dArea;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle is : %f\n",dRet);
    return 0;
}


////////////////////////////////////////////////////
//
// Time Complexity : O(1)
//
////////////////////////////////////////////////////

