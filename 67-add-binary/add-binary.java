import java.math.BigInteger;

class Solution {
    public static String addBinary(String a, String b) {
      BigInteger binToDecimal = BigInteger.ZERO;
      for (String binary : new String[]{a, b}) {
        for (int i = 0; i < binary.length(); i++) {
          if (binary.charAt(i) == '1') {
            binToDecimal = binToDecimal.add(BigInteger.valueOf(2).pow(binary.length() - 1 - i));                
          }
        }
      }
      String result = binToDecimal.toString(2);
      return result;
    }
}