/*Darius Lapunas IF-1/8 darlap1*/
/*darlap1_cpulimit01.c*/

#include <aio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <limits.h>
#include <sys/resource.h>

int main(){
	struct rlimit rl;
	int i;
	rl.rlim_cur = 1;
	rl.rlim_max = 1;
	setrlimit(RLIMIT_CPU, &rl);
	rl.rlim_cur = 0;
	rl.rlim_max = 0;
	setrlimit(RLIMIT_CORE, &rl);
	for(i = INT_MIN; i < INT_MAX; i++);
	return 0;
}
