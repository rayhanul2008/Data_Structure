#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 10, temp = 0;
	int arr[n]  = {11, 32, 12, 24, 5, 37, 89, 80, 52, 78};
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1; j++){
			if(arr[i] < arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << endl;
	}
	
}