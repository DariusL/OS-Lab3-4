/*Darius Lapunas IF-1/8 darlap1*/
/*darlap1_nice01.c*/

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



int main(int argc, char *argv[]){
	int nice;
	int start;
	int startc, endc;
	float t;
	printf( "(C) 2013 Lapunas Darius, %s\n", __FILE__ );
	if(argc < 2){
		printf("Reikia 1 argumento\n");
		return 1;
	}
	nice = atoi(argv[1]);
	setpriority(PRIO_PROCESS, 0, nice);
	start = time(NULL);
	startc = clock();
	while(time(NULL) - start < 5);
	endc = clock();
	t = (endc - startc)/(float)CLOCKS_PER_SEC;
	printf("5s ciklas truko %f sekundes\n", t);
	return 0;
}
