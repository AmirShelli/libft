 #include <cstdio>


 void *memset(void *str, int c, size_t n)
 {
	 while(n-- && *((char *)str))
	 {
		 *((char *)str) = c;
		 ((char *)str)++;
	 }
 }
