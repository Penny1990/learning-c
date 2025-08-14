#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void spielStarten(char * name){
   
 
    printf("Welche Zahl denke ich mir zwischen 1 und 100 habe ich mir ausgedacht?\n");
    int zufall = rand() % 100 + 1;
    int tipp = 0;
    int score = 0;
   
    while (tipp != zufall){
        int abstand = abs(zufall-tipp);
        printf("dein Tipp: ");
       
        if(scanf("%d", &tipp) != 1){
         printf("Bitte nur Zahlen eingeben!\n");
         while (getchar()!= '\n');
         continue;
        }
        score++;
        if(tipp < zufall){
            printf("deine Zahl ist zu klein\n");
        }
        else if(tipp > zufall){
            printf("deine Zahl ist zu groß\n");
        }
        else if(tipp == zufall){
            printf("Richtig, die gesuchte zahl war die %d !\n du hast %d Versuche gebraucht", zufall, score);
            break;
        }
        if(abstand <= 5){
            printf("Deine zahl ist nah dran!\n");
        }
    }
}
int main(){
 
    printf("Bitte Name eingeben:");
    char name[20];
    char nochmal = 'j';
    scanf("%20s", name);
   
   
    srand(time(NULL));
   
    while (nochmal == 'j' || nochmal =='J') {
    spielStarten(name);
    printf("\n %s möchtest du nochmal spielen ? (j/n):",name);
    scanf(" %c", &nochmal);
    }
    
    return 0;
}