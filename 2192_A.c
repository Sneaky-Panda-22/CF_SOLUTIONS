#include<stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n;
        char s[110];
        scanf("%d", &n);
        scanf("%s", s);
 
        int transitions = 0;
        int all_same = 1;//flag
 
        for (int i = 0; i < n; i++) {
            int current = i;
            int next = (i + 1) % n;
 
            if (s[current] != s[next]) {
                transitions = transitions + 1;
                all_same = 0;
            }
        }
 
        if (all_same == 1) {
            printf("1\n");
        } else {
            int result = transitions + 1;
            if (result > n) {
                result = n;
            }
            
            printf("%d\n", result);
        }
    }
 
    return 0;
}
