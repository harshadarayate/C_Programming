#include <iostream>

using namespace std;

template <class T>
T Add(T iNo1, T iNo2)
{
    T iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}
int main()
{
    int iNo1 = 10, iNo2 = 40, iRet = 0;
    float fNo1 = 10.0f, fNo2 = 40.0f, fRet = 0.0f;
    double dNo1 = 10.0, dNo2 = 40.0, dRet = 0.0;

    iRet = Add(iNo1, iNo2);
    cout << "Addition of int :" << iRet << "\n";

    fRet = Add(fNo1, fNo2);
    cout << "Addition of float :" << fRet << "\n";

    dRet = Add(dNo1, dNo2);
    cout << "Addition of int :" << dRet << "\n";

    return 0;
}