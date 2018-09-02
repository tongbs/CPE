#include <iostream>
//HARD!!!!!!!!!!!!

using namespace std;

int main()
{
   int n;
   while(cin >> n)
   {
       for(int i = 1; i < n; i++)
       {
           //cout << i << "!!!!!" << endl;
           int rest = 0;
           for(int j = 1; j < n; j++)
           {
               //cout << "befor: " << rest;
               rest = (rest+i)%j;
               //cout << "  after:" << rest << endl;
               //cout <<  "--------" << endl;
           }
           if(rest == 11)
           {
               //cout << "-----------------------" << endl;
               cout << i << endl;
               break;
           }
       }
   }
   return 0;
}
