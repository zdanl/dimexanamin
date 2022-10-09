#include <stdio.h>
#include <unistd.h>

#include "ctype.h"

/*
 * ________  .__                __  .__           .__  .__                   
 * \______ \ |__| _____   _____/  |_|  |__ ___.__.|  | |  |__   ____ ___  ___
 *  |    |  \|  |/     \_/ __ \   __\  |  <   |  ||  | |  |  \_/ __ \\  \/  /
 *  |    `   \  |  Y Y  \  ___/|  | |   Y  \___  ||  |_|   Y  \  ___/ >    < 
 *  /______  /__|__|_|  /\___  >__| |___|  / ____||____/___|  /\___  >__/\_ \
 *         \/         \/     \/          \/\/               \/     \/      \/
*/

/*
 *
 * Dimethylhexamin is an apprevation for 4-methylphenidate-N,N-dimethyltryptamin
 * and is a 1:0.25 mixture of pharmaceutical-grade and controlled distribution
 * substance Methylphenidate hydrochloride and a former Research Chemical turned
 * Designer Drug of ritualistic 4-Acetoxy-N,N-Dimethyltryptamin Fumarate.
 *
 * The one is a proven, stable, and unmodified Piperidine-based Dopamin
 * reuptake inhibitor and Cerebral stimulant; whereas the other is
 * a Serotonic agent of the hallucinogenic and psychedelic Tryptamin class.
 *
 * The name Dimethylhexamin is not fit for purpose. The chemical compound
 * mixture must be accurately described at all times, and not misrepresented
 * as a singular molecule.
 *
 * It is used in field medicine, and serves as a nootropic for scientific 
 * software security efforts.
 *
 */

struct Dimexamin_Config {
    int status;
};

/* function headers */
void Dimexamin_print_ASCII_arts();

/* main function */
int main(int argc, char *argv[]) {
    Dimexamin_print_ASCII_arts();    

    return 0;
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
	}
    } while (ch != EOF);

    fclose(ptr);    
}
