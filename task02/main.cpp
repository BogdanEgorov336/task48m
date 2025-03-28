#include "util.h"
#include "logic.h"

int main() {
	srand(time(0));

	int n, m;
	cout << "Enter size of the matrix [n, m]: ";
	cin >> n >> m;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}

	int a, b; 
	cout << "Enter range of generating values: ";
	cin >> a >> b;

	init(matrix, n, m, a, b);
	cout << "Matrix:\n" << convert_to_string(matrix, n, m) << endl;

	cout << (get_info_about_matrix_columns(matrix, n, m) != ""
		? get_info_about_matrix_columns(matrix, n, m) 
		: "There is no such columns.\n");

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	system("pause");
	return 0;
}