/*Darius Lapunas IF-1/8 darlap1*/
/*darlap1_dynload02.c*/

#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(int argc, char *argv[]){
	int (*fptr)(char *name);
	void *dl;
	printf( "(C) 2013 Lapunas Darius, %s\n", __FILE__ );
	if(argc < 3){
		printf("Reikia 2 argumentu - bibliotekos ir failo\n");
		return 1;
	}
	dl = dlopen(argv[1], RTLD_LAZY|RTLD_LOCAL);
	if(dl == NULL){
		printf("Nepavyko atidaryti bibliotekos\n");
		return 1;
	}
	*(void**)(&fptr) = dlsym(dl, "dl_print_stat");
	if(fptr == NULL){
		printf("Nepavyko gauti funkcijos\n");
		return 1;
	}
	(*fptr)(argv[2]);
	dlclose(dl);
	return 0;
}
