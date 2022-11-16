#include <bits/stdc++.h>
using namespace std;
void swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
int parttition(int arr[], int l, int h){
	int value = arr[h];
	int i = l - 1;
	for(int j = l; j < h; j++){
		if(arr[j] < value){
			i++;
			swap(arr, i, j);
		}
	}
	swap(arr, i+1, h);
	return i+1;
}
void quickSort(int arr[], int l, int h){
	if(l < h){
		int value = parttition(arr, l, h);
		quickSort(arr, l, value-1);
		quickSort(arr, value+1, h);
	}
}
int main(){
	int arr[10] = {5, 3, 8, 2, 1, 10, 9, 11, 4, 7};
	quickSort(arr, 0, 9);
	for(int i = 0; i < 10; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}