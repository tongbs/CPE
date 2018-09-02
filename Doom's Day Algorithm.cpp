#include <iostream>
#include <string>

using namespace std;

int main()
{
    int month[13] = {0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 ,30 ,31 , 30 , 31};
    string day[7] = {"Friday" , "Saturday" , "Sunday" , "Monday" , "Tuesday" , "Wednesday" , "Thursday"};//先自己推出1/1是星期六
    int test_num;
    cin >> test_num;
    while(test_num--)
    {
        int M , D;
        cin >> M >> D;
        int total_day = 0; //calculate  number of days from 1/1~~M/D
        for(int i = 0; i<M ; i++)
        {
            total_day+=month[i];
        }
        total_day+=D;
        int date = 0;
        date = total_day%7;
        cout << day[date] << endl;
    }

}
