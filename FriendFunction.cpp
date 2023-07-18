#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void Setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // below line means that non member - sumcomplex function is allowed to do anything with my private parts(membersx)
    friend Complex sumComplex(Complex o1, Complex o2);

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.Setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2 , sum;
    c1.Setnumber(1, 4);
    c1.printnumber();

    c2.Setnumber(2, 8);
    c2.printnumber();


    sum = sumComplex(c1,c2);
    sum.printnumber();


    return 0;
}



/*
1. Not in the scope of the class
2. since it is not in the scope of the class , it cannot be called from the object of that class. c1.sumComplex() == invalid 
3. Can be invoked the help of any object
4. Usually contains the object as arguments 
5. Can be declare inside public or private section of the class
6. it cannot access the members directly by their names and need object_name.member_name to access any member.







*/
