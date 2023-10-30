#include <iostream>
using namespace std;

class Myclass{
public:
    void myMethod(){ // Method/function defined inside the class
        cout << "Hello from myMethod" << endl;
    }
};

int main(){
    Myclass myObj;
    myObj.myMethod();
}