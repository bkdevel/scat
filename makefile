CC = clang		# when using tcc set to: tcc -run=no
CC_FLAGS = -std=c89 -fno-blocks -fno-pascal-strings -fno-ms-extensions -fno-borland-extensions -Wall -pedantic -Wno-write-strings -Wno-newline-eof -Wno-uninitialized -Wno-unused-variable


./scat:

	$(CC) $(CC_FLAGS) -o ./scat ./scat.c