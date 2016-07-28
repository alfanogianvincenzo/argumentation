//============================================================================
// Name        : Tesi.cpp
// Author      : Ga-Fp
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;

int main() {
	int a[1][2];
	int* p;
	p = a[0];

	for (int i = 0; i < 1; i++) {
			for (int j = 0; j < 2; j++) {
			cin >> a[i][j];
			cout<<a[i][j];
		}
	}
cout<<"ooooo \n";
cout<<*(p+1);
	return 0;
}
