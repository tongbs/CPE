#include <iostream>

using namespace std;



int main(){
    #define int long long
    int n;
    int count = 0;
    int f[51] = {};
    for(int i = 0;i < 51; i++)
    {
        if(i == 0 || i == 1){
            f[i] = 1;
        }
        else
        {
            f[i] = f[i-1] + f[i -2];
        }
    }
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        else
        {
           cout << f[n] << endl;
        }
    }
    return 0;
}
