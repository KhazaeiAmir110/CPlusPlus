#include <iostream>
using namespace std;
int main(){
    cout << "Please enter your age: " << endl;
    int age;
    cin >> age;
    if (age >= 18){
        if (age < 25){
            cout << "You are a young." << endl;
        } else{
            cout << "You are a adult." << endl;
        }
    } else {
        cout << "Sorry, you are not old enough."
        << endl;
    }
}