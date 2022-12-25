#include<iostream>
/*
Constructor is a special member function with the same name as of the class.
it's automatically invoked whenever an object is created.
*/
using namespace std;

class num{
int a,b;
public:
num(void);//constructor declaration

void display(){
    cout<<"a---->>>"<<a<<endl<<"b--->>"<<b<<endl;
}
};
num::num(void)
    {
    a=4;
    b=10;
}

int main(){
  num o1;
  o1.display();  
return 0;
}

/* Characterstics of constructor
1. It should be declared in the publice section oof class.
2.they cannot return value or have any return type.
3.It can have default argument .
4.We cannot refwer to thier adress.*/