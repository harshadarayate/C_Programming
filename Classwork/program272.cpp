#include <iostream>

using namespace std;

template <class T>

T Addition(T *Arr, int iSize)
{
    int iCnt = 0;
    T iSum;                 //Issue

    for(iCnt = 1, iSum = Arr[iCnt]; iCnt < iSize; iCnt++)
    {
        iSum = iSum+Arr[iCnt];

    }
    
    return iSum;
}
int main()
{
    float Brr[] = {10.2f,20,30, 40, 50};
    float iRet = 0;

    iRet = Addition(Brr, 5);

    cout << iRet<<"\n";
    
    return 0;
}