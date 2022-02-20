#include<stdio.h>

int main(){
	
	char cinsiyet;
	float boy;
	
	printf("Lutfen cinsiyetinizi giriniz[E/K]:");
	scanf("%c",&cinsiyet);
	
	printf("Lutfen boyunuzu cm cinsinden giriniz: ");
	scanf("%f",&boy);
	
	if((cinsiyet == 'e' || cinsiyet == 'E') && boy>160){
	
		printf("tebrikler, boy mulakatini gectiniz");}
	else if((cinsiyet == 'k'|| cinsiyet == 'K') && boy>155){
	
		printf("tebrikler, boy mulakatini gectiniz");
	}else{
		printf("boy mulakatini gecemediniz.");
	}
	
	return 0;
}
