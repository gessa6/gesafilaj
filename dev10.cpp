#include <stdio.h>
#include <ctype.h>

int main() {
    int portaA = 0;      
    int portaB = 0;     
    int numer = 0;     
    char hyrja;          
    int portadalese;      
    int piket = 0;     
    int hedhjet;      
    
    printf("\nVendos numrin e hedhjeve: ");
    scanf("%d", &hedhjet);
    
    if (hedhjet >= 0) {
        printf("\nPercakto porten hyrese ('A' ose 'B') per topin: ");
        scanf(" %c", &hyrja);
        hyrja = toupper(hyrja);
        
        int i = 0;
        while (i < hedhjet) {
            if (hyrja == 'A') {
                if (portaA == 0) {
                    portadalese = 0;
                    piket += portadalese;
                    portaA = 1;
                } else if (portaA == 1 && portaB == 0) {
                    portadalese = 0;
                    piket += portadalese;
                    portaA = 0;
                    numer++;
                    if (numer % 2 == 0) {
                        portaB = 1;
                    }
                } else {
                    portadalese = 1;
                    piket += portadalese;
                    portaA = 0;
                    numer++;
                    if (numer % 2 == 0) {
                        portaB = 0;
                    }
                }
            } else if (hyrja == 'B') {
                if (portaB == 1) {
                    portadalese = 1;
                    piket += portadalese;
                    portaB = 0;
                } else if (portaB == 0 && portaA == 0) {
                    portadalese = 0;
                    piket += portadalese;
                    portaB = 1;
                    numer++;
                    if (numer % 2 == 0) {
                        portaA = 1;
                    }
                } else {
                    portadalese = 1;
                    piket += portadalese;
                    portaB = 1;
                    numer++;
                    if (numer % 2 == 0) {
                        portaA = 0;
                    }
                }
            } else {
                printf("\nPorta hyrese duhet te jete 'A' ose 'B'!\n");
                return 0;
            }
            i++;
        }
        printf("\nPiket pas %d gjuajtjeve te njepasnjeshme %c eshte: %d\n", hedhjet, hyrja, piket);
    } else {
        printf("\nVendosni nje numer jonegativ!");
    }
    return 0;
}
