int strStr(char * haystack, char * needle) {
  char* idx = strstr(haystack,needle);
  if (idx) 
  {
    printf("%d", idx - haystack);
    return idx - haystack;
  } 
  else 
  {
    return -1;
  }
}