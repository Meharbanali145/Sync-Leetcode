class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int st = 1; //0th position and last position can never be a peak position in mountain aray
        int end = n-2;
        while(st <= end){
            int mid = st + (end - st )/2;
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
			    return mid;
            }
            if(arr[mid-1] < arr[mid]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return -1;
    }
};
