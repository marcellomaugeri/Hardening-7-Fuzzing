#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char input[MAX_LENGTH];

    printf("Inserisci una parola: ");
    scanf("%s", input);

    if (strcmp(input, "CRASH") == 0) {
        printf("Crash in corso...\n");
        abort();
    } else {
        printf("La parola inserita è %s\n", input);
    }

    return 0;
}