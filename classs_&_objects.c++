#include<iostream>
#include<string>
using namespace std;

class students
{
// private:
//     int marks;
public:
    int age;
    bool gender;
    string name;
//      void set_marks(int mar){
// marks=mar;
//      }
//      void get_marks(){
//          cout<<"Marks -->>\n"<<marks;
//      }
     void info(){
         cout<<"Name -->>\n"<<name;
         cout<<"age -->>\n"<<age;
         cout<<"gender -->>\n"<<gender;
         
     }
    
};

// students::students(/* args */)
// {
// }

// students::~students()
// {
// }
int main(){
    students std[3];
    for(int i=0;i<3;i++){
        cout<<"Enter name --\n";
        cin>>std[i].name;
        cout<<"Enter age --\n";
        cin>>std[i].age;
        cout<<"Enter gender -- \n";
        cin>>std[i].gender;
        // cout<<"Enter marks -- \n";
        // cin>>std[i].set_marks();
    }
    return 0;
}
