int reverse(int x){
  int reverseInt = 0;
  int remainder = 0;
  int sign = 1;

  if (x <= INT_MIN || x >= INT_MAX) {
    return 0;
  }

  if (x < 0)
  {
    sign = -1;
    x = abs(x);
  }

  while (x != 0) {
    remainder = x % 10;
    if (reverseInt > INT_MAX / 10 || (reverseInt == INT_MAX / 10 && remainder > 7))
    {
      return 0;
    }
    reverseInt = reverseInt * 10 + remainder;
    x = x / 10;
  }

  reverseInt = sign * reverseInt;
  
  return reverseInt;
}