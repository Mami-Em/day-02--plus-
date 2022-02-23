#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main() {
    string get = get_string("what is your name: ");
    int n = strlen(get);
    printf("The name inserted was %s\nWith %i characters\n", get, n);
    return 0;
}
