#include <stdio.h>

int main(void) {
  int dizi[2][2];
  dizi[0][0]=10;
  dizi[0][1]=5;
  dizi[1][0]=25;
  dizi[1][1]=45;

  printf("%d     %d",dizi[0][0],dizi[0][1]);
  printf("\n");
  printf("%d     %d",dizi[1][0],dizi[1][1]);
  return 0;
}