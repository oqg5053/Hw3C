// Author: Ojas Gupta oqg5053@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int digit_sum(int n) {
  if (n==0){
    return 0;
  }
  else{
    return digit_sum(n/10) + n%10;
  }
}

int main(void) {
  char *numberstr = readline("Enter an int: ");
  int number =atoi(numberstr);

  printf("sum of digits of %d is %d.\n",number, digit_sum(number));
  return 0;
}