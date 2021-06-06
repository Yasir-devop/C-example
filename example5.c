#include <stdio.h>

int main(void) {
	//int tekRakamlar[]={1,3,5,7,9};
	//printf("%d",tekRakamlar[3]);

	//char sehirler[]={'a','n','k','a','r','a'};
	//printf("%s",sehirler);

	//int sayilar[4];
	//sayilar[0]=5;
	//sayilar[1]=15;
	//sayilar[2]=25;
	//sayilar[3]=35;
	//printf("%d",sayilar[2]);


	
	//int sayilarToplama[]={10,20,30,40,50,60,70,80,90,100};
	//int i;
	///int toplama=0;
	//for(i=0; i<10; i++){
	//	toplama=toplama+sayilarToplama[i];
	//}
	//printf("Elemanlar toplamı: %d",toplama);


	char sehir[3][30];
	int i,j;
	for (i=1; i<=3; i++){
		printf("%d'inci şehri giriniz: ",i);
		scanf("%s",sehir[i]);
	}

	for (j=1; j<=3; j++){
		printf("%s\n",sehir[j]);
	}
  return 0;
}