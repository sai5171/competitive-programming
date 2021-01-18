function sevenBoom(arr) {
	return arr.some(each => new RegExp(/7/).test(each)) ? "Boom!" : "there is no 7 in the array";
}
