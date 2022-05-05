/*
Bedirhan K�m�rc�
05.05.2022
22.41
List Homework - Q5
*/

/*
Bir ba�l� do�rusal listelerde listenin ba��ndaki d���m� keserek listenin sonuna ekleyen ve olu�an listenin
son halini geri d�nd�ren prototipi a�a��da verilmi� fonksiyonu yaz�n�z.
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int number;
	struct node *next;
		
};


typedef struct node node;


node* cutheadaddlast(node* head){
	
	node *p,*q;
	
	p=head;
	q=head;
	
	while(p->next!=NULL){

		p=p->next; //p son eleman olana kadar d�ng� devam ediyor.
		
	}
	
	p->next=q;
	head=q->next;
	q->next=NULL; // bu 3 i�lemde ilk d���m en sona gelir.
	
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
	
	head=cutheadaddlast(head); // burda fonksiyona headi g�nderip de�i�ikli�i ger�ekle�tiriyorum.
	
	p=head;
	
	while(p!=NULL){ //Bu d�ng�n�n i�erisinde de en son yazd�rma i�lemi ger�ekle�ir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
