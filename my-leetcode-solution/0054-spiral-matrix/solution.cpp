class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        int tr = 0;       // top row
        int rc = n - 1;   // right column
        int br = m - 1;   // bottom row
        int lc = 0;       // left column

        vector<int> ans;

        while (tr <= br && lc <= rc) {

            // 1. Top row →→→
            for (int i = lc; i <= rc; i++) {
                ans.push_back(mat[tr][i]);
            }

            // 2. Right column ↓↓↓
            for (int i = tr + 1; i <= br; i++) {
                ans.push_back(mat[i][rc]);
            }

            // 3. Bottom row ←←←
            if (tr < br) {
                for (int i = rc - 1; i >= lc; i--) {
                    ans.push_back(mat[br][i]);
                }
            }

            // 4. Left column ↑↑↑
            if (lc < rc) {
                for (int i = br - 1; i > tr; i--) {
                    ans.push_back(mat[i][lc]);
                }
            }

            // Move boundaries inward
            tr++;
            rc--;
            br--;
            lc++;
        }

        return ans;
    }
};
