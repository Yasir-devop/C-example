#include <stdio.h>

int main(void) {
  int sayi;
  int birler,onlar,yuzler;
  printf("Üç basamaklı Sayı giriniz: ");
  scanf("%d",&sayi);

  yuzler=sayi/100;
  onlar=(sayi/10)%10;
  birler=sayi%10;

  printf("%d\n",yuzler);
  printf("%d\n",onlar);
  printf("%d\n",birler);



  
  return 0;
}