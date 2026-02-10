class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int tar) {
        int row = matrix.size();
        int cols = matrix[0].size();

        int sR = 0,eR = row-1;
        while(sR <= eR){
            int mR = sR + (eR-sR) / 2;

            if(tar >= matrix[mR][0] && tar <= matrix[mR][cols-1]){
                int s = 0; int e = cols-1;
                while(s <= e){
                    int mid = s + (e-s)/2;
                    if(tar == matrix[mR][mid]){
                        return true;
                    }else if(tar < matrix[mR][mid]){
                        e = mid-1;
                    }else{
                        s = mid+1;
                    }
                }
                return false;
            }
            else if(tar < matrix[mR][0]){
                eR = mR-1;
            }else{
                sR = mR+1;
            }
        }
        return false;
    }
};
