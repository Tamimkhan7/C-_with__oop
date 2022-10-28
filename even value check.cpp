#include <iostream>
using namespace std;
class value
{
    int i, n;
public:
    void display()
    {
        cout<<"Enter the value : ";
        cin>>n;
        for (i=1; i<=n; i++)
            if (i%2==0)
                cout<<i<<" ";
    }
};
int main()
{
    value p;
    p.display();


    return 0;
}
