#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%s", n % 9 == 0 ? "True" : "False");
    return 0;
}