#include <iostream>
#include <algorithm>
#define maxn 500

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int row;
        int col;
        cin >> row >> col;
        int grid[maxn][maxn];
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                grid[i][j] = 0;
            }
        }
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                cin >> grid[i][j];
            }
        }
        int dp[row][col];
        dp[0][0] = grid[0][0];
        for (int i = 1; i < row; i++) dp[i][0] = grid[i][0] + dp[i - 1][0];
        for (int i = 1; i < col; i++) dp[0][i] = grid[0][i] + dp[0][i - 1];
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
            cout << dp[row - 1][col - 1] << endl;
        }
}
