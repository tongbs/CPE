#include <iostream>

using namespace std;
#define max_len 200
char field[max_len][max_len];
int N,M;

void dfs(int x,int y){
    field[x][y]='.';

    for(int dx = -1;dx<=1;dx++){
        for(int dy = -1;dy<=1;dy++){
            int nx = x + dx;
            int ny = y + dy;

            if(0<= nx && nx<N && ny<M && 0<=ny ){
                if(field[nx][ny] =='W')
                    dfs(nx,ny);
            }
        }
    }
    return;
}

int main(){
    cin>>N>>M;
    //cin.get();

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>field[i][j];
        }
    }
    /*for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout<<field[i][j];
        }
    }*/
    int res = 0;
    for(int i = 0;i<N;i++){
        for(int j=0;j<M;j++){
            if(field[i][j]=='W'){
                dfs(i,j);
                res++;
            }
        }
    }
    cout<<res<<endl;
}


