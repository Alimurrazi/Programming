/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let count = 1;
    for(i=1;i<nums.length;i++) {
        if(nums[i] !== nums[i-1]) {
            count++;
            nums[count - 1] = nums[i];
        }
    }
    return count;
};