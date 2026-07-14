/**
 * @param {string[]} list1
 * @param {string[]} list2
 * @return {string[]}
 */
var findRestaurant = function(list1, list2) {
    // Map to store elements of list1 and their index
    const indexMap = new Map();
    for (let i = 0; i < list1.length; i++) {
        indexMap.set(list1[i], i);
    }
    
    let minSum = Infinity;
    let result = [];
    
    // Check list2 for common elements
    for (let j = 0; j < list2.length; j++) {
        const restaurant = list2[j];
        
        if (indexMap.has(restaurant)) {
            const i = indexMap.get(restaurant);
            const currentSum = i + j;
            
            // Found a smaller index sum: clear old results and update minSum
            if (currentSum < minSum) {
                minSum = currentSum;
                result = [restaurant];
            } 
            // Found a tie: add to results
            else if (currentSum === minSum) {
                result.push(restaurant);
            }
        }
    }
    
    return result;
};
