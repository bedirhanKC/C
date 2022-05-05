/*
Bedirhan Kömürcü
05.05.2022
21.40
List Homework - Q3
*/

/*
Bir bağlı doğrusal listelerde listenin ortasında yer alan elemanı silen (tuttuğu alanı belleğe geri iade eden)
bir fonksiyon yazınız (Liste 100 ya da 101 elemanlı ise 50. elamanı silecek şekilde). Fonksiyon parametre
olarak bir liste alıp güncellenen listeyi geri döndürecektir.
*/

#include<stdio.h>
#include<stdlib.h>

struct node{ 
	
	int number;
	struct node *next;
		
};


typedef struct node node;


node* ortadakiElemaniSilme(node* head){
	
	node *p,*q;
	
	p=head; //ilk düğüm
	q=p->next; //ikinci düğüm
	
	if(p==NULL || q==NULL){ //burda düğüm sayisi 3'den az olup olmadığı kontrol ediliyor
		
		printf("Eleman sayisi 3'den az oldugu icin islem gerceklestirilemiyor.");
		return NULL;
		
	}
	
	int SayiSayisi=0;
	
	while(p!=NULL){ // bu döngünün içersinde toplam sayi sayisi bulunuyor.
		
		SayiSayisi++;
		
		p=p->next;
		
	}
	
	int i;
	p=head;
										
											// | p | -> | q | -> | q->next |
											//         ortanca
					
					
	for(i=1;i<(SayiSayisi-1)/2;i++){ // q ortanca eleman olacağı için ve ikinci
									// düğüm olarak başladığı için; i, 0'dan değil 1'den başlıyor.
		p=p->next;
		q=q->next;
		
	}
	
	p->next=q->next; //bu aşamadan ortanca eleman listeden çıkarılacak şekilde önceki düğüm ile sonraki düğüm bağlanıyor.
	free(q); // ortanca eleman belleğe iade ediliyor.
	
	
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
	
	head=ortadakiElemaniSilme(head); // burda fonksiyona headi gönderip değişikliği gerçekleştiriyorum.
	
	p=head;
	
	while(p!=NULL){ //Bu döngünün içerisinde de en son yazdırma işlemi gerçekleşir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
