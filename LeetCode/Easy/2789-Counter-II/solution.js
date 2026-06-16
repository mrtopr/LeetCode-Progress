/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    var j = init;
    return {
        increment : function() {
            return ++j;
        },
        decrement : function() {
            return --j;
        },
        reset : function() {
            j = init;
            return j;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */