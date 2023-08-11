#include<iostream>
using namespace std;

class Employee{
public:
 int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}

};




//Creating a Programmer class derived from Employee Base class

/*

1> Default visibility mode is private
2> Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3> Private Visibility Mode: Public members of the base class become private members of the derived class
4> Private members are never inherited

*/



class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};












int main()
{
    Employee harry(1), rohan(2);

    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    
    
    
    Programmer skillF(10);



    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
