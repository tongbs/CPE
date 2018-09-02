#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char str[10000];
    int count = 0;
    while(gets(str) != NULL)
    {
        for( int i = 0;i < strlen(str); i++)
        {
            if(str[i] == '"'&&count == 0)
            {
                cout<<"``";
                count = 1;
            }
            else if(str[i] == '"'&&count == 1)
            {
                cout<<"''";
                count = 0;
            }
            else
            {
                cout << str[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
