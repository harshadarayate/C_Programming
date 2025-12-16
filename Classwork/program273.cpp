#include <iostream>

using namespace std;

template <class T>

T Maximum(T *Arr, int iSize)
{
    int iCnt = 0;
    T iMax;

    iMax = Arr[0];

    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}
int main()
{
    float Brr[] = {10.2f, 20, 30, 40, 50};
    float iRet = 0;

    iRet = Maximum(Brr, 5);

    cout <<"Maximum is : "<< iRet << "\n";

    return 0;
}