/*
Bedirhan Kömürcü
05.05.2022
21.40
List Homework - Q3
*/

/*
Bir baðlý doðrusal listelerde listenin ortasýnda yer alan elemaný silen (tuttuðu alaný belleðe geri iade eden)
bir fonksiyon yazýnýz (Liste 100 ya da 101 elemanlý ise 50. elamaný silecek þekilde). Fonksiyon parametre
olarak bir liste alýp güncellenen listeyi geri döndürecektir.
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
	
	p=head; //ilk düðüm
	q=p->next; //ikinci düðüm
	
	if(p==NULL || q==NULL){ //burda düðüm sayisi 3'den az olup olmadýðý kontrol ediliyor
		
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
					
					
	for(i=1;i<(SayiSayisi-1)/2;i++){ // q ortanca eleman olacaðý için ve ikinci
									// düðüm olarak baþladýðý için; i, 0'dan deðil 1'den baþlýyor.
		p=p->next;
		q=q->next;
		
	}
	
	p->next=q->next; //bu aþamadan ortanca eleman listeden çýkarýlacak þekilde önceki düðüm ile sonraki düðüm baðlanýyor.
	free(q); // ortanca eleman belleðe iade ediliyor.
	
	
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
	
	head=ortadakiElemaniSilme(head); // burda fonksiyona headi gönderip deðiþikliði gerçekleþtiriyorum.
	
	p=head;
	
	while(p!=NULL){ //Bu döngünün içerisinde de en son yazdýrma iþlemi gerçekleþir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
