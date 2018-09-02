#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
        if(n == 0)
        {
            break;
        }
        vector<int> a;
        for(int i = 1; i<=n; i++)
        {
            a.push_back(i);
        }

        vector<int> b;
        cout << "Discarded cards: ";
        while(a.size()>2)
        {
            b.push_back(a.front());
            cout << a.front() << "," << " ";
            a.erase(a.begin());
            a.push_back(a.front());
            a.erase(a.begin());
        }
        cout << a.front() << endl;
        a.erase(a.begin());
        cout << "Remaining card: " << a.front() << endl;
        a.clear();
        b.clear();
    }
}
