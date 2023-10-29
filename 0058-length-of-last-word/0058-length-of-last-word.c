#include <string.h>
int lengthOfLastWord(char * s) {

  char *delim = " ";
  char *token;
  char *lastToken;
   
  /* get the first token */
  token = strtok(s, delim);
  
  /* walk through other tokens */
  while( token != NULL ) {
    lastToken = token;
    token = strtok(NULL, delim);
  }
   
  return strlen(lastToken);
}