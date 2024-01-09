int hammingWeight(uint32_t n) {
    int counter = 0;
    for (int i = 0; i < 32; i++) {
        if ((n & 1) == 1) {
            counter++;
        }
        n = n >> 1; //will shift a numbers bits to the right by 1, aka 011011 would become 001101
    }
    return counter;
}