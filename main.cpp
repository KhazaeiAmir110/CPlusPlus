#include <iostream>
using namespace std;

class Employee{
//    contractor
public:
    Employee(int z){
        salary = z;
    }
    private:
        int salary;
    public:
//        setter
        void setSalary(int s){
            salary += s;
        }
//        getter
        int getSalary(){
            return salary;
        }
};

int main(){
    Employee e(1000);
    e.setSalary(1000);
    cout<<e.getSalary()<<endl;
}