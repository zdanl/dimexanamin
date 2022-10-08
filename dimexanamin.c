#include <stdio.h>

struct Dimexamin_Config {
};

void print_ascii_arts();


int main(int argc, char *argv[]) {
    print_ascii_arts();    
}

void print_ascii_arts() {
    FILE* ptr;
    char ch;

    ptr = fopen("assets/arts/ascii/motd", "r");

    if (NULL == ptr) {
	printf("file can't be opened\n");
    }

    do {
	ch = fgetc(ptr);
	printf("%c", ch);
    } while (ch != EOF);

    fclose(ptr);    
}
