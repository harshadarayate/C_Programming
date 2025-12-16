#include <iostream>

using namespace std;

template <class T>

T Maximum(T No1, T No2)
{
    if (No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()
{
    double dNo1 = 10.0, dNo2 = 40.0, dRet = 0.0;

    dRet = Maximum(dNo1, dNo2);
    cout << "Maximum :" << dRet << "\n";

    return 0;
}