#include <bits/stdc++.h>
using namespace std;
class member
{
    int a,b;
public:
    void display(int a, int b)
    {
        int t;
        t = a;
        a = b;
        b = t;
        cout<<"After swapping : "<<a<<" "<<b<<endl;
    }
};

int main ()
{
    int a,b,t;
    cout<<"Before swapping : ";
    cin>>a>>b;
    member p;
    p.display(a,b);

    return 0;
}
