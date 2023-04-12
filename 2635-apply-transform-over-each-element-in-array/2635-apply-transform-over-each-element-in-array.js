/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    var a=[];
    for(let i=0;i<arr.length;i++){
        a.push(fn(arr[i],i));
    }
    return a;
};