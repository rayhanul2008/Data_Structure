#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 7, pos = 0;
	string temp = "";
	string arr[n]  = {"name", "karim", "again", "noob", "abir", "kabir", "null"};
	
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	 temp = "Rahim";
	 cout << "Rahim to sorted array : ";
	for(int i = 0; i < n; i++){
		if(arr[i] >= temp){
			pos = i;
		}
	}
	cout << pos << endl;
	if(pos == n-1){
		n++;
		arr[n] = temp;
	}
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

}