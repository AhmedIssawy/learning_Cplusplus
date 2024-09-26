#include <iostream>
using namespace std;
int main() {
    cout<<"========================\n";
    cout<<"== Calculate Your Age ==\n";
    cout<<"========================\n";
    int age;
    int bark;
    cin>>age;
    int age_in_months=age*12;
    int age_in_days=age*365;
    int age_in_hours=age_in_days*24;
    cout<<"your age in months:"<<age_in_months<<endl;
    cout<<"your age in days:"<<age_in_days<<endl;
    cout<<"your age in hours:"<<age_in_hours<<endl;
    system("pause");
}
