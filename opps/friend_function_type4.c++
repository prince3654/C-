#include<iostream>
using namespace std;
class b;
class a{
int a1;
friend void display(a ,b );
friend void swap(a&, b&);
public:
void set_in(int val1){
    a1=val1;
}
};
class b{
int b1;
friend void display(a ,b );
friend void swap(a&, b&);
public:
void set_in(int val2){
b1=val2;
}
};
void swap(a &a_1, b &b_1){
    int temp;
    temp=a_1.a1;
    a_1.a1=b_1.b1;
    b_1.b1=temp;
}

void display(a o1,b o2){
    cout<<"New value of class a "<<o1.a1<<endl<<"And of class b is "<<o2.b1<<endl;
}
int main(){
    a a1;
    a1.set_in(2);
     
     b b1;
     b1.set_in(5);

     swap(a1,b1);
     display(a1,b1);

    return 0;
}