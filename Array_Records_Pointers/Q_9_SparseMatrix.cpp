#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[3][3] = { {1}, {2, 3}, {4, 5, 6}};
	int row = 3, col = 3;

	int n = (row * (row + 1))/2;
	int brr[n], k = 0;
	//Copy elements from lower triangular matrix to 1D array and
	for(int i = 0; i < row; i++){
		for(int j = 0; j <= i; j++){
			brr[k++] = arr[i][j];
		}
	}
	//print specified element(a[3][2])
	int i = 3, j = 2;
	cout << "Element at [3, 2] "<<  brr[((i-1)*i)/2 + (j-1)] << endl;
}