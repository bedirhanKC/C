/*
Bedirhan Kömürcü
16 þubat 2022
Lab dersi
*/

#include<stdio.h>

void fonk();
void fonk_sta();

int main(){

	fonk();
	fonk_sta();
	
	
	printf("\n");
	
	
	fonk();
	fonk_sta();
	

return 0;
}

void fonk(){
	
	int id=1;
	
	printf("fonk() id degisken degeri : %d \n",id);
	
	id = id + 32;
	
	printf("fonk() id degisken degeri : %d \n",id);
}

void fonk_sta(){
	
	static int id=1;
	
	printf("fonk_sta() id degisken degeri : %d \n",id);
	
	id = id + 21;
	
	printf("fonk_sta() id degisken degeri : %d \n",id);
}
