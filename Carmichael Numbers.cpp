#include <iostream>
#define maxn 65000

typedef long long ll;
using namespace std;

int prime[maxn];

ll mod(int a , int n , int m)//even num a^n%m = ((a^(n/2)%m)*(a^(n/2)%m))%m
{
    if(n==1) return a%m;//這兩段不能交換
    ll x = mod(a,n/2,m);//
    x = (x*x)%m;
    if(n%2)
    {
        x = (x*a)%m;
    }
    return x;
}

int test(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(mod(i , n , n)!=i) //小於n的每個a都要滿足mod完仍是a
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    for(int i = 0; i < 65000; i++)
    {
        prime[i] = 1;
    }
    for(int i =2; i<65000; i++)
    {
        if(prime[i])
        {
            for(int j =2*i; j<65000; j+=i)
            {
                prime[j] = 0;
            }
        }
    }
    int n;
    while(cin >> n && n)
    {
        if(!prime[n] && test(n))
        {
            cout << "The number " << n << " is a Carmichael number." << endl;
        }
        else
            cout << n << " is normal." << endl;
    }
    return 0;
}
