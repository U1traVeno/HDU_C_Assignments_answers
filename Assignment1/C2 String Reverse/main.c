#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 100

void reverseStr(char str1[], char str2[]);

int main(void)
{
  char a[MAXLEN];
  char b[MAXLEN];
  /* 
    Your codes here
  */
  printf("Enter a string shorter than %d.(spaces are allowed):\n", MAXLEN);
  if (fgets(a, sizeof(a), stdin) != NULL && a[strlen(a)-1] == '\n') { //一开始记错了，用成fget().不是标准库函数，不好
    a[strlen(a)-1] = '\0';  //不要忘记字符串结束符！
    reverseStr(a, b);
    printf("%s", b);
  } else {
    printf("Invalid input.");
    getchar();
  }

  return EXIT_SUCCESS;
}
void reverseStr(char str1[], char str2[]) {
  //把字符串str1倒序输出到str2中
  size_t strlength = strlen(str1);
  for (int i = 0; i < strlength; i++){
    str2[strlength - i - 1] = str1[i];  //这里一开始忘记-i之后再减1，会导致数组越界。
  }
  str2[strlength] = '\0';  //这里一开始忘记添加结束符。一定要有结束符！否则会一直往后读取内存！
}
