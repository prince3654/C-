#include<iostream>
using namespace std;
class y;
class x{
int a;
public:
void set_value(int value){
a=value;
}
friend void print(x,y);
};

class y{
    int b;
    public:
    void set_value(int data){
        b=data;
    }
   friend void print(x,y);
};

void print(x o1,y o2){
    cout<<"The sum is "<<(o1.a+o2.b)<<endl;
}
int main(){
    x a;
    a.set_value(3);
     y b;
     b.set_value(5);
     print(a,b);
    return 0;
}
