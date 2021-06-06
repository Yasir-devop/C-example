#include <stdio.h>

int main(void) {
  int matris[5][5]={2,0,2,0,0,0,1,0,0,0,3,0,6,0,0,0,4,0,1,0,0,0,0,7,1};
  int i,j;
  for(i=0; i<5; i++){
	  for(j=0; j<5; j++){
		  printf("%d   ",matris[i][j]);
	  }
	  printf("\n");
  }
  return 0;
}