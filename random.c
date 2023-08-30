#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() { //in ASCII, capital letters are within range 65 to 90
    int randomLetterASCII = (rand() % (90 + 1 - 65)) + 65; //returns random integer from 65 to 90

    return (char)randomLetterASCII; //typecasts randomLetterASCII into appropriate ASCII character
}

