class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int,int>> a;
        int lr = 0 ;
        int lc = 0 ;
        for(int i = 0 ; i<rows;i++)
        {

        for(int j = 0 ; j<cols ; j++)
            
        {
            
            if(grid[i][j]==2)
            {
a.push({i,j});
                lr = i ; 
                lc = j ; 

            }
        }}
        int minutes = 0 ; 
        
        int nlr = -1 ;
        int nlc = -1 ;
        int count = 0;
        while(!a.empty())
        {
            pair<int,int> curr = a.front();
            a.pop();
            
            int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
            for(int i = 0 ; i<4;i++)
            {
               
                    int nr = curr.first + dir[i][0];
                    int nc = curr.second + dir[i][1];
                    if(nr>=0 && nr<rows && nc>=0 && nc<cols){
                    if(grid[nr][nc]==1)
                    {
                        grid[nr][nc]=2;
                        nlr = nr;
                        nlc = nc;
                        
                        count+=1;
                        cout<<endl<<"THis is count"<<count<<endl ;
                        
                        cout<<nr<<" "<<nc<<endl ;
                        a.push({nr,nc});
                    }
                    }
                
            }
            
             
             if((curr.first == lr && curr.second == lc))
            {
                 cout<<endl<<endl;
                 
                 if(count>0)
                 {
                minutes++;
                lr = nlr ; 
                lc = nlc ; 
                     
                 }
                 count=0;
                 cout<<lr;
                 cout<<lc;
                
            }
        }
        
        for(int i = 0 ;i<rows; i++)
        {
            for(int  j = 0 ; j<cols; j++)
            {
                if(grid[i][j]==1)
                {
                    return -1 ;
                    
                }
            }
        }
        return minutes ;
    }
};