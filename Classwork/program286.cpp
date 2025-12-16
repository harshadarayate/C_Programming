#include <iostream>

using namespace std;

void Display()
{
    auto iCnt = 0;           //Auto storage class that's why value is not preserved

    printf("Jay Ganesh...%d\n",iCnt);
    iCnt++;

    Display();
}
int main()
{
    Display();
    return 0;
}