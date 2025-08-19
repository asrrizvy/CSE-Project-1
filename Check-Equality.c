#include <stdio.h>
int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    if (x == y)
        printf("Both numbers are equal.\n");
    else
        printf("Numbers are not equal.\n");

    return 0;
}
