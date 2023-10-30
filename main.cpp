#include <iostream>
using namespace std;

class Myclass{
public:
    void myMethod(); // Method/function declaration
};

void Myclass::myMethod(){
    cout << "Hello World!" << endl;
}

int main(){
    Myclass myObj;
    myObj.myMethod();
    return 0;
}