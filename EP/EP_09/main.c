#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
    FILE *file = fopen("entrada.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    Stack *s = s_create();
    
    char ch;
    int v = 1; 

    while ((ch = fgetc(file)) != EOF) {

        if (ch == '(' || ch == '[') {
            s_push(s, ch);
        } 
        
        else if (ch == ')' || ch == ']') {

            if (s_is_empty(s)) {
                v = 0;
                break;
            }

            char top_char = (char)s_pop(s);

            if ((ch == ')' && top_char != '(') || (ch == ']' && top_char != '[')) {
                v = 0;
                break;
            }
        }
    }

    if (!s_is_empty(s)) {
        v = 0;
    }

    if (v) {
        printf("success\n");
    } else {
        printf("fail\n");
    }

    s_free(s);
    fclose(file);

    return 0;
}