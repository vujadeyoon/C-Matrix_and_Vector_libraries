# C-Matrix_and_Vector_libraries
Matrix and vector computational libraries for C language.

## Table of contents
1. [Development environments](#dev_env)
2. [Prototypes](#prototypes)
3. [Note](#note)

## Development environments <a name="dev_env"></a>
* Coding language: C language
* Compiler: Microsoft Visual C (MSVC)
* Integrated Development Environment(IDE): Microsoft Visual Studio 2017

## Prototyes <a name="prototypes"></a>
```c
double_buffer DB_mem_alloc_2_with_size(size_t row, size_t col); // Declare a 2D double array with a row by column size.
void DB_mem_cpy_2(double **Ptr_dest, double **Ptr_src, size_t row, size_t col); // 2D double array (memory) copy
void free_mem_alloc_2(void **dest_buf, size_t row); // Free 2D array with any data types.
double_buffer UC2DB_cast(byte_buffer *ptr_buf); // Declare a 2D double array with same data which are saved in 2D unsigned char (byte) array.
byte_buffer UC_mem_alloc_2_with_size(size_t row, size_t col, BYTE Initail_value); // Declare a 2D unsigned character array with a row by column size and initialize the arrary with Initial_value. 
```

## Note <a name="note"></a>
* Please note that the represitory has not been completed.
* If you have any request, please feel free to contact me via an email, sjyooon1671@gmail.com.
* I will do my best for complying the request.
