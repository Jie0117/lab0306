#include <iostream>
using namespace std;
int main()
{
    int a,k=0,l=0,j;
    cin >> a;
    for (int i = a+1; i > 0;i++)
    {
        k = 0;
        for(j = 2; j < i; j++)
        {
            
            if(i%j==0)//不是質數
            {
                k++;
            }
        
        }
        if(k==0)
        {
            cout << j << " ";
            l++;
        }
        if(l==5)
        {
            break;
        }

    }
    cout << endl;
}