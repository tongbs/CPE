#include <iostream>


using namespace std;

int fib[5001][3000] = {0};

int main()
{
    fib[0][0] = 0;
    fib[1][0] = 1;
    fib[2][0] = 1;

    for(int i = 3; i<=5000; i++)
    {
        for(int j = 0; j<3000; j++)
        {
            fib[i][j] += fib[i-1][j] + fib[i-2][j];
            if(fib[i][j]>=10)
            {
                fib[i][j+1]+=fib[i][j]/10;
                fib[i][j]%=10;
            }
        }
    }
    int n;
    while(cin >> n)
    {
        if(n == 0)
        {
            cout << "The Fibonacci number for " << n << " is ";
            cout << "0" << endl;
        }
        else
        {
            cout << "The Fibonacci number for " << n << " is ";
            int p;

            for(p = 2999; p>=0; p--)
            {
                if(fib[n][p]!=0)
                {
                    break;
                }
            }
            //cout << p << "!!";
            for(;p>=0;p--)
            {
                cout << fib[n][p];
            }
            cout << endl;
        }
    }

}
