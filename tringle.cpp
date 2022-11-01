#include <bits/stdc++.h>
using namespace std;
/*class member
{
    int height, length;
public:
    void display(int height, int length)
    {
        int area;
        area = 0.5*height*length;
        cout<<"Triangle is : "<<area<<endl;
    }
};

int main ()
{
    int height, length;
    cout<<"Enter the value : ";
    cin>>height>>length;
    member p;
    p.display(height, length);

    return 0;
}*/

class person
{
    int height, length, area;
public:
    void display()
    {
        cout<<"Enter the two value : ";
        cin>>height>>length;
        area = 0.5*height*length;
        cout<<"Area is :" <<area<<endl;
    }
};

int main()
{
    person p;
    p.display();
    return 0;
}
