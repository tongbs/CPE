#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool cmp (string a,string b)
{
    return (a+b) > (b+a);
}


int main(){

    int n;
    vector <string> a;
    while(cin>>n)
    {
        if(n == 0)
        {
            break;
        }
        else
        {
            string temp;
            for(int i = 0; i<n; i++)
            {
                cin >> temp;
                a.push_back(temp);
            }
            sort(a.begin(),a.end(),cmp);
            for(int i = 0; i<n; i++)
            {
                cout<<a[i];
            }
            /*if((a[0]+a[1])>a[1]+a[0])
            {
                cout << "fuck" << endl;
            }
            cout <<"+++++++"<< a[0]+a[1] << "+++++++";*/
            cout << endl;
            a.clear();
        }

    }
    return 0;
}
