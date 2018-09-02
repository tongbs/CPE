#include <iostream>
#include <algorithm>

//計算bubble sort的次數

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while(cases--)
    {
        int train[55] = {};
        int number;
        cin >> number;
        int train_num;
        for(int i = 0; i<number; i++)
        {
            cin >> train_num;
            train[i] = train_num;
        }
        int swap_num = 0;
        for(int j = 0; j<number; j++)
        {
            for(int k = number-1; k>j; k--)
            {
                if(train[k-1]>train[k])
                {
                    swap(train[k-1] , train[k]);
                    swap_num++;
                }
            }
        }
        cout << "Optimal train swapping takes " << swap_num <<" swaps." << endl;
    }
}
