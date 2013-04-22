/*Darius Lapunas IF-1/8 darlap1*/
/*darlap1_clock02.c*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	time_t laikas;
	struct tm *local, *utc;
	char *utcs, *locals;
	time(&laikas);
	local = localtime(&laikas);
	utc = gmtime(&laikas);
	printf( "(C) 2013 Lapunas Darius, %s\n", __FILE__ );
	utcs = asctime(utc);
	locals = asctime(local);
	printf("Local time: %s\nUTC time: %s\n", locals, utcs);
	free(local);
	free(utc);
	free(utcs);
	free(locals);
	return 0;
}
