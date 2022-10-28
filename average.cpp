#include <iostream>
using namespace std;
class prime
{
    int a,b, sum, ave;
public:
    void display()
    {
        cout<<"Enter two number : ";
        cin>>a>>b;
        sum = a+b;
        ave = sum/2;
        cout<<"average is : "<<ave<<endl;
    }
};
int main ()
{
    prime obj;
    obj.display();

    return 0;
}
