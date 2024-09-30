#include <iostream>
#include "DynamicArr.h"
#include "tests.h"


int main() {
	system("chcp 65001");
	DynamicArr arr1, arr2(3);
	DynamicArr arr3(arr1);

	for (size_t i = 0; i < 3; ++i) {
		arr3.push_back(i);
	}
	arr1 = arr3;
	std::cout << arr1[1];


	test_constructor_default();
	test_constructor_with_size();
	test_copy_constructor();
	test_push_back();
	test_assignment_operator();
	return 0;
}