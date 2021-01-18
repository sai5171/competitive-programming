function countBoomerangs(arr) {
  const len = arr.length;
	return arr.reduce((preVal, curVal, idx, src) => {
    if (idx <= len - 3) {
      if (curVal == src[idx + 2] && curVal != src[idx + 1]) {
        preVal += 1;
      }
    }
    return preVal;
  }, 0);
}
