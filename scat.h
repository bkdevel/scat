#pragma once


#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>


typedef unsigned char bool;


#define OPENING 0
#define false 0
#define READING 1
#define true 1
#define BUF_MAX 1024


bool err = false;


void error(bool b, char* file){

    	char* note = "";
    	char* msg = "";

    	if(b == OPENING){
        	char* msg = "Error: can not open ";
    	}
    	else if(b == READING){
        	char* msg = "Error: can not read ";
    	}
    	else{
        	char* msg = "Fatal Error: incorrect call of _perror(bool b, char* file):: unvalid value of b (not a boolean) :: file passed to _perror(..., char* file): ";
        	char* note = "\nNote: valid argument p of _perror(...) are defined in scat.h::6, scat.h::7, and in libc::stdbool.h";
    	}

    	write(STDERR_FILENO, msg, strlen(msg));
    	write(STDERR_FILENO, file, strlen(file));
    	write(STDERR_FILENO, note, strlen(note));

	err = true;

}


void cat(char* filepath){

    	int fd = open(filepath, O_RDONLY);
    
    	char buf[BUF_MAX];
    	char* newline = "\r\n";
    
    	ssize_t rbytes;

    	if(fd < 0){
        	error(OPENING, filepath);
        	/*return 1;*/
    	}

    	while((rbytes = read(fd, buf, sizeof(buf))) > 0){
        	write(STDOUT_FILENO, buf, rbytes);
        	write(STDOUT_FILENO, newline, 1);
    	}

    	if(rbytes < 0){
        	error(READING, filepath);
        	close(fd);
        	/*return 1;*/
    	}

    close(fd);

/*return 0;*/
}
