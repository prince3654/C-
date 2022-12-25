#include <iostream>
#include <math.h>
using namespace std;

bool no_prime(int a);
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 2; i < a; i++)
    {
        if (no_prime)
        {
            cout << i << endl;
        }
    }
}
bool no_prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
        else
        {return true;
            
        }
    }
}
