#include <iostream>
using namespace std;
int main()
{
    int price;
    int discount;
    int years;
    price = 1000;
    cout << "how many yours have u worked in AUC";
    cin >> years;
    switch (years)
    {
    case 1:
        discount = 100;
        cout << "the discount is 100\n";
        break;
    case 2:
        discount = 200;
        cout << "the discount is 200\n";
        break;
    case 3:
        discount = 300;
        cout << "the discount is 300\n";
        break;
    default:
        if (years > 3)
        {
            discount = 300;
            cout << "The discount is 300\n";
        }
        else
        {
            discount = 0;
        }
        break;
    }
    cout << "total price is:"<< price - discount <<"after the discount";
    system("pause");
    return 0;
}