class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;

        while(s < e){
            int mid = s + (e - s) / 2;

            if(arr[mid] < arr[mid + 1]){
                // We're on the uphill, peak is to the right
                s = mid + 1;
            } else {
                // We're on downhill or at peak, peak is at mid or left
                e = mid;
            }
        }
        return s; // s == e == peak index
    }
};
