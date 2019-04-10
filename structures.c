#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "structures.h"
typedef struct value{

	char buf[5000];

}var;
int store(){
	char str[5000];
	scanf("%[^'\n']s",str);
	FILE *fp = fopen("myfile.txt", "a+");
	 time_t current_time;
    char* c_time_string;

    /* Obtain current time. */
    current_time = time(NULL);
    c_time_string = ctime(&current_time);

	fprintf(fp, "\n %s  \n %s \n", c_time_string, str);
	fclose(fp);	
	
};
