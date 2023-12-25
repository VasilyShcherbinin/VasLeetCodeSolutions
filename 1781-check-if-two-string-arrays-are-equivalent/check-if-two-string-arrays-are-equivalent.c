bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) 
{
    char * string1 = malloc(10000);
    char * string2 = malloc(10000);
    strcpy(string1, "");
    strcpy(string2, "");

    for (int i = 0; i < word1Size; i++)
    {
      strcat(string1, word1[i]);
    }
    for (int i = 0; i < word2Size; i++)
    {
      strcat(string2, word2[i]);
    }
    int result = strcmp(string1, string2);
    free(string1);
    free(string2);
    
    return result == 0;
}