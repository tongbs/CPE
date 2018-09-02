#include <iostream>
#include <vector>
#include <algorithm>
//first output min い计
//second output 计いΤ碭计㎝い计妓(案计计Τㄢい计)
//third 材琌璶衡Τ碭ぃ才A┦借计硂ㄇ计⊿Τ瞷硂帮计柑
//碞琌い丁ㄢ计搭1埃い丁ㄢ计ㄢ计い丁–ぃ常ず
using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        vector<int> b;
        for(int i = 0; i<num; i++)
        {
            int a;
            cin >> a;
            b.push_back(a);
        }
        sort(b.begin(),b.end());
        int mid = (b.size()-1)/2;
        int counting = 0;
        int diffvalue;
        if(num%2==1)
        {
            for(int i = mid; i>=0&&b[i]==b[mid]; i--)
            {
                counting++;
            }
            for(int i = mid+1; i<b.size()&&b[i]==b[mid]; i++)
            {
                counting++;
            }
            diffvalue = 1;
        }
        else
        {
            for(int i = mid; i>=0&&b[i]==b[mid]; i--)
            {
                counting++;
            }
            for(int i = mid+1; i<b.size()&&b[i]==b[mid+1]; i++)
            {
                counting++;
            }
            diffvalue = b[mid+1]-b[mid]+1;
        }
        cout << b[mid] << " " << counting << " " << diffvalue << endl;
    }
    return 0;
}
