/*
Bedirhan Kömürcü
05.05.2022
12.15
List Homework - Q1
*/

/*
Klavyeden -1 girilene kadar verilen tek sayýlarý tek baðlý doðrusal bir listenin baþýna
verilen çift sayýlarý ise listenin sonuna ekleyen programý yazýnýz.
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int number;
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
		
		if(deger%2!=0){ //Bu blokta tek sayýlarý baþa ekleme iþlemi gerçekleþir.
			
			if(TekSayisi==0){
			
				thead=(node*)malloc(sizeof(node));
				p=thead;
	
			}else{
			
				p->next=(node*)malloc(sizeof(node));
				p=p->next;			
			}
		
			p->number=deger;
			TekSayisi++;
			p->next=NULL;
						
		}else{ //Bu blokta da cift sayýlarý yeni bir liste gibi olusturma islemi gerçekleþir.
			
			if(CiftSayisi==0){
			
				chead=(node*)malloc(sizeof(node));
				q=chead;
	
			}else{
			
				q->next=(node*)malloc(sizeof(node));
				q=q->next;			
			}
		
			q->number=deger;
			CiftSayisi++;
			q->next=NULL;
					
		}
	
	}
	
	p->next=chead; // Bu satýrda, tek sayýlar listesinin sonuna cift sayilar listesi eklenmiþ olur.
	
	p=thead;
	
	while(p!=NULL){ //Bu döngünün içerisinde de en son yazdýrma iþlemi gerçekleþir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
