#include "util.h"
#include "logic.h"

int main() {
	srand(time(0));

	int m, n;
	cout << "Enter size of the matrix [n, m]: ";
	cin >> m >> n;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	int a, b;
	cout << "Enter range of generating values: ";
	cin >> a >> b;
	init(matrix, n, m, a, b);

	cout << "Matrix:\n" << convert_to_string(matrix, n, m);

	int number;
	cout << "Enter the number: ";
	cin >> number;

	cout << "The lowest multiplication-column index: "
		<< find_the_lowest_mult_index(matrix, n, m, number) << endl;

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	system("pause");
	return 0;
}