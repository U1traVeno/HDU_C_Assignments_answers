#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  char ch = 0;
  int sum_other = 0; // other char
  int sum_space = 0; // space char ' '、'\t'
  int sum_enter = 0; // enter char '\n'
  printf("Please Enter the string (# to quit)\n"); // # to quit
  /*
    your codes here
  */
  ch = getchar(); //第一次写忘记这里，导致sum_other多一个最开始初始化的ch == 0
  while(ch != '#' && sum_other < 2147483646){
    if (ch == ' '){
      sum_space++;
    }
    else if(ch == '\n'){
      sum_enter++;
    }
    else{
      sum_other++;
    }
    ch = getchar();
  }
  
  printf("space = %d,enter = %d,other = %d\n", sum_space, sum_enter, sum_other);
  return EXIT_SUCCESS;
}
