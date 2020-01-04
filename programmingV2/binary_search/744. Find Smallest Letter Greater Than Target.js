/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 */
function binarySearch(ara,value,low,high){
    var mid,i;
    while(low<=high){
        mid= Math.floor((low+high)/2);
       //  console.log(low+' '+mid+' '+high);
        if(ara[mid]>value){
            high=mid-1;
        }
        if(ara[mid]<value){
            low=mid+1;
        }
        if(ara[mid]==value){
            break;        
        }
    }
  //  console.log(mid);
    if(ara[mid]>value){
        return ara[mid];
    }else{
        if((mid+1)<ara.length){
            for(i=mid+1;i<ara.length;i++){
                if(ara[i]>value){
                return ara[i];
            }   
            }
            if(i==ara.length){
                return ara[0];
            }
        }
        else{
                 return ara[0];   
        }
    }
    
}
var nextGreatestLetter = function(letters, target) {
    var res = binarySearch(letters,target,0,letters.length-1);
  //  console.log(res);
    return res;
};