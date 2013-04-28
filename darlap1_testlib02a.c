/*Darius Lapunas IF-1/8 darlap1*/
/*darlap1_testlib02a.c*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "darlap1_testlib02.h"

void dl_print_stat(char *name){
	struct stat *buf;
	printf( "(C) 2013 Lapunas Darius, %s\n", __FILE__ );
	buf = malloc(sizeof(struct stat));
	if(stat(name, buf) == 0){
		printf("dydis - %lu baitu\n", buf->st_size);
		printf("savininkas - %d\n", buf->st_uid);
	}else{
		printf("nepavyko atidaryti failo\n");
	}
}
