#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char szam[1000];
    int osszeg = 0;

    printf("Kerem adjon meg egy egesz szamot: ");
    scanf("%s", szam);

    for (int i = 0; i < strlen(szam); i++) {
        if (isdigit(szam[i])) {
            osszeg += szam[i] - '0'; 
        }
    }

    printf("A szamjegyek osszege: %d\n", osszeg);

    return 0;
}
