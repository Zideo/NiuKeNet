#include<iostream>

using namespace std;

int main()
{
   float data;

   while(cin >> data)
   {
       int num =(int)(data) + (int)((data - (int)data)>=0.5);
       cout << num <<endl;
   }
   return 0;
}
