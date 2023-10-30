#include <iostream>
using namespace std;

class Employee{
    private:
        int salary;
    public:
//        setter
        void setSalary(int s){
            salary = s;
        }
//        getter
        int getSalary(){
            return salary;
        }
};

int main(){
    Employee e;
    e.setSalary(1000);
    cout<<e.getSalary()<<endl;
}