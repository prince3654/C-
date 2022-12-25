/* Polymorphism is of two types
1. Compile time polymorphism
Compile time polymorphism can be achived in two ways 
(i)function _overloading
(ii) Operator overloading
2. Runtime polymorphism
can be achived in one way only
(i) Virtual function*/
#include<iostream>
#include<string>
using namespace std;

class object{
public:
void function(){
    cout<<"I am a function with no argument"<<endl;
}
void function (int a){
    cout<<"I am a funtion with 'int' argument"<<endl;

}
void function (int a,int b){
    cout<<"I am a funtion with 'two int' argument"<<endl;
}
void function (double a){
    cout<<"I am a function with double argument"<<endl;

}
void function (int a,int b,double c){
    cout<<"I am a function with double int and double argument"<<endl;
}
};
int main(){
    object *std;
    std ->function();
    std ->function(1);
    std ->function(1,2);
    std ->function(1.12);
    std ->function(1,2,3.03);
}