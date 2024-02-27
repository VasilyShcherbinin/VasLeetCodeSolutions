int firstUniqChar(char* s) {
    int i, j;
    char letter;
    for (i = 0; i < strlen(s); i++) {
        int foundDuplicate = 0;
        letter = s[i];
        for (j = i + 1; j < strlen(s); j++) {
            if (letter == s[j]) {
                foundDuplicate = 1;
                break;
            }
        }
        if (!foundDuplicate) {
            // Check if the character is unique by iterating again from the beginning
            int k;
            for (k = 0; k < strlen(s); k++) {
                if (k != i && letter == s[k]) {
                    foundDuplicate = 1;
                    break;
                }
            }
            if (!foundDuplicate) {
                return i; // Found the first unique character, return its index
            }
        }
    }
    return -1; // No unique character found
}