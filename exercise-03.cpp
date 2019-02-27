/*
 * Author : Nadhifal
 * NPM : 140810180048
 * Deskripsi : swap
 * Tahun : 2019
 */
 
#include <iostream>
using namespace std;

// Write your code below
// make necessary changes

void swap(int& a, int& b) {
	int temp=a;
	a=b;
	b=temp;
}

int main() {
   	int x = 5;
   	int y = 4;
   	cout << "x is " << x << endl;
   	cout << "y is " << y << endl;
   	swap(x, y);
   	cout << "After swap" << endl;
   	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
}


