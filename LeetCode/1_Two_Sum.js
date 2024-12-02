/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var map = new Map(); // any type of value can be stored as key value pair
    for(let i = 0;i<nums.length;i++) {
        const diff = target - nums[i]; // if use Math.abs, then always check positive value, negetive difference can not be checked
        if(map.get(diff) != undefined) { // if use true/false, then if left hand side's value is 0, will give wrong result
            return [i, map.get(diff)];
        }
        map.set(nums[i], i); 
    }
};
