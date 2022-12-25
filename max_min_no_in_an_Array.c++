#include<iostream>
#include<climits>
using namespace std;

int main(){
int no [5];
cout<<"enter no"<<endl;
for(int i=0;i<5;i++)
{
    cin>>no[i];
}
// for(int i=0;i<5;i++){
//     cout<<no[i]<<endl;
// }
int maxno=INT_MIN;
int minno=INT_MAX;
for(int i=0;i<5;i++){
    maxno=max(maxno,no[i]);
    minno=min(minno,no[i]);

}
cout<<minno<<endl;
cout<<maxno<<endl;

    return 0;
}