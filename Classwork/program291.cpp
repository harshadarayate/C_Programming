#include <iostream>
using namespace std;

void Display()
{
    static int iCnt = 1;
    auto i = 1;


    if (iCnt <= 3 )
    {
        printf("Jay Ganesh.. %d\n",iCnt);
        iCnt++;
        i++;
        Display();
        
    }
}
int 
main()
{
    cout<<"Inside of main\n"  ; 
     Display();
    return 0;
}