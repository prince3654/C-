#include<iostream>
using namespace std;
class class1{
    public:
     void f(){
        cout<<"Function f() in class 1\n";
    }
    void g(){
        
cout<<"Function g() in class 1\n";
        
    }
};
class class2{
    public:
      void f(){
        cout<<"Function f() in class 2\n";
    }
    void g(){
        
cout<<"Function g() in class 2\n";
        
    }
};
class class3{
    public:
     void h(){
        cout<<"Function h() in class 3\n";
    }
    
};
int main(){
    class1 object1,*p;
    class2 object2, *q;
    class3 object3;

p->f();
p->g();
p = (class1*) &object2;
p->f();
p->g();
p = (class1*) &object3;
p->f();
p->g();
// p->h();

q->f();
}