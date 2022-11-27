#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 10, temp = 0;
	int arr[n]  = {11, 32, 12, 24, 5, 37, 89, 80, 52, 78};
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout << "54 to sorted array : ";
	for(int i = 0; i < n; i++){
		if(arr[i] >= 54){
			n++;
			for(int j = n-1; j > i; j--){
				arr[j] = arr[j-1];
			}
			arr[i] = 54;
			break;
		}
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

}