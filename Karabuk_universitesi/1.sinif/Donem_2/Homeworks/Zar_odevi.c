/*
Bedirhan Kömürcü
2010206036
16 þubat 2022
00.37
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	
	srand(time(NULL));

    int zar,deneme,i;
    zar=(rand()%6+1)*2;
    
    printf("%d attiniz. \n",zar);
    
    if(zar==7 || zar==11){
    
        printf("Tebrikler, Kazandiniz.");
        return 0;
    
    }else if(zar==2 || zar==3 || zar==12){
    
        printf("Kaybettiniz... ");
        return 0;
        
    }else{
    
        printf("Zar degeriniz %d olarak belirlendi. \nSirayla atma islemi baslatiliyor... \n",zar);
        
        for(i=1;;i++){
        
            deneme=rand()%11+2;	//2-12
        
            printf("\n%d. denemede %d attiniz",i,deneme);
            
            if(deneme==7){
                printf(" ve 7 attiginiz icin kaybettiniz.");
                break;
            }
            else if(deneme==zar){
                printf(" ve zar degerinizi buldunuz.\nTebrikler, kazandiniz. ");
                break;
            }
            else{
                printf("\n");
            }
        }
    
    }


return 0;
}
