#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int max = -1e9;  
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max) max = a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) sum += max - a[i];
    printf("%d", sum);
    return 0;
}
