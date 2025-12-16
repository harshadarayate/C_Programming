#include <iostream>

using namespace std;

void Display()
{
    printf("Jay Ganesh\n");
    Display();
}
int main()
{
    Display();
    return 0;
}