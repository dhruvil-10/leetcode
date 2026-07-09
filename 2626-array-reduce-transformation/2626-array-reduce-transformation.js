/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
        var curr ;

        if(!nums.length) return init;


      for(let i = 0  ; i < nums.length;i++)
      {
        curr = fn(init,nums[i]);
        init = curr;
      }

    return curr;
};