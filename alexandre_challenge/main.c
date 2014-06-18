#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	**getCombinations(char *str)
{
    char **tab;
    int size_str = strlen(str);
    int	size_array = (1 << size_str) + 1;
    int i;

    tab = malloc(size_array * sizeof(char *));
    tab[--size_array] = 0;
    while (--size_array >= 0) {
        tab[size_array] = strdup(str);
        for (i = size_str - 1; i >= 0; i--) {
            tab[size_array][i] -= (size_array & (1 << i)) ? ('a' - 'A') : 0;
        }
    }
    return (tab);
}

int main(void)
{
    char **combinations = getCombinations("bonj");
    for (; *combinations; combinations++) {
        printf("%s\n", *combinations);
    }
    return (0);
}
