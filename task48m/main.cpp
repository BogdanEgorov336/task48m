#include "util.h"
#include "logic.h"

int main() {

	int n, m;
	cout << "Input matrix size values [n, m]: ";
	cin >> n >> m;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	int a, b;
	cout << "Enter range of generating values: ";
	cin >> a >> b;

	init(matrix, n, m, a, b);
	cout << "Matrix:\n" << convert_to_string(matrix, n, m);

	cout << "Numbers of columns full of even elements: "
		<< convert_function_value_to_string(matrix, n, m) << endl;

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	system("pause");
	return 0;
}