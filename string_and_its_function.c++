#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    //// Input and output Method 1
    cout << "Enter in string" << endl;
    cin >> str;
    cout << str << endl;
    //// Input and output Method 2
    string str_1(5, 'A');
    cout << str_1 << endl;

    //// input with space without any function and not getting desired output
    string str_3;
    cout << "Enter in string with space" << endl;
    cin >> str_3;
    cout << str_3 << endl;
    // if inpt is Hi Girl
    // Output will be Hi

    //// input with space without any function
    string str_2 = {"Love is bad"};
    cout << str_2 << endl;
    // Output Love is bad

    //// Input in string with the help of a function
    string str_4;
    getline(cin,str_4);
    cout<<str_4;
    cout<<endl;

    //// Append in string
    string str_5,str_6;
    str_5={"Fam"};
    str_6={"ily"};
    str_5.append(str_6);//str_6 combined to str_5 like str_5=str_5+str_6
    cout<<str_5<<endl;
    str_6.append(str_5);//like str_6=(str_6)+(str_5+str_6)
    cout<<str_6<<endl;


//// Append with different method
string str_7,str_8;
str_7={"Fam"};
str_8={"ily"};
cout<<str_7+str_8<<endl;
cout<<str_7<<endl<<str_8;//no value update in this method like previous one
//// clear function
string str_9;
str_9={"Hey Girls"};
cout<<"String is "<<str_9<<endl;
str_9.clear();
cout<<"string is now"<<str_9<<"  "<<"Now"<<endl;
if(str_9.empty())//Empty function string_1.empty() used to find if a function is empty or not
{
    cout<<"string is empty"<<endl;
}
////Compare between two string
string str_11,str_12;
str_11={"abc"};
str_12={"abdc"};
if(str_11.compare(str_12)==0)//string_1.compare(string_2) used to compare between two string
{
    cout<<"Both String are same"<<endl;
}
else{
    cout<<"Different string"<<endl;
}
////to erase in between string 
string str_13="ninecompoop";
str_13.erase(3,4);//.erase(position,no of element to remove)
cout<<str_13<<endl;
////To find position 
string str_14="ninecompany";
cout<<str_14.find("com")<<endl;//starting position of com of c with position 4
  ////To insert between string
  string str_15={"companay"};
  str_15.insert(2,"Prince");
  cout<<str_15<<endl;
  ////Length of string
  string str_16=("ninecompany");
  cout<<str_16.length()<<endl;
  for(int i=0;i<str_16.length(); i++)
  {
      cout<<str_16[i]<<endl;
  }
    return 0;
}