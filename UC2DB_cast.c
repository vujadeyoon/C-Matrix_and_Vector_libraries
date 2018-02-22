#include "header.h"

double_buffer UC2DB_cast(byte_buffer *ptr_buf)
{
	size_t i, j = 0;
	double_buffer buf_cast = DB_mem_alloc_2_with_size(ptr_buf->row, ptr_buf->col, 0);

	for (i = 0; i < ptr_buf->row; i++) {
		for (j = 0; j < ptr_buf->col; j++) {
			buf_cast.buf[i][j] = (double)ptr_buf->buf[i][j];
		}
	}

}