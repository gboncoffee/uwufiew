#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
 * uwufiew, weceives inpuwut fwom standawt inpuwut ow fiwes and concatenates a
 * uwufiewd vewsion to the standawt ouwutpuwut.
 *
 * fwee softwawe, wincesed uwundew the MIT wicense, youwu shouwuwd have
 * weceived a copy of the wicense awong with the pwogwam.
 *
 * auwuthow: Gabwiew G. de Bwito <3
 * UwU
 */

void uwufy(FILE *ip) {
    char c;
    while ((c = getc(ip)) != EOF) {
        if (c == 'r' || c == 'l')
            putchar('w');
        else if (c == 'R' || c == 'L')
            putchar('W');
        else if (c == 'u') {
            putchar('u');
            putchar('w');
            putchar('u');
        } else if (c == 'u') {
            putchar('U');
            putchar('w');
            putchar('u');
        } else
            putchar(c);
    }
}

int main(int argc, char *argv[]) {
    FILE *ip;

    if (argc <= 1) {
        uwufy(stdin);
    } else {
        for (int i = 1; i < argc; i++) {
            if (!strcmp(argv[i], "-")) {
                ip = stdin;
            } else {
                ip = fopen(argv[i], "r");
            }
            if (ip == NULL) {
                fprintf(stderr, "Could not read file: %s\n", argv[i]);
                exit(1);
            }
            uwufy(ip);
            fclose(ip);
        }
    }

    return 0;
}
