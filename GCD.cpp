#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int GCD(int a, int b)
{
    vector<int> c;
    int temp;
    if(a>=b) temp = b;
    else temp = a;
    for(int i = 1; i<=temp; i++)
    {
        if(a%i==0 && b%i==0)
        {
            c.push_back(i);
        }
    }
    sort(c.begin(),c.end());
    return c.back();
}



int main(){
    int n;
    while(cin>>n)
    {
        if(n == 0) break;
        int G = 0;
        for(int i = 1; i<= n; i++)
        {
            for(int j = i+1; j<= n; j++)
            {
                G+=GCD(i,j);
            }
        }
        cout << G << endl;
    }
}
