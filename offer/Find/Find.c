class Solution {
public:
    bool Find(vector<vector<int> > array,int target) {
        int rows=array.size();
        int cols=array[0].size();
        
        int row=1,col=1;
        while(row<=rows && col<=cols)
        {
            if(target == array[row-1][cols-col])
                return true;
            else if(target < array[row-1][cols-col])
                col++;
            else
                row++;    
        }
        return false;
    }
};
