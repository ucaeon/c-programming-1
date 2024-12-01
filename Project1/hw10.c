#include <stdio.h>
#include <string.h>

typedef struct city {
    char name[50];
    char country[50];
    int population;
} City;

int main() {
    City cities[3];
    int i;

    printf("Input three cities:\n");

    for (i = 0; i < 3; i++) {
        printf("Name> ");
        fgets(cities[i].name, sizeof(cities[i].name), stdin);
        cities[i].name[strlen(cities[i].name) - 1] = '\0';

        printf("Country> ");
        fgets(cities[i].country, sizeof(cities[i].country), stdin);
        cities[i].country[strlen(cities[i].country) - 1] = '\0';

        printf("Population> ");
        scanf("%d", &cities[i].population);
        getchar();
    }

    printf("\nPrinting the three cities:\n");

    for (i = 0; i < 3; i++) {
        printf("%d. %s in %s with a population of %d people\n", i + 1, cities[i].name, cities[i].country, cities[i].population);
    }
}
