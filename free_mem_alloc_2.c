#include "header.h"

void free_mem_alloc_2(void **dest_buf, size_t row) {
	size_t i = 0;

	for (i = 0; i < row; i++) {
		free(dest_buf[i]);
	}
	free(dest_buf);

}