//program8.cpp
//Ryan James Dean
//Y876M667
//Homework 8
//This program will sort words alphabetically 

#include <iostream>

using namespace std;

void bubbleSort(string words[], int n);

int main(){
	int n ;
	// Taking value of n
	cout << "How many words will you be entering? ";
	cin>> n;

	//Dynamically allocating memory
	string words[n+1], temp;

	// Taking Input
	for(int i = 0; i < n; ++i){
	cout << "Enter a word: ";
	cin >> words[i];
	}

	//Print Sorted List
	bubbleSort(words, n);
	cout << "Your sorted list is: ";
	for(int i = 0; i < n; ++i){
		cout << words[i] << " ";
	}
return 0;
}

void bubbleSort(string words[], int n){
	string temp;

	// Sorting Numbers Bubble Sort
	for(int i = 0; i < n-1; ++i)
	for( int j = i+1; j < n; ++j){
		if(words[i] > words[j]){
		temp = words[i];
		words[i] = words[j];
		words[j] = temp;
		}
	}
}
