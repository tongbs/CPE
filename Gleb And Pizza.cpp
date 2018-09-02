#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    #define int long long
    int R , W;
    while(cin >> R >> W)
    {
        int n;
        cin >> n;
        int counting = 0;
        for(int i = 0; i<n; i++)
        {
            int x , y , r;
            cin >> x >> y >> r;
            float l = sqrt(x*x + y*y);
            //cout << l << "AAA";
            if(l+r<=R && l-r>=R-W)
            {
                counting++;
            }
        }
        cout << counting << endl;
    }
}
