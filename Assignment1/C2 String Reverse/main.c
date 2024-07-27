#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 100

int main(void)
{
  char a[MAXLEN];
  char b[MAXLEN];
  /* 
    Your codes here
  */
  
  reverseStr(a, b);
  printf("%s", b);
  return EXIT_SUCCESS;
}
void reverseStr(char str1[], char str2[]) {
  //把字符串str1倒序输出到str2中
  int strlength = strlen(str1);
  for (int i = 0; i < strlength; i++){
    
  }
}
