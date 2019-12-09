/*
 *Johnathon Killeen
 *CIS 343-02
 *Homework 1
 *Header file
 */

#ifndef HEADER_FILE
#define HEADER_FILE
//This reads in a file using whatever name you provide, and assigns
//Buffer as the start. It returns the size of the memory allocated
int read_file(char* filename, char** buffer);
//This writes the cotents of buffer to the provided file
int write_file(char* filename, char* buffer, int size);


#endif
