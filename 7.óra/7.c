#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void rendezes(int tomb[], int meret) {
    for (int i = 0; i < meret - 1; i++) {
        for (int j = 0; j < meret - i - 1; j++) {
            if (tomb[j] > tomb[j + 1]) {
                int temp = tomb[j];
                tomb[j] = tomb[j + 1];
                tomb[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int also_hatar;
    int felso_hatar;

    printf("Hany db random szamot kersz?: ");
    scanf("%d", &n);

    printf("Also hatar: ");
    scanf("%d", &also_hatar);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso_hatar);

    srand(time(NULL));

    int tomb[n]; 

    printf("A generalt rendezett szamok: ");
    for (int i = 0; i < n; i++) {
        int veletlen;
        int ismetlodes;
        do {
            ismetlodes = 0;
            veletlen = rand() % (felso_hatar - also_hatar + 1) + also_hatar;
            for (int j = 0; j < i; j++) {
                if (tomb[j] == veletlen) {
                    ismetlodes = 1;
                    break;
                }
            }
        } while (ismetlodes);

        tomb[i] = veletlen;
    }

    rendezes(tomb, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", tomb[i]);
    }
    printf("\n");

    return 0;
}
