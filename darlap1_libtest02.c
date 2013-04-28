/*Darius Lapunas IF-1/8 darlap1*/
/*darlap1_libtest02.c*/

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

#include "darlap1_testlib02.h"

int main(int argc, char *argv[]){
	printf( "(C) 2013 Lapunas Darius, %s\n", __FILE__ );
	if(argc < 2){
		printf("Reikia 1 argumento - failo");
		return 1;
	}else
		dl_print_stat(argv[1]);
	return 0;
}
