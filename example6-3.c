#include <stdio.h>

int main(void) {
  int satir,sutun;
  int i,j;
  printf("---------- Veri Girme ----------\n");

  printf("Satır sayısı giriniz >> ");
  scanf("%d",&satir);
  printf("Sütün sayısı giriniz >> ");
  scanf("%d",&sutun);

  int matris[satir][sutun];
  for(i=0; i<satir; i++){
	  for(j=0; j<sutun; j++){
		  printf("[%d][%d] >> ",i,j);
		  scanf("%d",&matris[i][j]);
	  }
  }

  printf("\n---------- Veri Yazdırma ----------\n");
  for(i=0; i<satir; i++){
	  for(j=0; j<sutun; j++){
		  printf("%d   ",matris[i][j]);
	  }
	  printf("\n");
  }



  return 0;
}