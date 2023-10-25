#include <iostream>
using namespace std;
int main(){
    int x = 5;//stack
    float y = 10.7;//

//    heap
    int * point = new int;
    *point = 10;
    cout << *point << endl;

    delete point;
    cout << *point << endl;
}