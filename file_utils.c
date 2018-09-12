/*
 *Johnathon Killeen
 *CIS 343-02
 *Homework 1
 *file_utils
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

//allocates memeory and reads in a text file
int read_file( char* filename, char **buffer){
	FILE* infile;

	if((infile = fopen(filename,"r")) == NULL){
		fprintf(stderr, "Error with file");
		exit(1);
	}

	struct stat st;
	stat(filename, &st);
	int size = st.st_size;

	*buffer = malloc(size);
	
	fread(*buffer,size,1,infile);

	fclose(infile);
	return size;
}

//writes to the provided file
int write_file(char* filename, char *buffer, int size){
	FILE* out =  fopen(filename,"w");
	int i;
	char* c;
	for(i = size-1; i >= 0; i--){
		c = (buffer + i);
		fwrite(c,1,1,out);
	}

	fclose(out);
	return 0;
}
