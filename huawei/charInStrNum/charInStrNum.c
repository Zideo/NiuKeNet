#include<iostream>

using namespace std;
#define MAXSIZE 100

int getCharCount(char *str, char c)
{
    int i=0;
    int count=0;
    if(c>='A' && c<='Z')
        c=c+32;

    while(str[i] != '\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            if(str[i]+32== c)
                count++;
        }
        else if(str[i]==c)
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char str[MAXSIZE];
    char c;
    cin>>str;
    cin>>c;
    int count = getCharCount(str,c);
    cout<<count<<endl;
    return 0;
}
