class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int j = 0 ;
        vector<int> ok ; 
        int current_row = 0 ;
        int current_col = 0 ;
        rows = rows-1;
        while(rows!=0 && cols!=0)
        {
            if(j==0)
            {
                int k = 0 ;
                if(current_row!=0 || current_col!=0)
                {
                    current_col++;
                }
                 for( ; k<cols;k++)
                {
                                          
                    if(k!=0)
                    {
                          current_col = current_col + 1;
                    }
                        
                    
                  
                     
                    
                    ok.push_back(matrix[current_row][current_col]);
                }
                cols--;
                 
                j = (j+1)%4;
            }
            else if(j==1)
            {
              int k = 0 ; 
                current_row++;
                for(;k<rows;k++)
                {   if(k!=0)
                {
                    current_row = current_row + 1 ; 
                }
                    
                    ok.push_back(matrix[current_row][current_col]);
                    
                }
                rows--;
                j = (j+1)%4;
            }
            else if(j==2)
            {
                int k = 0; 
                current_col--;
                for( ; k<cols;k++)
                {
                     if(k!=0)
                {
                    current_col = current_col - 1 ; 
                }
                    
                    ok.push_back(matrix[current_row][current_col]);
                }
                cols--;
                 j = (j+1)%4;
                
            }
            else if(j==3)
            {
                int k = 0 ; 
                current_row--;
                for(;k<rows;k++)
                {
                     if(k!=0)
                {
                    current_row = current_row -1  ; 
                }
                    
                    ok.push_back(matrix[current_row][current_col]);
                    
                }
                rows--;
                j = (j+1)%4;
            }
        }
        if(j==0)
            {
                int k = 0 ;
                if(current_row!=0 || current_col!=0)
                {
                    current_col++;
                }
                 for( ; k<cols;k++)
                {
                                          
                    if(k!=0)
                    {
                          current_col = current_col + 1;
                    }
                        
                    
                  
                     
                    
                    ok.push_back(matrix[current_row][current_col]);
                }
                cols--;
                 
                j = (j+1)%4;
            }
            else if(j==1)
            {
              int k = 0 ; 
                current_row++;
                for(;k<rows;k++)
                {   if(k!=0)
                {
                    current_row = current_row + 1 ; 
                }
                    
                    ok.push_back(matrix[current_row][current_col]);
                    
                }
                rows--;
                j = (j+1)%4;
            }
            else if(j==2)
            {
                int k = 0; 
                current_col--;
                for( ; k<cols;k++)
                {
                     if(k!=0)
                {
                    current_col = current_col - 1 ; 
                }
                    
                    ok.push_back(matrix[current_row][current_col]);
                }
                cols--;
                 j = (j+1)%4;
                
            }
            else if(j==3)
            {
                int k = 0 ; 
                current_row--;
                for(;k<rows;k++)
                {
                     if(k!=0)
                {
                    current_row = current_row -1  ; 
                }
                    
                    ok.push_back(matrix[current_row][current_col]);
                    
                }
                rows--;
                j = (j+1)%4;
            }
        return ok ; 
    }
};