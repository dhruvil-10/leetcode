/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
        let currentVal = init;
    
    return {
        increment: function() {
            currentVal += 1;
            return currentVal; // Returns a number
        },
        decrement: function() {
            currentVal -= 1;
            return currentVal; // Returns a number
        },
        reset: function() {
            currentVal = init;
            return currentVal; // Returns a number 
        }
    };
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */