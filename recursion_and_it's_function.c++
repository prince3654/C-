#include<iostream>
using namespace std;

int sum(int n){
int temp=0;
if(n==0){
    return 0;
}temp=sum(n-1);
return n+ temp;
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    int pre_multiple=factorial(n-1);
    return pre_multiple*n;
}
int main(){
    int num;
    cout<<"Enter No "<<endl;
    cin>>num;
    cout<<"Sum of No"<<sum(num)<<endl;
    cout<<factorial(num);

}