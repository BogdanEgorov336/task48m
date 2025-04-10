#include "logic.h"

bool check_all_elements_for_no_greating_than_n(int** matrix, int n, int j, int number) {

	for (int i = 0; i < n; i++) {

		if (abs(matrix[i][j]) > number) {

			return false;
		}
	}

	return true;
}

int get_multiplication_of_all_column_elements(int** matrix, int n, int j) {

	int mult = 1;

	for (int i = 0; i < n; i++) {
		mult *= matrix[i][j];
	}

	return mult;
}

int find_the_lowest_mult_index(int** matrix, int n, int m, int number) {

	int index = 0;

	for (int j = 0; j < m; j++) {

		if (check_all_elements_for_no_greating_than_n(matrix, n, j, number)
			&& get_multiplication_of_all_column_elements(matrix, n, j)
			< get_multiplication_of_all_column_elements(matrix, n, index)) {

			index = j;
		}
	}

	return index;
}