#include <iostream>

using namespace std;

int Maximum(int No1, int No2)
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
    int iNo1 = 10, iNo2 = 40, iRet = 0;

    iRet = Maximum(iNo1, iNo2);
    cout << "Maximum :" << iRet << "\n";

    return 0;
}