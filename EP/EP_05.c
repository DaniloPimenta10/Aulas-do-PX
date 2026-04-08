#include <stdio.h>
#include <string.h>

int split_text(char *text, char *part1, char *part2) {
    int ltext = strlen(text);
    int ver = 0;
    int espaco = -1;

    for (int i = 0; i < ltext && ver == 0; i++) {
        if (text[i] == ' ') {
            ver = 1;
            espaco = i;
        }
    }

    if (ver == 0) return 0;

    for (int j = 0; j < espaco; j++) {
        part1[j] = text[j];
    }
    part1[espaco] = '\0';

    int k = 0;
    for (int j = espaco + 1; j < ltext; j++) {
        part2[k] = text[j];
        k++;
    }
    part2[k] = '\0';

    return 1;
}

int main() {
    char text[] = "Bom dia";
    char part1[20], part2[20];

    if (split_text(text, part1, part2)) {
        printf("Parte 1: %s\nParte 2: %s\n", part1, part2);
    }
    return 0;
}