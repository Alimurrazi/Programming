/**
 * @param {number[]} A
 * @return {number}
 */

var ara;
function binarySearch(firstIndex,lastIndex){
    var pivotIndex = Math.floor((firstIndex + lastIndex)/2);
    if(ara[pivotIndex]>ara[pivotIndex-1] && ara[pivotIndex]>ara[pivotIndex+1]){
        return pivotIndex;
    }
    else if(ara[pivotIndex]>ara[pivotIndex-1] && ara[pivotIndex]<ara[pivotIndex+1]){
        return binarySearch(pivotIndex, lastIndex);
    }
    else if(ara[pivotIndex]<ara[pivotIndex-1] && ara[pivotIndex]>ara[pivotIndex+1]){
        return binarySearch(firstIndex, pivotIndex);
    }
}

var peakIndexInMountainArray = function(A) {
    ara = A;
    return binarySearch(0,ara.length-1);
};