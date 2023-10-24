#include <iostream>
using namespace std;
int main(){
    int number=10, counter=0;
    cout << " Please Enter a number: ";
//    cin >> number;
    for (int i = 2; i < number; ++i) {
        if (number % i == 0){
            counter++;
        }
    }
    if (counter == 0){
        cout << "The number is prime" << endl;
    } else{
        cout << "The number is not prime" << endl;
    }
    cout << "===================================" << endl;
//    do-while
    do {
        cout << "The number is: " << number << endl;
        number--;
    } while (number > 0);
}