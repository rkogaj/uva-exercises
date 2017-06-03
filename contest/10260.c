#include <cstdio>

/*SOUNDEX*/

int main() {
  char c, temp;
  temp = 'a';
  while ((c = getchar()) != EOF) {
      if (c == '\n') { //newline
        printf("\n");
      } else if (c == 'B' || c == 'F' || c == 'P' || c == 'V') {
        if (!(temp == 'B' || temp == 'F' || temp == 'P' || temp == 'V'))
          printf("%d", 1);
      } else if (c == 'C' || c == 'G' || c == 'J' || c == 'K' || c == 'Q'  || c == 'S' || c == 'X' || c == 'Z') {
        if (!(temp == 'C' || temp == 'G' || temp == 'J' || temp == 'K' || temp == 'Q' || temp == 'S' || temp == 'X' || temp == 'Z'))
          printf("%d", 2);
     } else if (c == 'D' || c == 'T') {
       if (!(temp == 'D' || temp == 'T'))
        printf ("%d", 3);
     } else if (c == 'L') {
       if (!(temp == 'L'))
        printf("%d", 4);
     }  else if (c == 'M' || c == 'N') {
       if (!(temp == 'M' || temp == 'N'))
       printf("%d", 5);
     } else if (c == 'R') {
       if (!(temp == 'R'))
       printf("%d", 6);
     }
     temp = c;
  }
  return 0;
}
