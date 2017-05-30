/*UVA exercise 272 TeX Quotes*/
#include <stdio.h>

#define IN 1
#define OUT 0

int main () {
  int q, state, c;
  state = OUT;
  
  while ((c=getchar()) != EOF) {
    if (state == OUT && c == '\"') {
      printf("``");
      state = IN;
    }  else if (state == IN && c == '\"') {
      printf("''");
      state = OUT;
    } else {
      putchar(c);
    }
  }
  return 0;
}
