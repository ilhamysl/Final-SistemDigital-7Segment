#include <stdio.h>

int main(){

    int SevenSegment;

    printf(" AAA \n");
    printf("B   C\n");
    printf("B   C\n");
    printf(" DDD \n");
    printf("E   F\n");
    printf("E   F\n");
    printf(" GGG \n");

    printf("Masukkan angka desimal dari 0-9 : ");
    scanf("%d", &SevenSegment);

    if(SevenSegment == 0){r
        printf(" ###\n");
        printf("#   #\n");
        printf("#   #\n");
        printf("#   #\n");
        printf("#   #\n");
        printf(" ###\n\n");
        printf("A = 1 | B = 1 | C = 1 | D = 0 | E = 1 | F = 1 | G = 1");
    }
    else if(SevenSegment == 1){
        printf("\n");
        printf("    #\n");
        printf("    #\n\n");
        printf("    #\n");
        printf("    #\n");
        printf("\n\n");
        printf("A = 0 | B = 0 | C = 1 | D = 0 | E = 0 | F = 1 | G = 0");
    }
    else if(SevenSegment == 2){
        printf(" ###\n");
        printf("    #\n");
        printf("    #\n");
        printf(" ###\n");
        printf("#\n");
        printf("#\n");
        printf(" ###\n\n");
        printf("A = 1 | B = 0 | C = 1 | D = 1 | E = 1 | F = 0 | G = 1");
    }
    else if(SevenSegment == 3){
        printf(" ###\n");
        printf("    #\n");
        printf("    #\n");
        printf(" ###\n");
        printf("    #\n");
        printf("    #\n");
        printf(" ###\n\n");
        printf("A = 1 | B = 0 | C = 1 | D = 1 | E = 0 | F = 1 | G = 1");
    }
    else if(SevenSegment == 4){
        printf("#   #\n");
        printf("#   #\n");
        printf(" ###\n");
        printf("    #\n");
        printf("    #\n");
        printf("\n\n");
        printf("A = 0 | B = 1 | C = 1 | D = 1 | E = 0 | F = 1 | G = 0");
    }
    else if(SevenSegment == 5){
        printf(" ###\n");
        printf("#\n");
        printf("#\n");
        printf(" ###\n");
        printf("    #\n");
        printf("    #\n");
        printf(" ###\n\n");
        printf("A = 1 | B = 1 | C = 0 | D = 1 | E = 0 | F = 1 | G = 1");
    }
    else if(SevenSegment == 6){
        printf(" ###\n");
        printf("#\n");
        printf("#\n");
        printf(" ###\n");
        printf("#   #\n");
        printf("#   #\n");
        printf(" ###\n\n");
        printf("A = 1 | B = 1 | C = 0 | D = 1 | E = 1 | F = 1 | G = 1");
    }
    else if(SevenSegment == 7){
        printf(" ###\n");
        printf("    #\n");
        printf("    #\n");
        printf("    #\n");
        printf("    #\n");
        printf("\n\n");
        printf("A = 1 | B = 0 | C = 1 | D = 0 | E = 0 | F = 1 | G = 0");
    }
    else if(SevenSegment == 8){
        printf(" ###\n");
        printf("#   #\n");
        printf("#   #\n");
        printf(" ###\n");
        printf("#   #\n");
        printf("#   #\n");
        printf(" ###\n\n");
        printf("A = 1 | B = 1 | C = 1 | D = 1 | E = 1 | F = 1 | G = 1");
    }
    else if(SevenSegment == 9){
        printf(" ###\n");
        printf("#   #\n");
        printf("#   #\n");
        printf(" ###\n");
        printf("    #\n");
        printf("    #\n");
        printf(" ###\n\n");
        printf("A = 1 | B = 1 | C = 1 | D = 1 | E = 0 | F = 1 | G = 1");
    }
    else{
        printf("Masukkan angka 0-9 :");
    }

    return 0;
}