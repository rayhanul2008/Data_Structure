#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 7;
	//string temp = "";
	string arr[n]  = {"name", "karim", "again", "noob", "abir", "kabir", "null"};
	
	// for(int i = 0; i < n; i++){
	// 	for(int j = i+1; j < n; j++){
	// 		if(arr[i] > arr[j]){
	// 			temp = arr[i];
	// 			arr[i] = arr[j];
	// 			arr[j] = temp;
	// 		}
	// 	}
	// }
	
	// cout << "Rahim to sorted array : ";
	// for(int i = 0; i < n; i++){
	// 	if(arr[i] >= "Rahim"){
	// 		n++;
	// 		for(int j = i+1; j < n; j++){
	// 			arr[j] = arr[i];
	// 		}
	// 		arr[i] = "Rahim";
	// 		break;
	// 	}
	// }
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;

}