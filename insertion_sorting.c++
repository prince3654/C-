#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter no in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pt=1;
    while (/* condition */pt<n)
    {
        for(int i=pt;i!=0;i--)
        {
            if (arr[i]<arr[i-1]){
                int temp=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
            }
        }
        pt++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}