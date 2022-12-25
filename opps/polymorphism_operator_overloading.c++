/* Polymorphism is of two types
1. Compile time polymorphism
Compile time polymorphism can be achived in two ways 
(i)function _overloading
(ii) Operator overloading
2. Runtime polymorphism
can be achived in one way only
(i) Virtual function*/
#include<iostream>
using namespace std;

class complex{
private:
int real,imag;
public:
complex(){
    cout<<"This is default constructer"<<endl;
}
complex(int re,int im){
    real=re;
    imag=im;
}
complex operator +(complex  obj){
    complex temp;
    temp.imag=imag +obj.imag;
    temp.real=real+obj.real;
    return temp;
}
void display(){
    cout<<real<<"+ i"<<imag<<endl;
}

};

int main(){
    complex a(2,4);
    complex b(3,5);
    complex d(5,7);
    complex c;
    c=a+b+d;
    c.display();
    return 0;
}