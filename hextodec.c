#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){


	//my original idea and attempt
	//printf("\n custom c programme hextodec\n");

	//for(int i = 1; i < argc; i++){

		//long n = strtol(argv[i], NULL, 16);
		//printf("%ld, ", n);

	//}



	char const* const fileName = argv[1];
	FILE* file = fopen(fileName, "r");
	char line[256];

	while (fgets(line, sizeof(line), file)) {
		long n = strtol(line, NULL, 16);
		printf("%ld, ", n);

  }

	printf("\n");

  fclose(file);



	return 0;
}
