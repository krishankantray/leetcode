/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(numbers, target) {
    const map = {};

  for (let i = 0; i < numbers.length; i++) {
    const another = target - numbers[i];

    if (another in map) {
      return [map[another]+1, i+1];
    }

    map[numbers[i]] = i;
  }

  return null;    
};



