/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {

    let answer = [];

    for(let i = 0 , j = 0  ; i < parseInt(arr.length/size) ; i++ , j += size)
    {
        answer.push(arr.slice(j,j+size));
    }

    if(Number.isInteger(arr.length/size)) return answer;
    
        const point = parseInt(arr.length/size)*size;
        answer.push(arr.slice(point,arr.length))
        return answer;

    
};
