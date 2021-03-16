//Nama    	: Dewi Nur Arifah
//NIM 		: 20051397079
//KELAS 	: 2020-A
// (nomer 2) Stack

#include <iostream> 
#include <stdlib.h> 

using namespace std; 

class twoStacks { 
	int* arr; 
	int size; 
	int top1, top2; 

public: 
	// Constructor 
	twoStacks(int n) 
	{ 
		size = n; 
		arr = new int[n]; 
		top1 = n / 2 + 1; 
		top2 = n / 2; 
	} 

	// Metode untuk mengeluarkan elemen x ke stack pertama 
	void push1(int x) 
	{ 
		if (top1 > 0) { 
			top1--; 
			arr[top1] = x; 
		} 
		else { 
			cout << "\n Stack Overflow" << " By element :" << x << endl; 
			return; 
		} 
	} 

	//Metode untuk mengeluarkan elemen x ke stack kedua
	void push2(int x) 
	{ 
 
		if (top2 < size - 1) { 
			top2++; 
			arr[top2] = x; 
		} 
		else { 
			cout << "\n Stack Overflow" << " By element :" << x << endl; 
			return; 
		} 
	} 

	// Memunculkan elemen dari stack pertama
	int pop1() 
	{ 
		if (top1 <= size / 2) { 
			int x = arr[top1]; 
			top1++; 
			return x; 
		} 
		else { 
			cout << "Stack UnderFlow"; 
			exit(1); 
		} 
	} 

	// Pemunculan elemen dari stack kedua 
	int pop2() 
	{ 
		if (top2 >= size / 2 + 1) { 
			int x = arr[top2]; 
			top2--; 
			return x; 
		} 
		else { 
			cout << "Stack UnderFlow"; 
			exit(1); 
		} 
	} 
}; 

/* Program driver untuk menguji kelas Dua Stacks */
int main() 
{ 
	twoStacks ts(5); 
	ts.push1(5); 
	ts.push2(10); 
	ts.push2(15); 
	ts.push1(12); 
	ts.push2(10); 
	cout << " Elemen yang muncul pada stack1 adalah : "
		<< ts.pop1() 
		<< endl; 
	ts.push2(40); 
	cout << " Elemen yang muncul pada stack2 adalah : "
		<< ts.pop2() 
		<< endl; 
	return 0; 
} 


