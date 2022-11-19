#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



void hosgeldinizFonksiyonu(){

	printf("***TOSUNOGLU BANK'A HOSGELDINIZ***\n\n\n");
}



int secimFonksiyonu(){

int secim;

	printf("Lutfen assagidaki seceneklerden birini seciniz...\n[1]GIRIS YAP     [2]KAYIT OL\n");
	scanf("%d",&secim);
	printf("\n");
	return secim;
}




int girisYapFonksiyonu(char kullaniciadi[200], char sifre[200]){

	char isimVeri[200];
	char sifreVeri[200];
	bool kontrol=false;

while(kontrol==false){


	printf("Lutfen kullanici adinizi giriniz:\n");
	scanf("%s",&isimVeri);
	printf("\n");
	printf("Lutfen sifrenizi giriniz:\n");
	scanf("%s",&sifreVeri);
	printf("\n");

	if(strcmp(isimVeri,kullaniciadi)==0&&strcmp(sifreVeri,sifre)==0){

		printf("Tebrikler basarili bir sekilde giris yaptiniz...\n");
		kontrol=true;

		}

	else{

		printf("Hatali giris yaptiniz. Lutfen tekrar deneyiniz...\n");
		kontrol=false;
	}

}

}



int kayitOlFonksiyonu(){

	char kullaniciadi[200];
	char sifre[200];


	printf("Lutfen bir kullanici adi belirleyiniz:\n");
	scanf("%s",&kullaniciadi);
	printf("\n");
	printf("Lutfen bir sifre belirleyiniz:\n");
	scanf("%s",&sifre);
	printf("\n");
	printf("Basarili bir sekilde kayit oldunuz..\n***Sisteme yonlendiriliyorsunuz***\n\n");

	girisYapFonksiyonu(kullaniciadi,sifre);
}


int paraYatirFonksiyonu(){
	
int paracek;
int parayatir;
int bakiye;
int islem;
bakiye=3000;

    printf("BAKIYENIZ=%d\n\n",bakiye);
		printf("Lutfen yatirmak istediginiz miktari giriniz:\n");
		scanf("%d",&parayatir);
		printf("\n");
    bakiye=bakiye+parayatir;
		printf("Para yatirma isleminiz basariyla gerceklesmistir..\n");
		printf("Guncel bakiye=%d\n\n",bakiye);
	
}


int paraCekFonksiyonu(){
	
int paracek;
int parayatir;
int bakiye;
int islem;
bakiye=3000;


    printf("BAKIYENIZ=%d\n\n",bakiye);
		printf("Lutfen cekmek istediginiz miktari giriniz:\n");
		scanf("%d",&paracek);
		printf("\n");



		while(paracek>bakiye){

		printf("Lutfen gecerli bir bakiye miktari giriniz!\n");
		printf("Lutfen cekmek istediginiz miktari giriniz:\n");
		scanf("%d",&paracek);
		printf("\n");


		}
		bakiye=bakiye-paracek;
		printf("Para cekme isleminiz basariyla gerceklesmitir..\n");
		printf("Guncel bakiyeniz=%d\n\n",bakiye);

}


int bakiyeFonksiyonu(){
	
int paracek;
int parayatir;
int bakiye;
int islem;
bakiye=3000;

	printf("BAKIYENIZ=%d",bakiye);
	printf("\n\n");
}


int cikisFonksiyonu(){
	
	printf("Cikis yapiliyor...");
	
	return 0;
}




int main() {

char kullaniciadi[200]="yusuf";
char sifre[200]="1453";
int paracek;
int parayatir;
int bakiye;
int islem;
bakiye=3000;
bool kontrol2=false;
int baskaislem;
int i;
i=0;


hosgeldinizFonksiyonu();

int secim=secimFonksiyonu();


if(secim==1){

	girisYapFonksiyonu(kullaniciadi,sifre);

}

else if(secim==2){

	kayitOlFonksiyonu();

}




while(kontrol2==false&&i==0){


printf("Lutfen yapmak istediginiz islemi seciniz:\n\n[1]PARA YATIR\n[2]PARA CEK\n[3]BAKIYE SORGULA\n[4]CIKIS\n\n");
scanf("%d",&islem);

if(islem==1){

	paraYatirFonksiyonu();

kontrol2=false;
i++;

printf("Baska islem yapmak ister misiniz?\n");
printf("[1]EVET\n[2]HAYIR\n");
scanf("%d",&baskaislem);
printf("\n\n\n");

if(baskaislem==1){
	
	i--;
	kontrol2=false;
}

else if(baskaislem==2){
	
	printf("Cikis yapiliyor...\n");
	
	return 0;
}


}

else if(islem==2){

	paraCekFonksiyonu();

i++;

printf("Baska islem yapmak ister misiniz?\n");
printf("[1]EVET\n[2]HAYIR\n");
scanf("%d",&baskaislem);
printf("\n\n\n");

if(baskaislem==1){

	i--;
	kontrol2=false;
}

else if(baskaislem==2){

	printf("Cikis yapiliyor...\n");

	return 0;
}


kontrol2=false;

}

else if(islem==3){

	bakiyeFonksiyonu();


i++;

printf("Baska islem yapmak ister misiniz?\n");
printf("[1]EVET\n[2]HAYIR\n");
scanf("%d",&baskaislem);
printf("\n\n\n");

if(baskaislem==1){

	i--;
	kontrol2=false;
}

else if(baskaislem==2){

	printf("Cikis yapiliyor...\n");

	return 0;
}


kontrol2=false;

}

else if(islem==4){

	cikisFonksiyonu();

kontrol2=true;

}

}




	getch(0);
	return 0;
}
