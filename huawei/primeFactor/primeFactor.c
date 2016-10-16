#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<sstream>
using namespace std;

string getResult(long int ulDataInput)
{
    string result="";
    for(int i=2; i<=sqrt(static_cast<double>(ulDataInput)); i++)
    {
        if(ulDataInput % i != 0)
        {
            continue;
        }
        stringstream ss;
	ss << i;
        ss << " ";
        result += ss.str();
        ulDataInput /= i;
        i--;
    }
    stringstream ss;
    ss << ulDataInput;
    ss << " ";
    result += ss.str();
    return result;
}


int main()
{
    long int data;

    while(cin >> data)
    {
        string result = getResult(data);
        cout<<result<<endl;
    }
    return 0;
}
