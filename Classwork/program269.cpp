#include <iostream>

using namespace std;

float Addition(float *Arr, int iSize)
{
    int iCnt = 0;
    float iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum+Arr[iCnt];

    }
    
    return iSum;
}
int main()
{
    float Brr[] = {10.2f,20.f,30.3f, 40.4f, 50.5f};
    float iRet = 0;

    iRet = Addition(Brr, 5);

    cout << iRet<<"\n";
    
    return 0;
}