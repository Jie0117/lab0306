#include <iostream>
using namespace std;
int main()
{
    int s, a, b, c;
    cin >> s >> a >> b >> c;
    srand(s);
    for (int i = 0; i < c;i++)
    {
        cout << rand() % (b-a+1) + a <<" ";
    }
    cout << endl;
}