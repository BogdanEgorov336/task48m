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

	cout << "Line features the greatest absolute-value sum: "
		<< (get_the_greatest_sum_on_line_index(matrix, n, m) != -1
			? to_string(get_the_greatest_sum_on_line_index(matrix, n, m))
			: "there is no such ones.") << endl;

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	system("pause");
	return 0;
}