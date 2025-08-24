class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int counter = 0;
        for (char stone : jewels.toCharArray( ))
        {
            for (char c : stones.toCharArray( ) )
            {
                if (stone == c)
                {
                    counter++;
                }
            }
        }
        return counter;
    }
}