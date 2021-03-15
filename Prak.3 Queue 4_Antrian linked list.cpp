//Nama    	: Dewi Nur Arifah
//NIM 		: 20051397079
//KELAS 	: 2020-A
// (nomer 4) QUEUE - Program membuat simulasi tempat parkir dengan Linked list

#include <iostream>
#include <malloc.h>
#include <conio.h>


using namespace std;

struct node {
	int info;
	struct node *link;
}*front = NULL, *rear = NULL;

void insert ();
int del ();
void display();

void insert (int num){
	struct node *temp;
	temp = (struct node*) malloc (sizeof(struct node));
	
	if (temp==NULL){
		cout << "\t\tRuang antrian penuh";
		return;
	}
	
	temp -> info = num;
	temp -> link = NULL;
	
	if (front == NULL){
		front = temp;
	}else {
		rear -> link = temp;
	}
	rear = temp; 
}

int del (){
	int num;
	struct node *temp;
	
	if(front == NULL){
		cout << "\t\tRuang antrian kosong" << endl;
		return 0;
	}
	temp = front;
	num = temp->info;
	front = front->link;
	free (temp);
	return num;
}


void display (){
	struct node *p;

	p = front;
	cout << "\n\t\tQueue Nomor Plat Mobil: ";
	while (p != NULL){
		cout << " " << p->info;
		p = p->link;
	}
}

int main (){
	int pil;
	int num;
			cout << "\t\t[==============================================]" << endl;
			cout << "\t\t|Nama \t: Dewi Nur Arifah                      |" << endl;
			cout << "\t\t|NIM \t: 20051397079                          |" << endl;
			cout << "\t\t|Kelas \t: 2020A                                |" << endl;
			cout << "\t\t|PROGRAM SIMULASI TEMPAT PARKIR (MOBIL)        |" << endl;
			cout << "\t\t[==============================================]" << endl;
			cout << endl;
			getch();
		system ("cls");
	
	do {
	cout << endl;
		cout << "\t\t       PROGRAM PARKIR DENGAN LINKED LIST  \t" << endl;
		cout << "\t\t ==============================================" << endl;
		cout << "\t\t|                 PILIHAN                      |\t" << endl;
		cout << "\t\t|==============================================|" << endl;
		cout << "\t\t|1. -.Insert.- (Memasukkan nomor plat mobil)   |" << endl;
		cout << "\t\t|2. -.Delete.- (Mengeluarkan nomor plat mobil) |" << endl;
		cout << "\t\t|3. -.Exit.-                                   |" << endl;
		cout << "\t\t ==============================================" << endl;
		
		cout << "\t\tMasukkan Pilihan (1/2/3) : ";
		cin >> pil;

		switch (pil){
		case 1 :
		{
			cout << "\n\t\tMasukkan Nomor Plat: ";
			cin >> num;
			insert(num);
			display();
			cout << endl;
			break;
		}
		case 2 :
		{
			cout << endl;
			del();
			display();
			cout << endl;
			break;
		}
		}
	}
	while (pil != 3);	
}































