#include <iostream>
#define len 105

using namespace std;

char field[len][len];
int n,m;

void dfs(int a,int b){
    int c[8]={-1,0,1,1,1,0,-1,-1};
    int d[8]={1,1,1,0,-1,-1,-1,0};
    field[a][b]='*';
    for(int i=0;i<8;i++){
        int nx=a+c[i];
        int ny=b+d[i];
        if(0<=nx&&nx<n&&0<=ny&&ny<m&&field[nx][ny]=='@'){
            dfs(nx,ny);
        }
    }
  return;
}




int main(){
    while(cin>>n>>m){
        if(n==0||m==0){
            break;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>field[i][j];
            }
        }
        int oil=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(field[i][j]=='@'){
                    dfs(i,j);
                    oil++;
                }
            }
        }
    cout<<oil<<endl;
    }
  return 0;
}

