#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./lib/input-utils.h"

int main(int argc, char* argv[]){

	char const* const fileName = argv[1];
	FILE* file = fopen(fileName, "r");
	char line[256];



	while (fgets(line, sizeof(line), file)) {

		if(strlen(line)-1 == 7){
			printf("%c%c%c%c%c%c%c%s",line[0],line[1],line[2],line[3],line[4],line[5],line[6],"ff\n");
		}

  }


  fclose(file);



	return 0;
}
