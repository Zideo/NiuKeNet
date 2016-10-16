#include<iostream>
#include<map>

using namespace std;



int main()
{
    int num;
    
    while(cin >> num)
    {
        map<int, int> m;
        while(num--)
        {
            int index, value;
            cin >> index >> value;
            if(!m[index])
            {
                m[index] = value;
            }
            else
            {
                m[index] += value; 
            }
        }
        for(map<int,int>::iterator it=m.begin();it!=m.end();++it)
        {
            cout << it->first << " "<< it->second << endl;
        }
    }
    return 0;
}
