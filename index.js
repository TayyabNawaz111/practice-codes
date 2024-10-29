// JavaScript source code

const _ = require("lodash");
const arr1 = [1, 2, 3, 4, 5, 6, 6, 6, 5, 6, 7];
const arr2 = [2, 4, 6, 8, 10];

// console.log(_.chunk(arr1, 3));
// console.log(_.uniq(arr1));
// console.log(_.intersection(arr1, arr2));
// console.log(_.clone(arr2));
// console.log(_.map(arr1));
//console.log(_.filter(arr1, n => n > 4));
//console.log(_.map(arr1, n => n * 2));
//console.log(_.reduce(arr1, (sum, n) => sum + n, 0));
//console.log(_.find(arr1, n => n > 5));
//console.log(_.every(arr1, n => n < 10));
//console.log(_.some(arr1, n => n > 5));
//console.log(_.sortBy(arr1));
//console.log(_.reverse([...arr1]));
//console.log(_.take(arr1, 3));
//console.log(_.drop(arr1, 3));
//console.log(_.join(arr1, ', '));
//console.log(_.flatten([arr1, arr2]));
//console.log(_.fill(Array(5), 0));
//console.log(_.compact([0, 1, false, 2, '', 3]));
const { add, mul, sub } = require("./functions");
console.log(add(1, 2))