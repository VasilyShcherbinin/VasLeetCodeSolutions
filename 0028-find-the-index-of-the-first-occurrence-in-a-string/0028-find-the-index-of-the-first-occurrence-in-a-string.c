int strStr(char * haystack, char * needle) {
  char* idx = strstr(haystack,needle);
  if (idx) {
    printf("%d", idx - haystack);
    return idx - haystack;
  } 
  else {
    return -1;
  }
  // Would put this in an else, but having this outside of else is faster.
  // return -1;
}