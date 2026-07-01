/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let count0=0;
    let count1=0;
    let count2=0;
    for(let i=0;i<nums.length;i++){
        if(nums[i] == 0){
            count0++;
        }else if(nums[i] == 1){
            count1++;
        }else{
            count2++;
        }
    }

    let indx = 0;
    for(let i=0;i<count0;i++){
        nums[indx++] = 0;
    }
    for(let i=0;i<count1;i++){
        nums[indx++]=1;
    }for(let i=0;i<count2;i++){
        nums[indx++]=2;
    }
};
