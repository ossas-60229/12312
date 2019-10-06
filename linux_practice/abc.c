#include <stdio.h>

int main () {
    for (int i = 'a'; i <= 'z'; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%c\n", i);
        }
    }
}
