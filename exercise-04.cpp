/*
 * Author : Nadhifal
 * NPM : 140810180048
 * Deskripsi : array
 * Tahun : 2019
 */
 
 #include <iostream>
using namespace std;

float average(int a[]){
	float y, x=0;
	for(int i = 0; i<10; i++){
		x+=a[i];
	}
	y=x/10;
	return y;
};

void input(int a[]){
	for(int i = 0; i<10; i++){
		cout<<"input number "<<i+1<<" : ";
		cin>>a[i];
	}
};

int main () {
 	int nums[10];
 	input(nums);
 	cout << "the average is " << average(nums);
}


