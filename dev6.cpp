#include <stdio.h>

int main() {
int piket;
char nota;

printf("Ju lutem vendosni piket e marra: ");
scanf("%d",&piket);

if ( piket > 100 ) {
printf("Numri i pikeve nuk mund te jete me i madh se 100.\n");
return 1 ;
}

switch( piket / 10)

{
    case 10:
    case 9:
       nota='A';
       break;
    case 8:
       nota='B';
       break;
    case 7:
       nota='c';
       break;
    case 6:
       nota='D';
       break;
    case 5:
       nota='F';
       break;
    default:
       nota='F';

}
printf("Nota juaj eshte:%c\n",nota);

return 0;
     }
