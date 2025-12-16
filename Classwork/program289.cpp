#include <iostream>

using namespace std;

void auto_demo()
{
    
    auto i = 1;

    printf("%d autodemo : \n", i);
}

static int  static_demo()
{
    static int i = 1;
    printf("%d static demo : \n", i);
    i++;
}
int main()
{
    auto_demo();
    auto_demo();
    auto_demo();
    auto_demo();

    cout << "static underscore demo";
    static_demo();


    return 0;
}