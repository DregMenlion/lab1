#include <locale.h>
#include <stdio.h>

void main()
{
    setlocale(LC_ALL, "RUS");

    puts(" __   __        __    /        __   ___");
    puts("   /    /      |  |  /|       |  |    /");
    puts("  /    /       |  |   |       |  |   /");
    puts(" /    /        |  |   |       |  |  /");
    puts("/__  /__       |__|  _|       |__| /");

    getchar();
}