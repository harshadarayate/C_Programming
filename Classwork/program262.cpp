#include <iostream>

using namespace std;

template <class T>
T Add(T iNo1, T iNo2)
{
    T iAns = 0;
    iAns = iNo1+iNo2;
    return iAns;
}
int main()
{
    int iNo1 = 10,iNo2 = 40, iRet = 0;

    iRet = Add(iNo1,iNo2);
    cout<<iRet<<"\n";

    return 0;
}