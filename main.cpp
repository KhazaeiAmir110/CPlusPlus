#include <iostream>
using namespace std;
int main(){
//    switch - case
    int code;
    cout << "Please Enter city code : ";
    cin >> code;
    switch (code) {
        case 21:
            cout << "Tehran";
            break;
        case 31:
            cout << "Isfahan";
            break;
        case 41:
            cout << "Tabriz";
            break;
        default:
            cout << "wrong code!!";
    }

}