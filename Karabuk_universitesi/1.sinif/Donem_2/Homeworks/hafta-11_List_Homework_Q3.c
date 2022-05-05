/*
Bedirhan K�m�rc�
05.05.2022
21.40
List Homework - Q3
*/

/*
Bir ba�l� do�rusal listelerde listenin ortas�nda yer alan eleman� silen (tuttu�u alan� belle�e geri iade eden)
bir fonksiyon yaz�n�z (Liste 100 ya da 101 elemanl� ise 50. elaman� silecek �ekilde). Fonksiyon parametre
olarak bir liste al�p g�ncellenen listeyi geri d�nd�recektir.
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
	
	p=head; //ilk d���m
	q=p->next; //ikinci d���m
	
	if(p==NULL || q==NULL){ //burda d���m sayisi 3'den az olup olmad��� kontrol ediliyor
		
		printf("Eleman sayisi 3'den az oldugu icin islem gerceklestirilemiyor.");
		return NULL;
		
	}
	
	int SayiSayisi=0;
	
	while(p!=NULL){ // bu d�ng�n�n i�ersinde toplam sayi sayisi bulunuyor.
		
		SayiSayisi++;
		
		p=p->next;
		
	}
	
	int i;
	p=head;
										
											// | p | -> | q | -> | q->next |
											//         ortanca
					
					
	for(i=1;i<(SayiSayisi-1)/2;i++){ // q ortanca eleman olaca�� i�in ve ikinci
									// d���m olarak ba�lad��� i�in; i, 0'dan de�il 1'den ba�l�yor.
		p=p->next;
		q=q->next;
		
	}
	
	p->next=q->next; //bu a�amadan ortanca eleman listeden ��kar�lacak �ekilde �nceki d���m ile sonraki d���m ba�lan�yor.
	free(q); // ortanca eleman belle�e iade ediliyor.
	
	
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
	
	head=ortadakiElemaniSilme(head); // burda fonksiyona headi g�nderip de�i�ikli�i ger�ekle�tiriyorum.
	
	p=head;
	
	while(p!=NULL){ //Bu d�ng�n�n i�erisinde de en son yazd�rma i�lemi ger�ekle�ir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
