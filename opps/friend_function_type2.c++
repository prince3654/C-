#include<iostream>
using namespace std;

class complex; //predefined so no error occur in calculate class
class calculate{//define before complex class  because  we have to define calculate  class with its function 
    public:
int add(int a,int b){
    return (a+b);
}
int sum_real(complex ,complex );//defined not completly used because  of complex and it's private data members
int sum_imag(complex,complex);  //defined not completly used because  of complex and it's private data members  

};
class complex{
int a,b;
friend int calculate::sum_imag(complex o3,complex o4);

friend int calculate:: sum_real(complex o1,complex o2);
public:

void set_data(int r,int i){
    a=r;
    b=i;
}
void get_data(){
    cout<<"complex no is   "<<a<<"+i"<<b<<endl;
}
};
int calculate:: sum_real(complex o1,complex o2){
    return(o1.a+o2.a);
}
int calculate::sum_imag(complex o3,complex o4){
    return(o3.b+o4.b);
}



int main(){
    complex a,b,c;
    a.set_data(1,2);
    a.get_data();
    b.set_data(2,4);
    b.get_data();
    c.set_data(1,2);
    c.get_data();
    int real,img;
    calculate cal;
    real=cal.sum_real(a,b);
    cout<<"real value is "<<real<<endl;
    img=cal.sum_imag(a,b);
    cout<<"Imaginary value is equal to "<<img<<endl;
    return 0;
}