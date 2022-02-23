#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    string x = get_string("ampidiro ny lahatsoratra: ");
    int d = strlen(x);
    for (int i = 0; i < d; i++)
    {
        /* code */
        char a = x[i] - 40;
        // char b = a + 40; tyh ny solution fa mila atao fct
        printf("%c", a);
        // printf("%c tyh leh fct\n\n", b);
    }
    printf("\n"); 
    return 0;
}