#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <errno.h>
#include <unistd.h>
int main()
{  
	long int status = syscall(318, 1538, data.txt); 
	if(status == 0) 
		printf("Executed correctly");
	else
		perror("Error ");	
	return 0;
}
