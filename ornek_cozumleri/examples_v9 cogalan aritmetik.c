/*#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

int i,l,a,b;
a=1;
b=5;
for(i=1;i<6;i++){

	if(i==1){
		while(a<b){
			printf()
		}
	}
	else if(i==2){
	}
	else if(i==3){
	}
	else if(i==4){
	}
	else{
	}

}

return 0;*/

#include <stdio.h>
#include <conio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5 ;j++)
printf("%3d",i*j+1);
printf("\n");
}
getch();
}
