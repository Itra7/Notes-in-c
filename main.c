#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
int main(int argc, char *argv[argc +1]){
	printf("Hey What's new in your life?\n\n");
	int (*which[])() = {store};
	(*which[0])();	

};
