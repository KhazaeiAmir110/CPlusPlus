#include <iostream>
using namespace std;

class Car{
    public:
    static void beep(){
        cout << "beep beep" << endl;
    }
};

int main(){
    Car c1;
    c1.beep();
}