/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function  (fn) {
    let hasBeenCalled = false; // Tracks if the function was run
    
    return function(...args) {
        if (!hasBeenCalled) {
            hasBeenCalled = true; // Block future executions
            return fn(...args);   // Run the function and return its result
        }
        return undefined; // Explicitly return undefined on later calls
    }
}
/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
