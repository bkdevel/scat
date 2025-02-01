#include <string.h>
#include <unistd.h>

#include "scat.h"


int main(int argc, char** argv){

	int i = 1;
	while(i < argc){
		write(STDOUT_FILENO, argv[i], strlen(argv[i]));
		write(STDOUT_FILENO, ":\n\r", 2);
		cat(argv[i]);
		write(STDOUT_FILENO, "\n\r", 1);
		i++;
	}

return err;
}
