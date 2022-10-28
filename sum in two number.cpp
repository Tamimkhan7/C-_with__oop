#include <iostream>
using namespace std;
class prime
{
    int a,b, sum;
public:
    void display()
    {
        cout<<"Enter two number : ";
        cin>>a>>b;
        sum = a+b;
        cout<<"summation is : "<<sum<<endl;
    }
};
int main ()
{
    prime obj;
    obj.display();

    return 0;
}
