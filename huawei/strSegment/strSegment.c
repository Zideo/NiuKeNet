#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[101];

    while(cin>>str)
    {
        int len = strlen(str);
        int i=0;
        for(i=0; i<len;i++)
        {
            cout<<str[i];
            if(7 == i%8)
                cout<<endl;
        }
        if(0 == i%8)
            break;
        while(0 != i%8)
        {
            cout<<0;
            i++;
        }
        cout<<endl;    
    }
    return 0;
}
