#include <stdio.h>

int main(void) {
  int m1[2][2]={5,7,8,3};
  int m2[2][2]={8,5,7,3};
  int m3[2][2]={3,6,8,5};

  int i,j;
  int toplam[2][2];
  for(i=0; i<2; i++){
	  for(j=0; j<2; j++){
		toplam[i][j]= m1[i][j] + m2[i][j] + m3[i][j];
	  }
  }

  for(i=0; i<2; i++){
	  for(j=0; j<2; j++){
		  printf("[%d]",toplam[i][j]);
	  }
	  printf("\n");
  }

  

  return 0;
}