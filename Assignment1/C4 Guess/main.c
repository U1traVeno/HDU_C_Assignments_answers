#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int  magic;
  int  guess;
  int  counter = 0;
  srand(time(0));    //这是什么？也许你需要搜索一下rand()函数的具体用法。
  magic = rand() % 100 + 1;
  /*  
       
    Your codes here
       
  */
  guess = 0;
  printf("Random number generated!\n");
  while (guess != magic) {
    printf("Type the number you guess: ");
    counter += 1;
    scanf("%d", &guess);
    if (guess == magic) {break;}
    if (guess < magic) {
      printf("%d is too small.Try again.\n", guess);
    } else if (guess > magic) {
      printf("%d is too big.Try again.", guess);
    } else {
      printf("WTF did you do??");
    } 
      
  }
  printf("Right!\n");

  printf("counter = %d\n", counter);
  return EXIT_SUCCESS;
}
