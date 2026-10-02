class Solution {
public:
 
bool searchMatrix(vector<vector<int>>& mat, int tar){

    int r = 0;
    int c = mat[0].size()-1;


    while(r < mat.size() && c >= 0){
        if(tar == mat[r][c]){
            return true;
        }
        else if(tar > mat[r][c]){
            r++;
        }
        else{
            c--;
        }
    }

    return false;
}
};
