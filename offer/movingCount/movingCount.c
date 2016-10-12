public:
    int movingCount(int threshold, int rows, int cols)
    {
       ///bool flag[][] = new int[rows][cols]; 
        bool **flag;
        flag = new bool*[rows];
        for(int i=0; i<rows; i++)
        {
            flag[i] = new bool[cols];
        }
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)   
            {
                flag[i][j]=false;
            }
        }
        
       return helper(0, 0, rows, cols, flag, threshold);      
    }
private:
    int helper(int i, int j, int rows, int cols, bool** flag, int threshold) 
    {
        if (i < 0 || i >= rows || j < 0 || j >= cols || numSum(i) + numSum(j)  > threshold || flag[i][j] == true) return 0;    
        flag[i][j] = true;
        return helper(i, j+1, rows, cols, flag, threshold)
            + helper(i+1, j, rows, cols, flag, threshold) + 1;
    }
    
    int numSum(int i) 
    {
    	int sum = 0;
        do
        {
            sum += i%10;
        }while((i = i/10) > 0);
    	return sum;
    }
};
