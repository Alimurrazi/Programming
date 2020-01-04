/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var charAra=[];
var currentIndex;
function binarySearch(ara,value,low,high){
    while(low<=high){
        mid = Math.floor((low+high)/2);
        if(ara[mid]==value){
            break;
        }
        if(ara[mid]<value){
            low=mid+1;
        }
        if(ara[mid]>value){
            high=mid-1;
        }
    }
    if(ara[low]==value){
        low++;
    }
    if(ara[high]==value){
        high++;
    }
        if(ara[mid]>value){
                return ara[mid];
            }
        if((mid+1)<ara.length){
            if(ara[mid+1]>value){
                return ara[mid+1];
            }
        }
        if((mid-1)>=0){
            if(ara[mid-1]>value){
                return ara[mid-1];
            }
        }
    return -1;
}

var isSubsequence = function(s, t) {
    let i;
    currentIndex = -1;
    let isExist=true;
    for(i =0;i<26;i++){
        charAra[i]=[];
    }
    for(i =0;i<t.length;i++){
        let index = t.charCodeAt(i)-'a'.charCodeAt(0);
        charAra[index].push(i);
    }
    for(i=0;i<s.length;i++){
        let index = s.charCodeAt(i)-'a'.charCodeAt(0);
        if(charAra[index].length==0){
            isExist = false;
            break;
        }else{
            let res;
            res = binarySearch(charAra[index],currentIndex,0,charAra[index].length-1);
            if(res==-1){
                isExist = false;
                break;
            }
            else{
                currentIndex = res;
            }
        }
    }
    return isExist;
};