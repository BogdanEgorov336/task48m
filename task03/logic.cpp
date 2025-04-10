#include "logic.h"

bool are_all_matrix_elements_odd(int** matrix, int i, int m) {

	for (int j = 0; j < m; j++) {
		
		if (matrix[i][j] % 2 == 0) {
			return false;
		}
	}

	return true;
}

int get_line_sum(int** matrix, int i, int m) {

	int sum = 0;

	for (int j = 0; j < m; j++) {

		sum += abs(matrix[i][j]);
	}

	return sum;
}

int get_the_greatest_sum_on_line_index(int** matrix, int n, int m) {

	int index = 0;
	bool flag = are_all_matrix_elements_odd(matrix, index, m)
		? true : false;
	
	for (int i = 1; i < n; i++) {

		if (are_all_matrix_elements_odd(matrix, i, m)
			&& get_line_sum(matrix, index, m) < get_line_sum(matrix, i, m)) {

			index = i;
		}
	}

	return flag ? index + 1 : -1;
}