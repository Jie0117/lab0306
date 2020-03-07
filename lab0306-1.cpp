#include <iostream>
using namespace std;
int main()
{
    int a=0, b=0,c,d;
    cin >> a >> b;
    c = a;
    d = b;
    if(a==0 || b==0)
    {
        cout << "0 0\n";
    }
    else
    {
        for (int i = 0; i <100 ;i++)
        {
        if(a>b)
        {
            a = a - b;
        }
        else 
        {
            b = b - a;
        }
        if(a==0)
        {
            cout << b << " "<<c*d/b<<endl;
            break;
        }
        if(b==0)
        {
            cout << a << " "<<c*d/a<<endl;
            break;
        }
        }   

    }
}