#include<iostream>
using namespace std;
 
 int binary_search(int arr[],int n,int key){
     int s=0;
     while(s<=n){
         int mid =(n+s)/2;//Made middle term
         if(arr[mid]==key){
             return mid;
         }
         else if(arr[mid]<key){
             n=mid-1;//key<arr[mid] mean no is smaller than mid
            //  so we have made our middle therm between 0-mid
         }
         else{
             s=mid+1;//key>arr[mid] mea no is greater than mid
            //  So we have to made ouer middle term between mid and n
         }
     }
     return-1;
 }
 int main(){
     int n;
     cout<<"no of array"<<endl;
     cin>>n;
     int no[n];
     cout<<"Enter no"<<endl;
     for (int i = 0; i <n; i++)
     {
        cin>>no[i];
     }
     int key;
     cout<<"Enter key"<<endl;
     cin>>key;
     cout<<binary_search(no,n,key)+1;
     
     return 0;
 }