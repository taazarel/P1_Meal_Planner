
#include <ncurses.h>   /* biblioteket til tekst-menuer i terminalen */
#include <string.h>
#include "menu.h"


/* Skriver en tekst som er i midten af skærmen */
void print_centered(int row, const char *text)
{
    mvprintw(row, (COLS - (int)strlen(text)) / 2, "%s", text); 
    /* COLS er skærmens bredde, den deles med 2 så der er lige meget på begge sidder af skriften*/
}


/* Side 1: velkomstsiden.
 * Returnerer 1 hvis brugeren trykker ENTER (gå videre), 0 hvis brugeren trykker q. */
int welcome_page(void)
{
    for (;;) {
        clear();

        attron(A_BOLD); /*skriver welcome to dish finder med fed skrift*/
        print_centered(LINES / 2 - 3, "WELCOME TO DISH FINDER"); /*LINES er i midten af terminalen så LINES/2 deler terminalen i 2*/
        attroff(A_BOLD); /*her fjernes den fede skrift*/
        

        attron(A_REVERSE);   /* viser en baggrundsfarve som står midt på skærmen */
        print_centered(LINES / 2, "> Choose the ingredients you already have <");
        attroff(A_REVERSE);

        print_centered(LINES / 2 + 3, "ENTER: select    q: quit");
        refresh(); /*får det frem på skærmen*/

        int key = getch();   /* venter på et tastetryk, og tasten gemmes i key */
        if (key == '\n' || key == KEY_ENTER || key == ' ') return 1;
        if (key == 'q' || key == 'Q') return 0;
    }

}


/* Side 2: en tom side der kun viser keybinds.
 * Returnerer 0 hvis brugeren trykker d (ingen ingredienser valgt),
 * eller -1 hvis brugeren trykker q. */
int next_page(void)
{
    for (;;) {
        clear();

        /* Kun keybinds */
        mvprintw(1, 2, "UP/DOWN: move");/*på række 1 og 2*/
        mvprintw(2, 2, "ENTER/SPACE: toggle   d: done   q: quit");
        refresh();

        int key = getch();
        if (key == 'd' || key == 'D') return 0;
        if (key == 'q' || key == 'Q') return -1;
    }
}


/* Kører hele menuen (velkomstside -> keybinds-side).
 * Se menu.h for hvad den returnerer. */
int run_menu()
{
    int result;
    
    /* Start ncurses */
    initscr();
    cbreak();               /* tast læses med det samme, uden ENTER */
    noecho();               /* tryk vises ikke på skærmen */
    keypad(stdscr, TRUE);   /* pile-taster virker */
    //curs_set(0);            /* skjul blinkende markør */

    if (welcome_page()) {
        result = next_page();
    } else {
        result = -1;
    }

    /* Luk ncurses og gendan terminalen */
    endwin();
    return result;
}
