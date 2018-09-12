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

int main(int argc, char** argv){
	char* buffer;
	char* inputfile;
	char* outputfile;
	int size;
	
	//check to make sure that there are files to read and write from
	if(argc<3){
		printf("You must have an input and output file");
		exit(1);
	}

	inputfile = argv[1];
	outputfile = argv[2];

	size = read_file(inputfile, &buffer);
	write_file(outputfile, buffer, size);
	
	//I believe this prevents memeory leak
	free(buffer);

	return 0;
}

