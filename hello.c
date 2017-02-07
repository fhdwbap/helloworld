
/*
 * hello.c
 * Unser erstes kleines C-Programm. 
 */


/* Headerdatei fuer Standard-I/O einbinden */
#include <stdio.h>

/* Headerdatei fuer Standard-Konstanten wie EXIT_SUCCESS einbinden */
#include <stdlib.h>

/* Das Hauptprogramm: leere Parameterliste, keine Rueckgabe */
int main(void)
{
    /* Ausgabe auf den Bildschirm mit "newline" ( codiert als \n ) am Ende. */
    printf("Hello, world!\n");

    /* Explizite Programmbeendigung mit “Erfolgsmeldung” an die aufrufende Instanz */
    return EXIT_SUCCESS;

} /* end main */

/* end of file hello.c */ 
