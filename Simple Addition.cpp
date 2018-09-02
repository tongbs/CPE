#include <iostream>

using namespace std;

long long int counting (long long int n)
{
    long long int sum = 0;
    if(n<=0) return 0;
    while(n!=0)
    {
        sum+=(n/10)*45;
        for(long long int i = (n/10)*10+1; i<=n; i++)
        {
            sum+=i%10;
        }
        n/=10;
    }
    return sum;
}

int main()
{
    #define int long long
    int p , q;
    while(cin >> p >> q)
    {
        if(p<0 || q<0)
        {
            break;
        }
        else
        {
            cout << counting(q) - counting(p-1) << endl;
        }
    }

}
