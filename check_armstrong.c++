#include <iostream>
#include<math.h>
using namespace std;
// Armstrong no---->> No whose sum of cube of individual digits is equal to the no itself
int main(){
    int n,temp=0;
   
    cout<<"enter any big no"<<endl ;
    cin>>n;
     int orignal =n;
     cout<<orignal;
    while (n>0)
    {
        int last_digit=n%10;
        temp+= pow(last_digit,3);
        n=n/10;
        

    }
    if (temp==orignal)
    {
        cout<<"Is a armstrong no"<<endl;

    }
    else{
        cout<<"Not a armstrong no"<<endl;
    }
    
    
    return 0;
}