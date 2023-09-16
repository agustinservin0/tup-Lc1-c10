#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("%d\n", i);
        i += 2;
    } while (i <= 10);

    return 0;
}


int main() {
    int i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i= i + 2;
    }

    return 0;
}