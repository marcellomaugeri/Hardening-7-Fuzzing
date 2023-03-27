#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH];

    printf("Inserisci una parola: ");
    scanf("%s", input);

    if(input[0]=='C') {
        if(input[1]=='R') {
            if(input[2]=='A') {
                if(input[3]=='S') {
                    if(input[4]=='H') {
                        printf("Crash in corso...\n");
                        abort();
                    }
                }
            }
        }
    }

    return 0;
}