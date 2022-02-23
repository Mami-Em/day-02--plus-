#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("How many survey? ");
    int sum = 0;
    int array[n];
    for(int i = 0; i < n; i++)
    {
        array[i] = get_int("survey %i: ", i+1);
        sum = sum+array[i];
    } 
    // printf("%i\n", array[0]); 
    printf("The average of these survey is: %i\n", sum/n);
}
