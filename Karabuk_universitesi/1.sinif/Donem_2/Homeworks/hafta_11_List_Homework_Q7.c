/*
Bedirhan K�m�rc�
06.05.2022
23.11
List Homework - Q7
*/

/*
Kendisine parametre olarak aktar�lan head isimli liste ve age ya� parametresine g�re i�lem yapan 
fonksiyon, listedeki age ya� de�erine sahip ikinci d���m� bularak silmektedir (bu d���m� belle�e iade 
etmekte). A�a��da verilen prototipi kullanarak gerekli fonksiyonu yaz�n�z
*/

#include<stdio.h>
#include<stdlib.h>

struct node{ //struct yap�s�n� olu�turuyoruz.
	
	char name[40];
	int age;
	struct node *next;
		
};


typedef struct node node;


node* deleteNode(node* head,int age){
	
	node *p,*q;
	
	p=head;
	q=p->next;
	
	if(p->age==age){ //silinmek istenen ya� ilk d���m m� diye kontrol ediyoruz
		
		head=q;
		free(p);
		
		return head;
		
	}
	
	while(q!=NULL){ //bu d�ng�n�n i�inde girilen ya�� ar�yoruz.
		
		if(q->age==age){ //e�er bulunursa o d���m siliniyor ve yeni liste d�nd�r�l�yor.
			
			p->next=q->next;
			free(q);
			
			return head;
			
		}else{
			
			q=q->next;
			p=p->next;
			
		}
		
	}
	
	if(q==NULL){ //aranan de�erin bulunamad��� durum.
		
		printf("\naranan deger bulunamadi.\n");
		
		return head;
		
	}else{ //hata olursa diye denemek istedim.
		
		printf("\nHATA\n");
		return NULL;
		
	}
}

int main(){
	
	
	int deger,SayiSayisi=0; 
	node *head,*p;
	char bugfix[10];
	
	while(1){ //bu d�ng�n�n i�inde, -1 girilene kadar listenin elemanlar�n� al�yorum
			  // listeyi b�yle almak istedim
		
		printf("yas degerini giriniz[-1 ise islem sonlanacaktir.] : ");
		scanf("%d",&deger);
		
		if(deger == -1) break;
			
		if(SayiSayisi==0){
	
			head=(node*)malloc(sizeof(node));
			p=head;
	
		}else{
		
			p->next=(node*)malloc(sizeof(node));
			p=p->next;			
		}
	
		printf("isim giriniz : ");
		gets(bugfix); //gets'de bug oluyor isim alam�yor. o y�zden bu var.
		gets(p->name);		
		p->age=deger;
		SayiSayisi++;
		p->next=NULL;
			
	}
	
	int yas;
	
	printf("\nBulmak istediginiz yasi giriniz : "); // bulunmak istenen ya�� al�yorum.
	scanf("%d",&yas);
	
	head=deleteNode(head,yas); // burda fonksiyona headi ve ya�� g�nderip de�i�ikli�i ger�ekle�tiriyorum.
	
	p=head;
	
	printf("\n---------Yeni Liste-------------\n");
	
	while(p!=NULL){ //Bu d�ng�n�n i�erisinde de en son yazd�rma i�lemi ger�ekle�ir.
		
		printf("%s %d \n",p->name,p->age);
		
		p=p->next;
		
	}
	
return 0;	
}
