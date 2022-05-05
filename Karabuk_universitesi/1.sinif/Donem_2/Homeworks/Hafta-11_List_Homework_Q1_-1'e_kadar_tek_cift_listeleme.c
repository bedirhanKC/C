/*
Bedirhan Kömürcü
05.05.2022
12.15
List Homework - Q1
*/

/*
Klavyeden -1 girilene kadar verilen tek sayıları tek bağlı doğrusal bir listenin başına
verilen çift sayıları ise listenin sonuna ekleyen programı yazınız.
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int sayi;
	struct node *next;
	
	
};

typedef struct node node;

int main(){
	
	
	int deger,TekSayisi=0,CiftSayisi=0; 
	node *thead,*p,*chead,*q;
	
	while(1){
		
		printf("Bir deger giriniz:");
		scanf("%d",&deger);
		
		if(deger == -1) break;
		
		if(deger%2!=0){ //Bu blokta tek sayıları başa ekleme işlemi gerçekleşir.
			
			if(TekSayisi==0){
			
				thead=(node*)malloc(sizeof(node));
				p=thead;
	
			}else{
			
				p->next=(node*)malloc(sizeof(node));
				p=p->next;			
			}
		
			p->sayi=deger;
			TekSayisi++;
			p->next=NULL;
						
		}else{ //Bu blokta da cift sayıları yeni bir liste gibi olusturma islemi gerçekleşir.
			
			if(CiftSayisi==0){
			
				chead=(node*)malloc(sizeof(node));
				q=chead;
	
			}else{
			
				q->next=(node*)malloc(sizeof(node));
				q=q->next;			
			}
		
			q->sayi=deger;
			CiftSayisi++;
			q->next=NULL;
					
		}
	
	}
	
	p->next=chead; // Bu satırda, tek sayılar listesinin sonuna cift sayilar listesi eklenmiş olur.
	
	p=thead;
	
	while(p!=NULL){ //Bu döngünün içerisinde de en son yazdırma işlemi gerçekleşir.
		
		printf("%d  ",p->sayi);
		
		p=p->next;
		
	}
	
return 0;	
}
