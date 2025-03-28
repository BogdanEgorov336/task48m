#include "logic.h"

bool is_there_negative_element_on_main_line(int** matrix, int j, int n) {

	return matrix[j][j] < 0;
}

int get_sum_of_matrix_column(int** matrix, int j, int n) {

	int sum = 0;

	for (int i = 0; i < n; i++) {

		sum += matrix[i][j];
	}

	return sum;
}

string get_info_about_matrix_columns(int** matrix, int n, int m) {

	string info = "";

	for (int j = 0; j < m; j++) {

		if (is_there_negative_element_on_main_line(matrix, j, n)) {

			info += "Number of the column: " + to_string(j + 1)
				+ "\nSum: " + to_string(get_sum_of_matrix_column(matrix, j, n))
				+ "\n\n";
		}
	}

	return info;
}