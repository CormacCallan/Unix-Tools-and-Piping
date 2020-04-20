#include <stdio.h>
#include <string.h>

//This code was taken from Shane Gavins exercise on Moodle
//Source: https://youtu.be/4QR5xLPsfK4
//stdin is hardcoded becuase we dont use any other inputs

void exit(int status);

void clear_to_newline(){
  int c;
  while((c = getchar()) != '\n');

}


void fgets_stdin(char* dest, size_t max){

	fgets(dest, max, stdin);

	char* first_newline = strchr(dest, '\n');

  if(first_newline == NULL){
  	clear_to_newline();
  }
  else{
  	*first_newline = '\0';
  }

}
