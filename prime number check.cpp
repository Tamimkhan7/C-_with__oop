#include <iostream>
using namespace std;
class prime
{
    int a,i,c=1;
public:
    void display()
    {
        cout<<"Enter an number : ";
        cin>>a;
        if (a==0 || a==1)
        {
            c++;
        }
        for (i=2; i<a; i++)
        {
            if (a%i==0)
                c++;
        }
        if (c==1)
        {
            cout<<"The number is prime"<<endl;
        }
        else
        {
            cout<<"The number is not prime"<<endl;
        }
    }
};
int main ()
{
    prime obj;
    obj.display();

    return 0;
}
