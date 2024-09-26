#include <iostream>
using namespace std;
int main(){
    cout<<"what is the number?";
    int number;
    cin>>number;
    if (number%2==0){
        cout<<"the number is even\n";
    }
        else{
            cout<<"the number is odd\n";
        }
    system("pause");
    return 0;
}