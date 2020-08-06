var findDuplicates = function (nums) {
  let arr = nums.slice().sort();
  let results = [];

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === arr[i + 1]) {
      results.push(arr[i]);
    }
  }

  return results;
};
