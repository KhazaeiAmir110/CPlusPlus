#include <iostream>
using namespace std;
int main(){
//    while
    int init = 10;
    while (init > 0){
        cout << init << endl;
        --init;
    }
    cout << "=========================" << endl;

    int number, turn=1,total=0;
    while (turn <= 3){
        cout << "Please enter" << turn <<  "a number:";
        cin >> number;
        total += number;
        turn++;
    }
    cout << "The wile loop is over!!" << endl;
    cout << "Total is " << total << endl;
}