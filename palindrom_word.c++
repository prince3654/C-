#include <iostream>
using namespace std;

int main()
{
    // check palindrom
    int n;
    cout << "enter no of words\n";
    cin >> n;
    char arr[n];
    cout << "enter words\n";
    cin >> arr;

    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check = 0;
            break;

        }
    }
    if(check==true){
        cout<<"Is a palindrom no";
    }

    return 0;
}