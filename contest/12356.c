#include <stdio.h>

int main() {
  int cantSold, numRep, min, max, i;
  scanf("%d %d", &cantSold, &numRep);
  printf("%d %d", cantSold, numRep);
  while(cantSold != 0 && numRep != 0) {
    int sold[cantSold];
    //printf("%i %i", cantSold, numRep);
    //creacion soldados
    /*for (i = 1; i <= cantSold; ++i) {
      sold[i-1] = i;
      //printf("%i ", sold[i-1]);
    }*/

    scanf("%d %d", cantSold, numRep); //last line
  }


  return 0;
}
