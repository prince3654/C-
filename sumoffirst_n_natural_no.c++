#include<iostream>
using namespace std;

int sum(int a);
int main(){
    int n;
    cin>>n;
     cout<<sum(n)<<endl;
    return 0;
}
int sum(int a){
    int temp=0;
    temp=(a*(a+1))/2;
    return temp;
}