class Solution {
public:
    int maxArea(vector<int>& height) {
        int lt = 0;
        int rt = height.size()-1;
        int maxiArea = 0;
    while(lt < rt){
        int hight = min(height[lt],height[rt]);
        int width = rt-lt;
        int curArea = hight*width;
        maxiArea = max(maxiArea,curArea);
        if(height[lt] < height[rt]){
            lt++;
        }
        else{
            rt--;
        }
    }
    return maxiArea;
    }
};
