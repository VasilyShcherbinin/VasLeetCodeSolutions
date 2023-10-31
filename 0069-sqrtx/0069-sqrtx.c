int mySqrt(int x){
  if (x <= 1) {
    return x;
  }
  long sq = 0;
  long tempX = 0;
  while (x > tempX) {
    sq++;
    tempX = sq * sq;
    if (tempX > x) {
      return sq-1;
    }
  }
  return sq;
}

  // while (x >= tempX) {
  //   sq++;
  //   tempX = sq * sq;
  // }
  // return (int)sq-1;