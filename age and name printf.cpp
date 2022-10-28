#include <iostream>
#include <string.h>
using namespace std;
class person
{
    char name[500];
    int age;
public:
    void display()
    {
        cout<<"Enter name : ";
        gets(name);
        cout<<name<<endl;
    }
    void getdata()
    {
        cout<<"Enter age : ";
        cin>>age;
        cout<<age<<endl;
    }

};

int main ()
{
    person obj;
    obj.display();
    obj.getdata();

    return 0;
}
