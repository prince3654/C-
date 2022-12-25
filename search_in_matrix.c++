#include<iostream>
using namespace std;

int main(){
    int row,coloum;
    cout<<"No of rows\n";
    cin>>row;
    cout<<"No of coloum\n";
    cin>>coloum;
    int arr[row][coloum];
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<coloum;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coloum;j++)
        {
            cout<< arr[i][j]<<"   ";
        }
        cout<<endl;
    }
    int target;
    cin>>target;
    
    int r=row-1,c=0;
    bool flag =false;
    while(r>=0 && c<coloum){
        if(arr[r][c]==target){
            flag=true;
        }
        if(arr[r][c]>target){
            r--;
        }
        else{
            c++;
        }

    }
    if(flag){
        cout<<"element found";
    }
    return 0;
}









