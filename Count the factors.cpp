#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int ans = 0;
        if(n==0) break;
        cout << n << " " << ":" << " ";
        for(int i = 2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                ans++;
            }
            while(n%i==0)
            {
                n/=i;
            }
        }
        if(n!=1)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
