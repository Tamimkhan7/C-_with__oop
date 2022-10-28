#include <iostream>
using namespace std;
class prime
{
    int a,b,sum,div, mul,sub;

public:
    void summation()
    {
        cout<<"Enter two number : ";
        cin>>a>>b;
        sum = a+b;
        cout<<"Summation is : " <<sum<<endl;

    }
    void subtraction()
    {
        cout<<"Enter two number : ";
        cin>>a>>b;
        sub = a-b;
        cout<<"subtraction is : " <<sub<<endl;

    }
    void multiply()
    {
        cout<<"Enter two number : ";
        cin>>a>>b;
        mul = a*b;
        cout<<"Multiply is : " <<mul<<endl;

    }
    void division()
    {
        cout<<"Enter two number : ";
        cin>>a>>b;
        div = a/b;
        cout<<"division is : " <<div<<endl;

    }
};
int main ()
{
    prime obj;
    obj.summation();
    obj.division();
    obj.multiply();
    obj.subtraction();

    return 0;
}
