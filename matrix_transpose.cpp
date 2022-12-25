#include<iostream>
using namespace std;

int main(){
    int row,coloum;
    cout<<"No of rows\n";
    cin>>row;
    cout<<"No of coloum\n";
    cin>>coloum;
    int arr[row][coloum];
      for(int i=0;i<coloum;i++)
    {
        for(int j=0;j<row;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<coloum;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<< arr[i][j]<<"   ";
        }
        cout<<endl;
    }

    for (int i=0;i<row;i++)
    {
        for(int j=i;j<coloum;j++)
        {
            if(j!=i){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

      for(int i=0;i<coloum;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<< arr[i][j]<<"   ";
        }
        cout<<endl;
    }


    return 0;
}