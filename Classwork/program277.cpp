
// oop approach
#include <iostream>
using namespace std;

class Aritmetic
{
public:
    int no1 = 10;
    int no2 = 20;

    int Addition(int A, int B)
    {
        int Ans = 0;
        Ans = A+B;
        return Ans;
    }
}

int
main()
{
    cout << Addition(10, 11) << "\n";

    return 0;
}