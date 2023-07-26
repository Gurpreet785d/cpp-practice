#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }


    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<" i"<<endl;    }
};

int main()
{
    Complex a(7);
    a.printNumber();

    return 0;
}