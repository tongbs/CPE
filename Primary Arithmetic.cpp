#include <iostream>

using namespace std;

int main()
{
    int a , b;
    while(cin >> a >> b)
    {
        if(a==0||b==0)
        {
            break;
        }
        int carry = 0;
        int counting = 0;
        while(a||b)
        {
            carry = a%10 + b%10 + carry;
            carry/=10;
            a/=10;
            b/=10;
            if(carry)
            {
                counting++;
            }
        }
        if(counting == 1)
        {
            cout << counting <<" carry operations."<<endl;
        }
        else if(counting>1)
        {
            cout << counting << " carry operations." << endl;
        }
        else if(counting == 0)
        {
            cout << "0" <<" carry operations."<<endl;
        }
    }
}
