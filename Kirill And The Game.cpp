#include <iostream>

using namespace std;

int main()
{
    #define int long long
    int l , r , x , y , k;
    while(cin >> l >> r >> x >> y >> k)
    {
        int flag = 0;
        for(int i = x; i<y+1; i++)
        {
            if(i*k >= l && i*k<=r)
            {
               if(flag == 0)
               {
                    cout << "YES" << endl;
                    flag = 1;
               }
            }
        }
        if(flag==0)
        {
            cout << "NO" << endl;
        }
    }
}
