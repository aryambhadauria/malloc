# malloc
C malloc() method
The “malloc” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

Syntax: 

ptr = (cast-type*) malloc(byte-size)
For Example:
ptr = (int*) malloc(100 * sizeof(int));
Since the size of int is 4 bytes, this statement will allocate 400 bytes of memory. And, the pointer ptr holds the address of the first byte in the allocated memory.
![image](https://user-images.githubusercontent.com/125942960/234373785-4fac3bb4-3116-48ea-8b0d-83787ee1a5bf.png)
