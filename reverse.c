/*
 *Johnathon Killeen
 *CIS 343-02
 *Homework 1
 *File Reverse
 */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "file_utils.h"

//Uses the buffer to create a reversed version
void reverseBuffer(char* buffer,char* reversed, int size){;
	int y = 0;
	for(int i = size; i>=0; i--){
		reversed[y] = buffer[i];
		y++;
	}
}

int main(int argc, char** argv){
	char* buffer;
	char* reversed;
	char* inputfile;
	char* outputfile;
	int size;
	
	//check to make sure that there are files to read and write from
	if(argc<3){
		printf("You must have an input and output file\n");
		exit(1);
	}

	inputfile = argv[1];
	outputfile = argv[2];

	size = read_file(inputfile, &buffer);
	
	reversed = (char*)malloc(size);

	reverseBuffer(buffer,reversed,size);
	write_file(outputfile, reversed, size);
	
	//Memory Leak bad
	free(buffer);
	free(reversed);

	return 0;
}

