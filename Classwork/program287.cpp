#include <iostream>

using namespace std;

void Display()
{
    static int iCnt = 0;           //static storage class that's why value so value is preserved

    printf("Jay Ganesh...%d\n",iCnt);
    iCnt++;

    Display();
}
int main()
{
    Display();
    return 0;
}