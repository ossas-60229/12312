#include <stdio.h>

int main () {
    int a, b, c; scanf("%d%d", &a, &b);
    int cnt = 0;
    while (a--) cnt++;
    while (b--) cnt++;
    printf("%d\n", cnt);
}
