#include<iostream>
using namespace std;

class C2;

class C1{
    int val1;
    friend void exchange(C1 &, C2 &);
    public:
    void indata(int a ){
        val1 = a;
    }

    void display(void){
    cout<<val1<<endl;
}




};


class C2{
int val2;

public:
void indata(int a){
    val2 = a;
}



void display(void){
    cout<<val2<<endl;
}

friend void exchange(C1 & , C2 &);

};

void exchange(C1 & x,C2 & y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}





int main(){


    C1 oc1;
    oc1.indata(67);

    C2 oc2;
    oc2.indata(34);


    exchange(oc1 , oc2);

    cout<<"the value of c1 after exchanging becomes:  ";
    oc1.display();

    cout<<"the value of c2 after exchanging becomes:  ";
    oc2.display();
    





return 0 ;
}