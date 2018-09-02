#include <iostream>
#include <string>
#include <algorithm>
#define len 1000

using namespace std;

int main()
{
    string a;
    while(cin >> a)
    {
        if(a=="0") break;
        int b [len] = {0};
        for(int i = 0; i<a.length(); i++)
        {
            b[i] = a[i] - '0';
        }
        int even = 0;
        for(int i = 0; i<a.length(); i+=2)
        {
            even+=b[i];
        }
        int odd = 0;
        for(int i = 1; i<a.length(); i+=2)
        {
            odd+=b[i];
        }
        int test  = abs(even-odd);
        if(test%11==0)
        {
            cout << a << " is a multiple of 11." << endl;
        }
        else
        {
            cout << a << " is not a multiple of 11." << endl;
        }
    }
}
