/*
Bedirhan K�m�rc�
05.05.2022
22.30
List Homework - Q2
*/

/*
Bir ba�l� do�rusal listelerde listenin sonundaki d���m� keserek listenin ba��na ekleyen ve olu�an listenin
son halini geri d�nd�ren prototipi a�a��da verilmi� fonksiyonu yaz�n�z.
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int number;
	struct node *next;
		
};


typedef struct node node;


node* cutlastaddhead(node* head){
	
	node *p,*q;
	
	p=head;
	q=p->next;
	
	
	while(q->next!=NULL){
		
		q=q->next; //q son eleman olana kadar d�ng� devam ediyor.
		p=p->next; //p son elemandan �nceki eleman olana kadar d�ng� devam ediyor.
		
	}
	
	p->next=NULL;
	q->next=head;
	head=q; // bu 3 i�lemde son d���m en ba�a gelerek head olur.
	
	return head;
}

int main(){
	
	
	int deger,SayiSayisi=0; 
	node *head,*p;
	
	while(1){ //bu d�ng�n�n i�inde, -1 girilene kadar listenin elemanlar�n� al�yorum
			  // listeyi b�yle almak istedim
		
		printf("Bir deger giriniz:");
		scanf("%d",&deger);
		
		if(deger == -1) break;
			
		if(SayiSayisi==0){
	
			head=(node*)malloc(sizeof(node));
			p=head;
	
		}else{
		
			p->next=(node*)malloc(sizeof(node));
			p=p->next;			
		}
	
		p->number=deger;
		SayiSayisi++;
		p->next=NULL;
			
	}
	
	head=cutlastaddhead(head); // burda fonksiyona headi g�nderip de�i�ikli�i ger�ekle�tiriyorum.
	
	p=head;
	
	while(p!=NULL){ //Bu d�ng�n�n i�erisinde de en son yazd�rma i�lemi ger�ekle�ir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
