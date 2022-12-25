#include <iostream>>
#include<random>
using namespace std;
/* Inline fuction is used to speed up and optimize your program by placing the
function work in the place of call function and skip in  between copy and paste
but should not be used in recursion or in a compex function where complex work
is happening other wise it will harm speed of program and increase cache memory.....*/
inline int product(int a, int b)
{
    static int c = 0; // used only once in the fuction and acts like statics variable i.e unlike other fuction it donot wiped out after leaving unlike any ordinary function
    c = c + 1;
    return a * b + c;
}
int profit_money(int money, float profit_percent = 1.05)//default argument is initialize in far right end corner and if not any thing passedthen it take the default value
//and when passed it take replace the default value
{
    return money * profit_percent;
}
int length(const int *arr_1){
    
}
int main()
{
    int a, b;

    cout << "Enter any two no " << endl;
    cin >> a >> b;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    cout << "Product of a and b ---->>" << product(a, b) << endl;
    int money;
    cout<<"Enter money amount in Rupee\n";
    cin>>money;
   
    cout<<"Profit on Rupee"<<money<<"      "<<profit_money(money)<<endl;
    cout<<"For vip person profit"<<money<<"       "<<profit_money(money,1.09); 
    int arr[random];
    cout<<"Length of arr funtion \n"<<length(arr)<<endl; 
    return 0;
}