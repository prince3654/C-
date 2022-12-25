#include<iostream>
using namespace std;

int main(){
    int n,t=1;
    cout<<"enter no of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter no in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>n;
    }
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=i;j<n;j++){
            temp=temp+arr[j];
            cout<<temp<<endl;
            
        }
        
    }
    return 0;
}