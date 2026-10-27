#include <stdio.h>
int main()
{
    int n, i, j, t;
    int a[1005];
	scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i<=n-1; i++) {
        for (j = 1;j<= n-i;j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    if (n % 2 != 0) {
        printf("%.1f", (double)a[n / 2 + 1]);
    } else {
        printf("%.1f", (a[n / 2] + a[n / 2 + 1]) / 2.0);
    }

    return 0;
}

