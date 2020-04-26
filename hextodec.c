#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	//assigning argument passed in value
	char const* const fileName = argv[1];

	//file stream
	FILE* file = fopen(fileName, "r");

	//container for line
	char line[256];

	//while line exists
	while (fgets(line, sizeof(line), file)) {

		//convert string to long int in base 16
		long n = strtol(line, NULL, 16);

		//print base16 value
		printf("%ld, ", n);

  }

	//new line for tidy prompt
	printf("\n");

	//close file stream
  fclose(file);

	return 0;
}
