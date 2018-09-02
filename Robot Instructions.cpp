#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    while(test_case--)
    {
        int number;
        cin >> number;
        int answer = 0;
        int a[105] = {};
        string b;
        for(int i = 1;i<=number;i++)
        {
            cin >> b;
            if(b=="LEFT")
            {
                a[i] = -1;
                answer--;
            }
            else if(b=="RIGHT")
            {
                a[i] = 1;
                answer++;
            }
            else if(b=="SAME")
            {
                string c;
                cin >> c;
                int d;
                cin >> d;
                a[i] = a[d];
                answer+=a[d];
            }

        }
        cout << answer << endl;
    }
}
