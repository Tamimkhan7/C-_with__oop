#include <iostream>
using namespace std;
class message
{
public:
    void display()
    {
        cout<<"Hello world!"<<endl;
    }
};


int main()
{
    message obj;
    obj.display();


    return 0;
}
