#include <iostream>
using namespace std;
class number
{
    int i, n;
public:
    void display()
    {
        cout<<"Enter the number : ";
        cin>>n;
        cout<<"Even : ";

        for (i=1; i<=n; i++)
        {
            if (i%2==0)
            {
                cout<<i<<" ";
            }

        }
        cout<<endl;
    }

    void getdata()
    {
        cout<<"Odd : ";

        for (i=1; i<=n; i++)
        {

            if (i%2!=0)
            {
                cout<<i<<" ";
            }

        }
        cout<<endl;
    }
};
int main ()
{
    number p;
    p.display();
    p.getdata();

    return 0;
}
