#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	char const* const fileName = argv[1];
	FILE* file = fopen(fileName, "r");
	char line[256];

	while (fgets(line, sizeof(line), file)) {

		if(sizeof(line) == 9){
			printf("%s%s", line, "FF");
		}
		else{
			printf("%s%s", line, "null");
		}

  }

	printf("\n");

  fclose(file);



	return 0;
}
