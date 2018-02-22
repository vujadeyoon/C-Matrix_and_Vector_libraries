#include "header.h"

void DB_mem_cpy_2(double **Ptr_dest, double **Ptr_src, size_t row, size_t col)
{
	size_t i = 0;

	for (i = 0; i < row; i++) {
		memcpy(Ptr_dest[i], Ptr_src[i], col*sizeof(double));
	}
}