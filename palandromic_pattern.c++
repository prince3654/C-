#include <iostream>
using namespace std;

int main()
{
    int n,j;
    cout << "enter no of rows" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int k=i;
        for (; j <=n ; j++)
        {
            cout << k <<;
        }
        // if (i > 1)
        // {
            for (int l = 2; l <= i; l++)
            {
                cout <<" "<< l <<" ";
            }
        // }
         cout<<endl;
    }
    return 0;
}