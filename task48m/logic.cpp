#include "logic.h"

bool are_all_elements_even(int** matrix, int n, int j) {

	for (int i = 0; i < n; i++) {
		
		if (abs(matrix[i][j]) % 2 == 1) {
			return false;
		}
	}

	return true;
}

string convert_function_value_to_string(int** matrix, int n, int m) {

	string str = "";

	for (int j = 0; j < m; j++) {

		if (are_all_elements_even(matrix, n, j)) {
			
			str += to_string(j + 1) + " ";
		}
	}

	return str;
}