#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter no of rows" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {

            cout << " ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }

        cout << endl;
    }
    return 0;
}