#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    int num;

    while(cin >> num)
    {
        if(num==0) break;
        vector<int> g;
        int h;
        for(int i = 0; i<num; i++)
        {
            cin >> h;
            g.push_back(h);
        }
        sort(g.begin(),g.end());
        int flag = 0;
        for(int d  = g.size()-1; d>=0; d--)
        {
            for(int a = 0; a<g.size()&&flag!=1; a++)
            {
                for(int b = a+1; b<g.size()&&flag!=1; b++)
                {
                    for(int c = b+1; c<g.size()&&flag!=1; c++)
                    {
                        if((g[d] == g[a] + g[b] + g[c]) && a!=d && b!=d && c!=d)
                        {
                            flag = 1;
                            cout << g[d] << endl;
                            break;
                        }
                    }
                }
            }

        }
        if(flag == 0)
        {
            cout << "no solution" << endl;
        }
    }
    return 0;
}
