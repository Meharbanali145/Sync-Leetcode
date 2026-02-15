class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = mat.size();
        int cols = mat[0].size();

        int r = 0 , c= cols-1;
        while(r < row && c >= 0){
            if(target == mat[r][c]){
                return true;
            }else if(target < mat[r][c]){
                c--;
            }else{
                r++;
            }
        }
        return false;
    }
};
