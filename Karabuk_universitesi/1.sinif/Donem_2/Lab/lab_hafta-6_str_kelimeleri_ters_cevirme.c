/*
Bedirhan Kömürcü
17.03.2022
hafta 6
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "i love programming language course";
	char*pstr=str;
	
	int uzunluk = strlen(str);
	int i;
	
	for (i = uzunluk-1; i >= 0; i--) {
		
		if (str[i] == ' ') {
			
			str[i] = '\0';
			printf("%s ", pstr+i+1);
			
		}
	}
	
	printf("%s", str);
	
	return 0;
}
