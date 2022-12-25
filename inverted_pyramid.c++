// #include <iostream>
// using namespace std;

// int main(){
//     int n,i;
//     cout<<"Enter no of row"<<endl;
//     cin>>n;
//     i=n;
//     int k=n;
//     for(i;i!=0;i--){
//         for(n;n!=0;n--){
//             cout<<"*";

//         }
//         --k;
//         n=k;
//         cout<<endl;
//     }
    
//     return 0;
// }
// OR
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row"<<endl;
    cin>>n;

    for(int i=n;i!=0;i--){
        for(int j =0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;

    }

    return 0;
}
