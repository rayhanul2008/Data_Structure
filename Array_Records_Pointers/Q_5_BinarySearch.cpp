#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int item){
	int left = 0; int right = n-1, mid;
	while(left <= right){
		mid = left + (right - left)/2;
		if(arr[mid] == item) return mid;
		if(arr[mid] < item) left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}
int main(){
	int n = 10, x;
	int arr[n]  = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int item = 9;
	x = binarySearch(arr, n, item);
	cout << x << endl;
	
}