#include<stdio.h>

enum day{sunday=1,tuesday,wednesday,thursday,friday,saturday};

int main(){
	enum day d=thursday;
	printf("%d",d);
	
	return 0;
}
