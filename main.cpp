#include <iostream>
using namespace std;
int main(){
//    pointer
    int firstvalue, secondvalue;
    int * mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    cout << "firstvalue = " << firstvalue << endl;

    mypointer = &secondvalue;
    *mypointer = 20;
    cout << "secondvalue = " << secondvalue << endl;


    int value_1=5, value_2=10, *p1, *p2;
    p1=&value_1;
    p2=&value_2;
    cout<<"value_1="<<value_1<<endl;
    cout<<"value_2="<<value_2<<endl;
    *p1=*p2=15;
    cout<<"new value_1="<<value_1<<endl;
    cout<<"new value_2="<<value_2<<endl;
    return 0;

}