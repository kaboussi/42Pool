#include <unistd.h>

void    ft_putchar(char c) 
{ 
    write(1, &c, 1); 
}

// Just the main
int main(void)
{
    ft_putchar('A');
    return 0;
}

/*
 * int ret = write(int fd, char *buffer, int nbr_of_byts)
 * the write is a system call not a function, it takes 3 arguments
 * 1- fd: file descriptor, is an integer that points to a file in a table of file descriptors
 *		- since everything in linux or unix system is a file
 * 		- (0) is /dev/stdin
 * 		- (1) is /dev/stdout
 * 		- (2) is /dev/stderr
 * 		so if we use write(1, ..., ...) we gonna print on the stdout which is the normal case
 * 		or write(2, ..., ...) obviously we gonna print in the stderr and so on...
 * 		- those three (read, write, error) are standard in unix and unix-like systems
 * 		- if you use a value greater then 2 usually it's a manually opened file.
 * 		- in the 42 Network pool you will only need the stdout (1)
 * 2- buffer: takes the address of the beginning of a buffer in the memory
 * 3- number of bytes to print from that address
 *
 * Note:
 * 	-	if you want just to print a single character like this case
 * 		the number of bytes should be (1)
*/

