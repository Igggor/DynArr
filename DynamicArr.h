#pragma once
#include <cstddef>

class DynamicArr {
	static const size_t initialCapacity_ = 2;	// only one for all objects of DynamicArr
	static const double coeff_;					// same as above

	size_t size_ = 0;
	size_t capacity_ = initialCapacity_;
	double* arr_;

public:
	DynamicArr();
	explicit DynamicArr(size_t size, double element = 0);
	DynamicArr(const DynamicArr& rhs);
	~DynamicArr();
	size_t size() const;
	size_t capacity() const;
	void push_back(double elem);
	double& operator[](int index) ;
	double operator[](int index) const;
	DynamicArr& operator=(const DynamicArr& rhs);
};
