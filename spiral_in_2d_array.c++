#include<iostream>
using namespace std;

int main()
{int row,coloum,row_start,coloum_start,row_end,coloum_end;

    cout<<"NO of rows"<<"\n";
    cin>>row;
    cout<<"No of coloum \n";
    cin>>coloum;
    int arr[row][coloum];
    for(int i=0;i<coloum;i++)
    {
        for(int j=0;j<row;j++)
        {
            cin>>arr[i][j];
        }
    }
     row_start=0,row_end= row-1,coloum_start =0 ,coloum_end =coloum -1;
    while(row_start <= row_end && coloum_start <= coloum_end)
    {
        // for row_start
        for(int col = coloum_start;col <= coloum_end;col++)
        {
            cout<<arr[row_start][col]<<"  ";
        }

        row_start++;

        // for coloum_end
        for(int row = row_start; row <= row_end; row++)
        {
            cout<<arr[row][coloum_end]<<"  ";
        }
        coloum_end--;

        // for row_end
        for(int col =coloum_end; col>= coloum_start;col--){
            cout<< arr[row_end][col]<<"  ";
        }
            row_end--;
            // for coloum_start
            for(int row= row_end; row>=row_start;row--)
            {
                cout<< arr[row][coloum_start]<<"  ";
            }
            coloum_start++;
        
    }
    
    return 0;
}
