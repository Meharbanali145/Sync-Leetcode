class Solution {
public:
   int maxArea(vector<int>& height){
	int maxWater = 0;
	int leftPointer = 0;
	int rightPointer = height.size()-1;
	while(leftPointer < rightPointer){
		int w = rightPointer-leftPointer;
		int ht = min(height[leftPointer],height[rightPointer]);
		int curWater = w*ht;
		maxWater = max(maxWater,curWater);
		height[leftPointer]<height[rightPointer]?leftPointer++ : rightPointer--;
	}
	
	return maxWater;
}
};
