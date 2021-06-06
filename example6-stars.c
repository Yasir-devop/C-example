#include <stdio.h>

int main(void) {
  int i,j,stars;
  printf("Kaç basamak istersiniz: ");
  scanf("%d",&stars);
  for(i=1; i<=stars;i++){
	  for(j=1;j<=i;j++){
		  printf("*");
	  }
	  printf("\n");
  }
  return 0;
}