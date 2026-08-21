#include<stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        long long count = 0;
        for(long long i = n - 1; i >= 0; i = (i - 1) / 2){
            count += (i + 1);
            if(i == 0) break;
        }
        printf("%lld\n", count);
    }
    return 0;
}
