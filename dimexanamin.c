#include <stdio.h>
#include <unistd.h>

#include "ctype.h"

struct Dimexamin_Config {
};

/* function headers */
void Dimexamin_print_ASCII_arts();

int main(int argc, char *argv[]) {
    Dimexamin_print_ASCII_arts();    
}

/* this just prints an ascii art banner */
void Dimexamin_print_ASCII_arts() {
    FILE* ptr;
    char ch;

    ptr = fopen("assets/arts/ascii/motd", "r");

    if (NULL == ptr) {
	printf("file can't be opened\n");
    }

    const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
    write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);

    do {
	ch = fgetc(ptr);
	// i would like to know how isprint() is implemented but can't
	// find it even in glibc
	if (isprint(ch)) {
	    printf("%c", ch);
	} else {
	    printf("\n");
	}
    } while (ch != EOF);

    fclose(ptr);    
}
