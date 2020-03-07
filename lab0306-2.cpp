#include <iostream>
using namespace std;
void intcbfSort(int&v1,int&v2,int&v3);
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    intcbfSort(a,b,c);
    cout << a <<" "<< b<<" " << c <<" \n";
}
void intcbfSort(int&v1,int&v2,int&v3)
{
    int k;
    for (int i = 0; i < 3;i++)
    {
        if(v1<v2)
        {
            k = v1;
            v1 = v2;
            v2 = k;
        }
        if(v2<v3)
        {
            k = v2;
            v2 = v3;
            v3 = k;
        }
    }
}
