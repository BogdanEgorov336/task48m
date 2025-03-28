#include "logic.h"

bool are_all_elements_on_line_odd(int** matrix, int i, int m) {

	for (int j = 0; j < m; j++) {

		if (matrix[i][j] % 2 == 0) {
			return false;
		}
	}

	return true;
}

int get_abs_sum_of_elements_on_the_line(int** matrix, int i, int m) {

	int sum = 0;

	for (int j = 0; j < m; j++) {
		sum += abs(matrix[i][j]);
	}

	return sum;
}

int get_max_sum_odd_line_index(int** matrix, int n, int m) {

	int ii = 0;
	bool flag = are_all_elements_on_line_odd(matrix, ii, m)
		? true : false;

	for (int i = 1; i < n; i++) {

		if (are_all_elements_on_line_odd(matrix, i, m) 
			&& are_all_elements_on_line_odd(matrix, i, m)
	> are_all_elements_on_line_odd(matrix, ii, m)) {

			ii = i;
			flag = true;
		}
	}

	return flag ? ii + 1 : -1;
}