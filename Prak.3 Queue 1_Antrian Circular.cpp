//Nama    	: Dewi Nur Arifah
//NIM 		: 20051397079
//KELAS 	: 2020-A
// (nomer 1) QUEUE - Program membuat simulasi tempat parkir Circular Queue

#include <iostream>
using namespace std;

int cqueue[5];
int front = -1, rear = -1, n=5;

void insertCQ(int val) {
   if ((front == 0 && rear == n-1) || (front == rear+1)) {
      cout<<"Queue Overflow \n";
      return;
   }
   if (front == -1) {
      front = 0;
      rear = 0;
   } else {
      if (rear == n - 1)
      rear = 0;
      else
      rear = rear + 1;
   }
   cqueue[rear] = val ;
}
void deleteCQ() {
   if (front == -1) {
      cout<<"Queue Underflow\n";
      return ;
   }
   cout<<"Elemen yang akan dihapus : "<<cqueue[front]<<endl;

   if (front == rear) {
      front = -1;
      rear = -1;
   } else {
      if (front == n - 1)
      front = 0;
      else
      front = front + 1;
   }
}
void displayCQ() {
   int f = front, r = rear;
   if (front == -1) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Data nomor plat kendaraan :\n";
   if (f <= r) {
      while (f <= r){
         cout<<cqueue[f]<<" ";
         f++;
      }
   } else {
      while (f <= n - 1) {
         cout<<cqueue[f]<<" ";
         f++;
      }
      f = 0;
      while (f <= r) {
         cout<<cqueue[f]<<" ";
         f++;
      }
   }
   cout<<endl;
}
int main() {

   int pil, val;
   cout<<"PROGRAM ANTRIAN CIRCULAR QUEUE"<<endl;
   cout<<"---------PILIHAN MENU---------"<<endl;
   cout<<"    	  1)Insert\n";
   cout<<"    	  2)Delete\n";
   cout<<"    	  3)Display\n";
   cout<<"    	  4)Exit\n";
   cout<<"------------------------------";
   
   do {
   	
   	  cout<<endl;
      cout<<"Masukkan pilihan (1/2/3/4) : "<<endl;
      cin>>pil;
      switch(pil) {
         case 1:
         cout<<"Masukkan nomor plat: "<<endl;
         cin>>val;
         insertCQ(val);
         break;

         case 2:
         deleteCQ();
         break;

         case 3:
         displayCQ();
         break;

         case 4:
         cout<<"Exit\n";
         break;
         default: cout<<"Pilihan anda salah \n";
      }
   } while(pil != 4);
   return 0;
}

