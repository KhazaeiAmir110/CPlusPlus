#include <iostream>
using namespace std;
long fact(int n){
    if (n == 1){
        return 1;
    }
    else if (n > 1){
        return (n * fact(n-1));
    }
}
int main(){
    cout << "Please enter number : ";
    int number;
    long result=0;
    cin >> number;
    result = fact(number);
    cout << "Result is : " << result << endl;
}