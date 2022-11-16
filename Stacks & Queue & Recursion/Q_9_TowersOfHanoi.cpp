#include <bits/stdc++.h>
using namespace std;
void towersOfHanoi(int disks, char A, char B, char C){
	if(disks == 1){
		cout << "Disks " << disks << " Moved From " << A << " to " << C << endl;
		return;
	}
	towersOfHanoi(disks - 1, A, C, B);
	cout << "Disks " << disks << " Moved From " << A << " to " << C << endl;
	towersOfHanoi(disks - 1, B, A, C);
}
int main(){
	int disks;
	cout << "Enter The Number Of Disk : ";
	cin >> disks;
	cout << disks << endl;
	towersOfHanoi(disks, 'A', 'B', 'C');

}