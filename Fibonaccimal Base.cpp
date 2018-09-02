#include <iostream>

using namespace std;

int fib[40];

int main()
{
    int test_num;
    cin >> test_num;
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i<40;i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
    }
    while(test_num--)
    {
        int flag = 0;
        int number;
        cin >> number;
        cout << number <<" = ";
        for(int j = 39;j>1;j--)
        {
            if(number/fib[j]==1)
            {
                cout << "1";
                number%=fib[j];
                flag = 1;
            }
            else if(flag)
            {
                cout << "0";
            }
        }
        cout << " (fib)"<<endl;
    }
}
