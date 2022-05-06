/*
Bedirhan Kömürcü
06.05.2022
23.11
List Homework - Q7
*/

/*
Kendisine parametre olarak aktarýlan head isimli liste ve age yaþ parametresine göre iþlem yapan 
fonksiyon, listedeki age yaþ deðerine sahip ikinci düðümü bularak silmektedir (bu düðümü belleðe iade 
etmekte). Aþaðýda verilen prototipi kullanarak gerekli fonksiyonu yazýnýz
*/

#include<stdio.h>
#include<stdlib.h>

struct node{ //struct yapýsýný oluþturuyoruz.
	
	char name[40];
	int age;
	struct node *next;
		
};


typedef struct node node;


node* deleteNode(node* head,int age){
	
	node *p,*q;
	
	p=head;
	q=p->next;
	
	if(p->age==age){ //silinmek istenen yaþ ilk düðüm mü diye kontrol ediyoruz
		
		head=q;
		free(p);
		
		return head;
		
	}
	
	while(q!=NULL){ //bu döngünün içinde girilen yaþý arýyoruz.
		
		if(q->age==age){ //eðer bulunursa o düðüm siliniyor ve yeni liste döndürülüyor.
			
			p->next=q->next;
			free(q);
			
			return head;
			
		}else{
			
			q=q->next;
			p=p->next;
			
		}
		
	}
	
	if(q==NULL){ //aranan deðerin bulunamadýðý durum.
		
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
	
	while(1){ //bu döngünün içinde, -1 girilene kadar listenin elemanlarýný alýyorum
			  // listeyi böyle almak istedim
		
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
		gets(bugfix); //gets'de bug oluyor isim alamýyor. o yüzden bu var.
		gets(p->name);		
		p->age=deger;
		SayiSayisi++;
		p->next=NULL;
			
	}
	
	int yas;
	
	printf("\nBulmak istediginiz yasi giriniz : "); // bulunmak istenen yaþý alýyorum.
	scanf("%d",&yas);
	
	head=deleteNode(head,yas); // burda fonksiyona headi ve yaþý gönderip deðiþikliði gerçekleþtiriyorum.
	
	p=head;
	
	printf("\n---------Yeni Liste-------------\n");
	
	while(p!=NULL){ //Bu döngünün içerisinde de en son yazdýrma iþlemi gerçekleþir.
		
		printf("%s %d \n",p->name,p->age);
		
		p=p->next;
		
	}
	
return 0;	
}
