#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        char s[200005];
        scanf("%d", &n);
        scanf("%s", s);
 
        int count1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                count1 = count1 + 1;
            }
        }
        int count0 = n - count1;
        if (count0 % 2 != 0) {
            printf("%d\n", count0);
            for (int i = 0; i < n; i++) {
                if (s[i] == '0') {
                    printf("%d ", i + 1);
                }
            }
            printf("\n");
        }
        else if (count1 % 2 == 0) {
            printf("%d\n", count1);
            if (count1 > 0) {
                for (int i = 0; i < n; i++) {
                    if (s[i] == '1') {
                        printf("%d ", i + 1);
                    }
                }
                printf("\n");
            }
        } 
        // If neither condition is met, it is impossible
        else {
            printf("-1\n");
        }
    }
 
    return 0;
}
