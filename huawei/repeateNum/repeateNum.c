#include<iostream>

using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        bool flag[10];
        for(int i=0; i<10; i++)
            flag[i] = false;
        if(0 == num)
        {
            cout << num <<endl;
        }
        else
        {
            while(num > 0)
            {
                int temp = num%10;
                if(false == flag[temp])
                {
                    flag[temp] = true;
                    cout << temp;
                }
                num /= 10;
            }
            cout << endl;
        } 
    }    
    return 0;
}
