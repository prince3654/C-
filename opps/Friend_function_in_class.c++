#include<iostream>
using namespace std;

class complex{
private:
int real,imag;
friend complex sum_complex(complex ob1,complex ob2);
public:
complex(){
    cout<<"This is default constructer"<<endl;
}
void set(int re,int im){
    real=re;
    imag=im;
}


void display(){
    cout<<real<<"+ i"<<imag<<endl;
}

};
 complex sum_complex(complex ob1,complex ob2){
     
     complex c;
     c.set((ob1.re+ob1.re),(ob2.im+ob2.im));
    //  c.display();
 }

int main(){
    complex a,b,sum;
    a.set(1,4);
    b.set(9,10);
    
    sum=sum_complex(a,b);
    sum.display();

    // complex c;
    // c=a+b+d;
    // c.display();
    return 0;
}