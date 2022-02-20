#include<stdio.h>

int main(){
	
	char str1[100],str2[100],str3[300]="";
	int i,str1_uzunlugu=0;
	
	printf("Birinci diziyi giriniz:");
	gets(str1);
	
	printf("ikinci diziyi giriniz: ");
	gets(str2);
	
	for(i=0; str1[i] != '\0' ; i++){
		str1_uzunlugu++;
		str3[i]=str1[i];
	}
	

	for(i=0 ; str2[i] != '\0' ; i++){
		
		str3[str1_uzunlugu+i] = str2[i];
	}
	
	
	
	printf("\niki dizinin birlesimi : %s",str3);
	
	

return 0;}
