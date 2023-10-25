#include <iostream>
using namespace std;
int mySum(int a, int b){
    cout << "sum a , b : " << a + b << endl;
}

void sayHello(){
    cout << "Hello World!" << endl;
}

int main(){
    mySum(1, 2);
    sayHello();
}