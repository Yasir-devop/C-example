#include <stdio.h>

int main(void) {
	int su,kola,misir,bilet,toplam;
	printf("----------Sinama Ücretlendirme Ekranı----------\n");

	printf("Mısır adedi: ");
	scanf("%d",&misir);

	printf("Kola adedi: ");
	scanf("%d",&kola);

	printf("Su adedi: ");
	scanf("%d",&su);

	printf("Bilet adedi: ");
	scanf("%d",&bilet);


	toplam = (misir*2)+(kola*2)+(su*1)+(bilet*8);


	printf("----------Sipariş Fişi----------\n");
	printf("Mısır: %d TL",misir*2);
	printf("\nKola: %d TL",kola*2);
	printf("\nSu: %d TL",su*1);
	printf("\nBilet: %d TL",bilet*8);
	printf("\nToplam Ücretiniz: %d TL'dir \nİyi seyiler Dileriz!",toplam);



  return 0;
}
