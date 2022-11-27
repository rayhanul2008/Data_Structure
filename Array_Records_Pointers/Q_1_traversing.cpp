#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[10]  = {1, 2, 2, 4, 5, 7, 9, 0, 2, 3};
	int max_value = -1, min_value = 1000, ans = 0;

	cout << "Maximum Value : ";
	for(int i = 0; i < 10; i++){
		if(arr[i] > max_value){
			max_value = arr[i];
		}
	}
	cout << max_value << endl;

	cout << "Minimum Value : ";
	for(int i = 0; i < 10; i++){
		if(arr[i] < min_value){
			min_value = arr[i];
		}
	}
	cout << min_value << endl;

	cout << "Average Value : ";
	for(int i = 0; i < 10; i++){
		ans += arr[i];
	}
	cout << fixed << setprecision(5) << ans/10.0 << endl;

	cout << "Sin Value : ";
	for(int i = 0; i < 10; i++){
		cout << arr[i] << " sin =  " << sin(arr[i]) << endl;
	}
	cout << endl;
}