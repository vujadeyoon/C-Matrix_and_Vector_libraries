#include "header.h"

double_buffer DB_mem_alloc_2_with_size(size_t row, size_t col)
{
	/*
	Initialize array with 0 using calloc function because memset function doesn't work for double array
	Double_mem_set_2 is not correct.
	*/

	size_t i = 0;
	double_buffer res;
	res.row = row;
	res.col = col;

	res.buf = (double **)calloc(res.row, sizeof(double*));
	for (i = 0; i<res.row; i++) {
		res.buf[i] = (double *)calloc(res.col, sizeof(double));
	}

	return res;
}