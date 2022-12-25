#include <iostream>
using namespace std;

int main()
{
    int n, k = 1;
    cout << "Enter no of rows0" << endl;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<k;
            k++;
        }
        k = 1;
        cout << endl;
    }
    return 0;
}