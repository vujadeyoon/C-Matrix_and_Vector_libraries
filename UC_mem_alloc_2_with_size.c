#include "header.h"

byte_buffer UC_mem_alloc_2_with_size(size_t row, size_t col, BYTE Initail_value)
{
	size_t i = 0;
	byte_buffer res;
	res.row = row;
	res.col = col;

	res.buf = (BYTE **)malloc(res.row * sizeof(BYTE*));
	for (i = 0; i<res.row; i++) {
		res.buf[i] = (BYTE *)malloc(res.col * sizeof(BYTE));
		memset(res.buf[i], Initail_value, res.col * sizeof(BYTE));
	}

	return res;
}