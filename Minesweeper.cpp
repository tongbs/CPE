#include <iostream>
#define len 300

using namespace std;

char field[len][len];
int row , col;

int dfs(int a , int b)
{
    int x[8] = {0,1,1,1,0,-1,-1,-1};
    int y[8] = {1,1,0,-1,-1,-1,0,1};
    int bomb = 0;
    for(int i = 0; i<8; i++)
    {
        int ax = a+x[i];
        int by = b+y[i];
        if(ax>=0 && ax<row && by>=0 && by<col && field[ax][by]=='*')
        {
            bomb++;
        }
    }
    return bomb;
}

int main()
{
    int counting = 0;
    int flag = 0;
    while(cin >> row >>col)
    {
        if(row==0 || col==0)
        {
            flag = 1;
            break;
        }

        counting++;
        if(counting!=1&&flag!=1)
        {
            cout << endl;
        }

        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                cin >> field[i][j];
            }
        }
        cout << "Field" << " " << "#" << counting << ":" << endl;
        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                if(field[i][j]=='*')
                {
                    cout << '*';
                }
                else
                {
                    cout << dfs(i,j);
                }
            }
            cout << endl;
        }
    }
    return 0;
}
