#include <stdio.h>

#define MAX 10000

struct Soldado {
  int x;
  //next node
  struct Soldado* next;
};

int main() {
  //first iteration

  int numSol, numRep, i, j;
  //scanf("%i %d", &numSol, &numRep);
  numSol = 10;
  numRep = 1;
  while (numSol != 0 && numRep != 0) {
    int temp;
    for (i = 0; i <= numSol; i++){
      struct Soldado s;
      s.x = i+1;
      temp = s.x;
      printf("%d", temp);
      if (i != numSol) {
        temp = i + 1;
        s.next = new Soldado;
      } else {
        s.next = NULL;
      }
    }
    /*
    int first, last, pair;
    first = arr_sol[1]->x;
    pair = arr_sol[2]->x;
    last = arr_sol[numSol]->x;
    //report

    for (i = 1; i <= numRep; i++) {
      int left, right;
      //scanf
      scanf("%d %d", &left, &right);
      //rem
      for (j = left; j <= right; j++){
        arr_sol[j]->x = 0;
      }
      if (left > 1) {
        pair = arr_sol[right+1]->x;
      }
      //ans

    }*/

    //new report
    //scanf("%d %d", &numSol, &numRep);
    numSol = 0;
    numRep = 0;
  }

  return 0;
}
