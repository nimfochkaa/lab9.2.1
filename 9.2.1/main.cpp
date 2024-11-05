#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "macros.h"
#include "calculate.h"
#include "debug.h"

int main() {
    puts("Lab: Using macros and preprocessing directives");

    double x, y, z, w;
    char ch;

    do {
        puts("Enter values for x, y, z:");
        scanf("%lf %lf %lf", &x, &y, &z);

#if defined(DEBUG)
        puts("DEBUG: Calculation w depending on conditions");
#endif

        w = calculateW(x, y, z);

        PRINTR(w);

        puts("Repeat? y /n ");
        ch = _getch();
        printf("%c\n", ch);

    } while (ch == 'y' || ch == 'Y');

    return 0;
}
