#include <stdio.h>

int main() {
	char isim[20];
	char soyisim[20];
	char yas[2];
	char sehir[15];
	char meslek[20];

	printf("----------Kullanıcı Kayıt Formu----------\n");
	printf("İsminizi Giriniz >>> ");
	scanf("%s",isim);
	printf("Soyisminizi Giriniz >>> ");
	scanf("%s",soyisim);
	printf("Yaşınızı Giriniz >>> ");
	scanf("%s",yas);
	printf("Oturduğunuz Şehiri Giriniz >>> ");
	scanf("%s",sehir);
	printf("Mesleğinizi Giriniz >>> ");
	scanf("%s",meslek);

	printf("----------Kayıtlı Kullanıcı Bilgileri----------\n");
	printf("İsminiz: %s",isim);
	printf("\nSoyisminiz: %s",soyisim);
	printf("\nYaşınız: %s",yas);
	printf("\nŞehriniz: %s",sehir);
	printf("\nMesleğiniz: %s",meslek);
	return 0;
}
