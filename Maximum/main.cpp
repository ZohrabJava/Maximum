#include <iostream>
using namespace std;
const int n = 5;

int main()
{
	int arr[15];
	int i, j, b, d;
	for (i = 0; i < n; i++)
	{
		cout << "arr" << '[' << i << ']' << '=';
		cin >> arr[i];
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	int p = 1;
	for (d = n - 1; d >= n - 3; d--) {
		p *= arr[d];
		cout << arr[d] << endl;
	}
	cout << "S=" << p;
	return 0;
}