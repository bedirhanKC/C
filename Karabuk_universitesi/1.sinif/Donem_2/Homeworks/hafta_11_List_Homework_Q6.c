/*
Bedirhan K�m�rc�
05.05.2022
22.50
List Homework - Q6
*/

/*
Klavyeden -1 girilene kadar verilen �ift say�lar� tek ba�l� do�rusal bir listenin ba��na
verilen tek say�lar� ise listenin sonuna ekleyen program� yaz�n�z.
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
		
		if(deger%2!=0){ //Bu blokta tek say�lar ile liste olu�turma i�lemi ger�ekle�ir.
			
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
						
		}else{ //Bu blokta da cift say�lar� yeni bir liste gibi olusturma islemi ger�ekle�ir.
			
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
	
	q->next=thead; // Bu sat�rda, cift say�lar listesinin sonuna tek sayilar listesi eklenmi� olur.
	
	p=chead;
	
	while(p!=NULL){ //Bu d�ng�n�n i�erisinde de en son yazd�rma i�lemi ger�ekle�ir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
