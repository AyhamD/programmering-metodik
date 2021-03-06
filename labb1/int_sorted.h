#ifndef INT_SORTED_H
#define INT_SORTED_H

#include "int_buffer.h"
class int_sorted {
public:
	int_sorted(const int* source, size_t size);
	size_t size() const;
	int* insert(int value); // returns the insertion point .
	const int* begin() const;
	const int* end() const;
	int_sorted merge(const int_sorted& merge_with) const;
private:
	int_sorted sort(const int* begin, const int* end);

	//size_t _size = 0;
	int_buffer buffer;
};
#endif