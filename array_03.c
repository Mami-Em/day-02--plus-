#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string encrypt(string l, int x) {
    char a;
    for (int i = 0; i < x; i++)
    {
        a = l[i] - 40;
        printf("%c", a);
    }
    printf("\n"); 
    // total output = string
    printf("safidy: \n1-dercypt\n2-mijanona");
    int val = get_int("");
    if(val == 1) {
        for (int i = 0; i < x; i++) {
        /* code */
            char x = l[i] + 40;
            printf("%c", x);
            printf("\n");
        // printf("%c tyh leh fct\n\n", b);
        }
    } else if(val ==2) {

    } else {
        printf("U dumb!");
    }
    return 0;
}


int main() {
    string x = get_string("ampidiro ny lahatsoratra: ");
    int d = strlen(x);
    encrypt(x, d);
    return 0;
}