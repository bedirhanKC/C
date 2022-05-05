/*
Bedirhan Kömürcü
05.05.2022
21.08
List Homework - Q2
*/

/*
Bir bağlı doğrusal listelerde listenin sonundaki düğümü keserek listenin başına ekleyen ve
oluşan listenin son halini geri döndüren prototipi aşağıda verilmiş fonksiyonu yazınız
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
	
	q->next=head->next; 
	head->next=NULL;
	p->next=head;
	head=q;  // burdaki 4 işlemde ise listenin ilk ve son düğümleri yer değiştiriliyor.
	
	return head;
}

int main(){
	
	
	int deger,SayiSayisi=0; 
	node *head,*p;
	
	while(1){ //bu döngünün içinde, -1 girilene kadar listenin elemanlarını alıyorum
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
	
	head=cutlastaddhead(head); // burda fonksiyona headi gönderip değişikliği gerçekleştiriyorum.
	
	p=head;
	
	while(p!=NULL){ //Bu döngünün içerisinde de en son yazdırma işlemi gerçekleşir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
