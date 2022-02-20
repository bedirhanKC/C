#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

int birthday,birthmonth,birthyear,day,month,year,x,yas,a;

menu:printf("doðum yýlýnýzý giriniz: ");
scanf("%d",&birthyear);
	if(birthyear<=0 || birthyear>2021){
		printf("\nyanlýþ yýl giriþi yaptýnýz, tekrar yýl seçimine yönlendiriliyorsunuz\n\n");
		goto menu;}
	
menu2:printf("doðum ayýnýzý giriniz: ");
scanf("%d",&birthmonth);
	if((birthmonth<=0 || birthmonth>12) || (birthyear==2021 && birthmonth>10)){
		printf("\nyanlýþ giriþ yaptýnýz, tekrar ay seçimine yönlendiriliyorsunuz\n\n");
		goto menu2;}
		
menu3:printf("doðum gününüzü giriniz: ");
scanf("%d",&birthday);
	if(((birthmonth==2 && birthyear%4==0) && (birthday>29 || birthday<1)) || ((birthmonth==2 && birthyear%4!=0) && (birthday>28 || birthday<1))){
		printf("\nyanlýþ giriþ yaptýnýz, tekrar gün seçimine yönlendiriliyorsunuz\n\n");
		goto menu3;
	}else if((birthmonth==4 || birthmonth==6 || birthmonth==9 || birthmonth==11) && (birthday>30 || birthday<1)){
		printf("\nyanlýþ giriþ yaptýnýz, tekrar gün seçimine yönlendiriliyorsunuz.\n\n");
		goto menu3;
	}else if((birthmonth==1 || birthmonth==3 || birthmonth==5 || birthmonth==7 || birthmonth==8 || birthmonth==10 || birthmonth==12) && (birthday>31 || birthday<1)){
		printf("\nyanlýþ giriþ yaptýnýz, tekrar gün seçimine yönlendiriliyorsunuz.\n\n");
		goto menu3;
	}else if((birthyear==2021 && birthmonth==10 && birthday>23)){
		printf("\nyanlýþ giriþ yaptýnýz, tekrar gün seçimine yönlendiriliyorsunuz.\n\n");
		goto menu3;
	}
	
printf("\n");
printf("doðum tarihiniz: %d.%d.%d",birthday,birthmonth,birthyear);
printf("\n\n");

printf("Hesaplamak istediðiniz tarihi bugün olarak belirlemek istiyorsanýz 5'e basýn.\naksi bir tuþ iþlemi devam ettirecektir.");
scanf("%d",&a);
	if(a==5){
		year=2021;
		month=10;
		day=24;
		printf("\nbugünün tarihi: %d.%d.%d\n\n",day,month,year);

		goto menu7;
	}

menu4:printf("Hesaplanýlacak yýlý giriniz: ");
scanf("%d",&year);
	if(year<birthyear){
		printf("\nyanlýþ yýl giriþi yaptýnýz, tekrar yýl seçimine yönlendiriliyorsunuz\n\n");	
		goto menu4;}
	
menu5:printf("Hesaplanýcak ayý giriniz: ");
scanf("%d",&month);	
	if((month<=0 || month>12) || (year==birthyear && birthmonth>month)){
		printf("\nyanlýþ giriþ yaptýnýz, tekrar ay seçimine yönlendiriliyorsunuz\n\n");
		goto menu5;}
		
menu6:printf("Hesaplanýcak günü giriniz: ");
scanf("%d",&day);
	if(((month==2 && year%4==0) && (day>29 || day<1)) || ((month==2 && year%4!=0) && (day>28 || day<1))){
		printf("\nyanlýþ giriþ yaptýnýz, tekrar gün seçimine yönlendiriliyorsunuz\n\n");
		goto menu6;
	}else if((month==4 ||month==6 || month==9 || month==11) && (day>30 || day<1)){
		printf("\nyanlýþ giriþ yaptýnýz, tekrar gün seçimine yönlendiriliyorsunuz.\n\n");
		goto menu6;
	}else if((month==1 || month==3 || month==5 ||month==7 || month==8 || month==10 || month==12) && (day>31 ||day<1)){
		printf("\nyanlýþ giriþ yaptýnýz, tekrar gün seçimine yönlendiriliyorsunuz.\n\n");
		goto menu6;
	}else if((year==birthyear && month==birthmonth && birthday>=day)){
		printf("\nyanlýþ giriþ yaptýnýz, tekrar gün seçimine yönlendiriliyorsunuz.\n\n");
		goto menu6;
	}
	
printf("\n");
printf("girdiðiniz tarihiniz: %d.%d.%d",day,month,year);
printf("\n\n");
menu7:
yas=year-birthyear;

if((month<birthmonth) || (month==birthmonth && day<birthday)){	
	yas=yas-1;
	printf("%d yaþýný doldurdunuz.",yas);}
else{
	printf("%d yaþýný doldurdunuz.",yas);
}
	


	printf("\n\ntekrar doðum tarihi seçmek için 9'a\ntekrar tarih belirlemek için 5'e basýn\naksi bir tuþ çýkýþa yönlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){		
	printf("\n");
	goto menu;
	}else if(x==5){
	printf("\n");
	goto menu4;
	}else{}
return 0;}


