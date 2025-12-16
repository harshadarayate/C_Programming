#include <iostream>

using namespace std;

int Add(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1+iNo2;
    return iAns;
}
int main()
{
    int iNo1 = 10,iNo2 = 20, iRet = 0;

    iRet = Add(iNo1,iNo2);
    cout<<iRet<<"\n";

    return 0;
}