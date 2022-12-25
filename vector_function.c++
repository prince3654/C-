#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Size-->"<<v.capacity()<<endl;
    cout<<"Actual size -->"<<v.size()<<endl;
v.push_back(1);
cout<<"Size-->"<<v.capacity()<<endl;
    cout<<"Actual size -->"<<v.size()<<endl;
    v.push_back(2);

cout<<"Size-->"<<v.capacity()<<endl;
    cout<<"Actual size -->"<<v.size()<<endl;
    v.push_back(3);

cout<<"Size-->"<<v.capacity()<<endl;
cout<<"\n";
    cout<<"Actual size -->"<<v.size()<<endl;

    cout<<"element at 2nd Index"<<v.at(2)<<"\n";
    cout<<"\n";
    cout<<"element at 1st popsition"<<v.at (1)<<endl;
    cout<<"Front"<<v.front()<<endl;
    cout<<"Back"<<v.back()<<endl;
    


    return 0;
}