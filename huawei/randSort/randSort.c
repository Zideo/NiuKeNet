#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int nums; // 表示随机数个数
     
    while (cin >> nums)
    { vector<int> id(1001, 0); int tmp; for (int i = 1; i <= nums; i++)
        {
            cin >> tmp; id[tmp]++;
        }
        for (int j = 1; j < id.size(); j++)
            if (id[j]>0) cout << j << endl;
 
    }
 
    return 0;
}
