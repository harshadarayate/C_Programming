#include <iostream>

using namespace std;

template <class T>

T Maximum(T No1, T No2, T No3)
{
    if ((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if ((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    double dNo1 = 100.0, dNo2 = 40.0, dno3 = 69, dRet = 0.0;

    dRet = Maximum(dNo1, dNo2, dno3);
    cout << "Maximum :" << dRet << "\n";

    return 0;
}