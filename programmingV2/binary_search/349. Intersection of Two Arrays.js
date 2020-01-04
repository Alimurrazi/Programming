/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var ara1, ara2, result;

function binarySearch(ara,value,first,last){
    if(first<=last){
    let middle = Math.floor((first+last)/2);
    if(ara[middle]==value){
        result.add(value);
        return;
    }
        if(ara[middle]>value){
            binarySearch(ara,value,first,middle-1);
        }
        if(ara[middle]<value){
             binarySearch(ara,value,middle+1,last);
        }
        }
    else{
        return;
    }
    }

var intersection = function(nums1, nums2) {
    ara1 = new Set();
    ara2 = new Set();
    result = new Set();
    let i;
    nums2.sort(function(a,b){return a - b});
    for(i=0;i<nums1.length;i++){
        binarySearch(nums2,nums1[i],0,nums2.length-1);
    }
    result = Array.from(result);
    return result;
};