#include <iostream>

using namespace std;

template <class T>         // template<class T, class W> - if parameters are of diff datatypes

int CountFrequency(T *Arr, int iSize, T No)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 1; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == No)
        {
            iCount++;
        }
    }

    return iCount;
}
int main()
{
    float Brr[] = {10.2f, 20, 30.0f, 30.0f, 40, 50};
    int iRet = 0;

    iRet = CountFrequency(Brr, 8, 30.0f);

    cout <<"count is : "<< iRet << "\n";

    return 0;
}