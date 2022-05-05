/*
Bedirhan Kömürcü
05.05.2022
22.30
List Homework - Q2
*/

/*
Bir baðlý doðrusal listelerde listenin sonundaki düðümü keserek listenin baþýna ekleyen ve oluþan listenin
son halini geri döndüren prototipi aþaðýda verilmiþ fonksiyonu yazýnýz.
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
		
		q=q->next; //q son eleman olana kadar döngü devam ediyor.
		p=p->next; //p son elemandan önceki eleman olana kadar döngü devam ediyor.
		
	}
	
	p->next=NULL;
	q->next=head;
	head=q; // bu 3 iþlemde son düðüm en baþa gelerek head olur.
	
	return head;
}

int main(){
	
	
	int deger,SayiSayisi=0; 
	node *head,*p;
	
	while(1){ //bu döngünün içinde, -1 girilene kadar listenin elemanlarýný alýyorum
			  // listeyi böyle almak istedim
		
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
	
	head=cutlastaddhead(head); // burda fonksiyona headi gönderip deðiþikliði gerçekleþtiriyorum.
	
	p=head;
	
	while(p!=NULL){ //Bu döngünün içerisinde de en son yazdýrma iþlemi gerçekleþir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
