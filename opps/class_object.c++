#include <iostream>
#include <string>
using namespace std;

class students
{
private:
    int marks;

public:
    int age;
    bool gender;
    string name;
    students(){
        cout<<"The default constructor\n";
    }
    students(string n,int a,int g){
        name=n;
        age=a;
        gender=g;
    }
    void set_marks(int mar) { marks = mar; }
    void get_marks() { cout << "Marks -->>\n"
                            << marks; }
    void info()
    {
        cout << "Name -->>"
             << name<<endl;
        cout << "age -->>"
             << age<<endl;
        cout << "gender -->>"
             << gender<<endl;
    }
};

int main()
{
    int m;
    students a("Ram",12,1);
    cin>>m;
    a.set_marks(m);
    a.info();
    a.get_marks();
    // students std[3];
    
    // for (int i = 0; i < 3; i++)
    // {int m;
    //     cout << "Enter name --\n";
    //     cin >> std[i].name;
    //     cout << "Enter age --\n";
    //     cin >> std[i].age;
    //     cout << "Enter gender -- \n";
    //     cin >> std[i].gender;
    //     cout << "Enter marks -- \n";
    //     cin>>m;
    //      std[i].set_marks(m);
        
    // }
    // for(int i=0;i<3;i++){
    //      std[i].info();
    //      std[i].get_marks();
    // }
    return 0;
}
