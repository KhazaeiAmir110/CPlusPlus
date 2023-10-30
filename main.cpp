#include <iostream>
using namespace std;

class Myclass{
public:
    int myNum; // Attribute (int variable)
    string myString; // Attribute (string variable)
};

int main(){
    Myclass myObj;
    myObj.myNum = 10;
    myObj.myString = "Hello";
    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;
    return 0;
}