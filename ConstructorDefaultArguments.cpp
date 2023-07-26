#include<iostream>
using namespace std;

class Simple
{
private:
  int data1;
  int data2;
public:
     Simple(int a , int b){
        data1 = a;
        data2 = b;
     }

     /*
        if we write a default agruments and do not pass a parameters then automatically 
        the value of default argument will be assigned ....


        like this :


        Simple(int a = 9 , int b = 8){
            data1=a;
            data2=b;
        }
     
     
     
     */

     void printdata(){
        cout<<"the value of data is "<<data1<<" and "<<data2;
     }
    
};



int main(){


    Simple s(1,4);
    s.printdata();

return 0 ;
}