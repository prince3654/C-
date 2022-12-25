#include <iostream>
using namespace std;
class employee
{
    int employee_id;
    static int no;
    // static int no=1;  This will give error because static data memeber can not be initilize within class ,
    // it could initialize where it is declared
public:
    void set_id()
    {
        cout << "Enter Id of the Employee --->>" << endl;
        cin >> employee_id;
    }
    void get_id()
    {

        cout << "The id of Employee no      " << no << "   with Employee id     " << employee_id << endl;
        
    }
    // static member function whic donot require any object of class to call that static function
    // example of an static function will be
    static void get_count()
    {
        cout << "The no of empoyee is equal to " << no << endl;
        no++;
    }

};
// Default value of static data member is 0;
int employee::no = 1; // for a static data  member intitialiazation will be like this a here without static in front
// like static int employee::   no; or static  employee:: int  no;
//////also initialization of any value in statice data member will be here

int main()
{
    employee Rohan, Rahul, Anjali;

    Rohan.set_id();
    Rohan.get_id();
    employee::get_count();//Way to call static member function

    Rahul.set_id();
    Rahul.get_id();
    employee::get_count();

    Anjali.set_id();
    Anjali.get_id();
    employee::get_count();

    return 0;
}