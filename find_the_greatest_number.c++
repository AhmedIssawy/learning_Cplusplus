#include <iostream>
using namespace std;
int main()
{
    cout<<"please insert 3 numbers?";
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b and a > c)
    {
        cout << "a is the greatest number";
    }
    else if (b > a and b > c)
    {
        cout << "b is the greatest number";
    }
    else if (c > b and c > a)
    {
        cout << "c is the greatest number";
    }
    else
    {
        cout << "the numbers are equal\n";
    }
    system("pause");
    return 0;
}