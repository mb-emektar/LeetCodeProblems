class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int k = 0, m = 0;
        int biggest;
        vector<vector<int>> result(grid.size()-2, vector< int >(grid.size()-2,-99)); 
       // result.resize(grid.size()-2, vector<int>(grid.size()-2, 0));
        for (int  k = 0; k<grid.size()-2 ; k++ ){ 
            for (int  m = 0 ; m<grid.size()-2 ; m++ ){
                biggest = -9999;
                
                for (int i = 0 ; i<3 ; i++ ){
                    for (int j = 0 ; j<3; j++ ){
                       if(grid[k+i][m+j]>=biggest){ 
                           biggest =grid[k+i][m+j] ;
                           result[k][m] = grid[k+i][m+j];
                       }

                    }
                    
                }
                
            }
        }
        
        return result;
    }
};