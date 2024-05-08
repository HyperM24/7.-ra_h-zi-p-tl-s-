#include <stdio.h>
#include <ctype.h>  
#include <stdbool.h>  


bool isStrongPassword(char password[]) {
    bool kisbetu = false;
    bool nagybetu = false;
    bool szam = false;
    int hossz = 0;

    
    while (password[hossz] != '\0') {
        hossz++;
    }

    if (hossz < 8) {
        return false;  
    }

    
    for (int i = 0; password[i] != '\0'; i++) {
        if (islower(password[i])) {
            kisbetu = true;
        } else if (isupper(password[i])) {
            nagybetu = true;
        } else if (isdigit(password[i])) {
            szam = true;
        }
    }

    
    return kisbetu && nagybetu && szam;
}

int main() {
    char password[100];
    printf("Kerem adjon meg egy jelszot ('*' vegen): ");

    
    while (1) {
        scanf("%s", password);
        if (password[0] == '*') {
            break;  
        }

        
        if (isStrongPassword(password)) {
            printf("A jelszo eros.\n");
        } else {
            printf("A jelszo nem eros. Kisbetu, nagybetu es szamjegy szukseges, legalabb 8 karakter hosszu.\n");
        }

        printf("Kerem adjon meg egy jelszot ('*' vegen): ");
    }

    return 0;
}
