#include<stdio.h>

int x;;

void auto_depolama_sinifi(){
	
	printf("\nAuto sinifi calistiriliyor\n\n");
	
	auto int a = 32;
	
	printf("auto olarak tanimlanan 'a' degiskeninin degeri : %d\n",a);
	printf("---------------------------------");
	
}

void register_depolama_sinifi(){
	
	printf("\nRegister sinifi calistiriliyor\n\n");
	
	register char b = 'G';
	
	printf("register olarak tanimlanan b degiskeninin degeri : %c\n",b);
	printf("--------------------------------");
	
}

void extern_depolama_sinifi(){
	
	printf("\nExtern sinifi calistiriliyor\n\n");
	
	extern int x;
	
	printf("extern olarak tanimlanan 'x' degiskeninin degeri : %d\n",x);
	
	x=2;
	
	printf("extern olarak tanimlanan ve modifiye edilen 'x' degeri: %d\n",x);
	printf("--------------------------------");
	
}

void static_siniflandirma_sinifi(){
	
	int i=0;
	
	printf("\nstatic sinifi calistiriliyor\n");
	
	printf("\nDongu basladi : \n");
	
	for(i=1 ; i<5 ; i++){
		
		static int y = 5;
		
		int p = 10;
		
		y++;
		p++;
		
		printf("\nstatic tanimlanan 'y'nin %d. iterasyondaki degeri: %d\n",i,y);
		
		printf("\nstatic olmayan 'p' nin %d. iterasyondaki degeri: %d\n",i,p);

	}
	
	printf("\nDongu sona erdi: \n");
	
	printf("-------------------------------");
}

int main(){
	
	
	auto_depolama_sinifi();
	
	register_depolama_sinifi();
	
	extern_depolama_sinifi();
	
	static_siniflandirma_sinifi();
	
	return 0;
}
