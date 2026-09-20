#include <locale.h>
#include <stdio.h>

void first() 
{

    puts("Моя программа");
    puts("");
}


void name()
{
    puts("* * * * * * * * * * * * * * * * * * * * * * * * * *");
    puts("*                                                 *");
    puts("*        Тема: Разработка консольного приложения  *");
    puts("*                                                 *");
    puts("* Выполнил: Трофимовский Артём                    *");
    puts("* Группа: бОТИ-261                                *");
    puts("*                                                 *");
    puts("* * * * * * * * * * * * * * * * * * * * * * * * * *");
}

void date()
{
    puts("");
    puts("Дата рождения:");
    puts("");

    puts(" ___   ___        ___              ___   ___ ");
    puts("    |     |      |   |      |     |   |    / ");
    puts(" ___|  ___|      |   |      |     |   |   /  ");
    puts("|     |          |   |      |     |   |  /   ");
    puts("|___  |___       |___|      |     |___| /    ");
}

void main()
{
    setlocale(LC_ALL, "RUS");

    first();
    name();
    date();

    getchar();
}