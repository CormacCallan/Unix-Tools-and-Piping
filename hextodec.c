#include <stdio.h>


int main(int argc, char* argv[]){

	printf("\n custom c programme hextodec\n");


	//long n = strtol(argv[1], NULL, 16);
	//printf("n=%ld\n", n);


	for(int i = 1; i < argc; i++){

		long n = strtol(argv[i], NULL, 16);
		printf("n=%ld\n", n);


//		printf("%s", argv[i]);
	//	printf("%s\n",argv[i]);

	}

  return 0;
}
