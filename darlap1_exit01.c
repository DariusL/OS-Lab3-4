/*Darius Lapunas IF-1/8 darlap1*/
/*darlap1_exit01.c*/

#include <aio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

void dl_fun1(){
	printf("Trecia\n");
}

void dl_fun2(){
	printf("Antra\n");
}

void dl_fun3(){
	printf("Pirma\n");
}

int dl_parse_char(char *nr){
	int ret = 0;
	int tmp = 0;
	int i;
	for(i = 0; nr[i] != '\0'; i++){
		tmp = nr[i] - '0';
		if(tmp > 9 || tmp < 0)
			return 0;
		ret *= 10;
		ret += tmp;
	}
	return ret;
}

int main(int argc, char *argv[]){
	int ret;
	if(argc == 2)
		ret = dl_parse_char(argv[1]);
	else
		ret = 0;
	printf( "(C) 2013 Lapunas Darius, %s\n", __FILE__ );
	atexit(dl_fun1);
	atexit(dl_fun2);
	atexit(dl_fun3);
	return ret;
}
