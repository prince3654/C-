#include <iostream>
using namespace std;

int main()
{
    int rowa=4, rowb=3, colouma=3, coloumb=4;
    int arra[rowa][colouma], arrb[rowb][coloumb];
    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < colouma; j++)
        {
            cin >> arra[i][j];
        }
    }
    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < colouma; j++)
        {
            cout << arra[i][j] << "   ";
        }
        cout << endl;
    }

    for (int i = 0; i < rowb; i++)
    {
        for (int j = 0; j < coloumb; j++)
        {
            cin >> arrb[i][j];
        }
    }
    for (int i = 0; i < rowb; i++)
    {
        for (int j = 0; j < coloumb; j++)
        {
            cout << arrb[i][j] << "   ";
        }
        cout << endl;
    }

    int ann[rowa][coloumb];
    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < coloumb; j++)
        {
            ann[i][j] = 0;
        }
    }

    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < coloumb; j++)
        {
            for (int k = 0; k < rowb; k++)
            {
                ann[i][j] += arra[i][k] + arrb[k][j];
            }
        }
    }
    for (int i = 0; i < rowa; i++)
    {
        for (int j = 0; j < coloumb; j++)
        {
            cout << ann[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}