/*
Bedirhan Kömürcü
16 þubat 2022
Lab dersi
*/

#include<stdio.h>
#include<time.h>

int main(){

	clock_t start_t, end_t;
	register int id1, id2; //register'in önemini anlamak icin, normal int degiskeni ile denenmelidir.
	
	start_t = clock();
	
	for(id1=0 ; id1<200000000 ; id1++){
		
		for(id2=0 ; id2<100 ; id2++){
		}
		
	}

	end_t = clock();
	
	printf("start_t degeri : %lu\n",start_t);
	printf("end_t degeri : %lu\n",end_t);
	printf("dongu calisma suresi(saniye) : %.3f",(double)(end_t-start_t) / CLOCKS_PER_SEC);
	

return 0;
}
