/*
Bedirhan K�m�rc�
05.05.2022
21.08
List Homework - Q8
*/

/*
Bir ba�l� do�rusal listelerde listenin sonundaki d���m ile ba��ndaki d���m�n yerini de�i�tiren 
changeFirstAndLast isimli bir fonksiyon yaz�n�z. Fonksiyon parametre olarak bir liste al�p g�ncellenen 
listeyi geri d�nd�recektir.
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int number;
	struct node *next;
		
};


typedef struct node node;


node* changeFirstAndLast(node* head){
	
	node *p,*q;
	
	p=head;
	q=p->next;
	
	
	while(q->next!=NULL){
		
		q=q->next; //q son eleman olana kadar d�ng� devam ediyor.
		p=p->next; //p son elemandan �nceki eleman olana kadar d�ng� devam ediyor.
		
	}
	
	q->next=head->next; 
	head->next=NULL;
	p->next=head;
	head=q;  // burdaki 4 i�lemde ise listenin ilk ve son d���mleri yer de�i�tiriliyor.
	
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
	
	head=changeFirstAndLast(head); // burda fonksiyona headi g�nderip de�i�ikli�i ger�ekle�tiriyorum.
	
	p=head;
	
	printf("\n");
	
	while(p!=NULL){ //Bu d�ng�n�n i�erisinde de en son yazd�rma i�lemi ger�ekle�ir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
