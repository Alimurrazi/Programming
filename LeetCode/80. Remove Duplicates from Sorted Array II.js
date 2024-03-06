/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
  let count = 1;
  let sequenceCount = 1;
  let min = nums[0];
  for (let i = 1; i < nums.length; i++) {
    if (nums[i] === min && sequenceCount < 2) {
      sequenceCount++;
      count++;
      nums[count - 1] = nums[i];
    }
    if (nums[i] !== min) {
      min = nums[i];
      sequenceCount = 1;
      count++;
      nums[count - 1] = nums[i];
    }
  }
  return count;
};
