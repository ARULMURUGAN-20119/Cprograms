#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s); // Accepting input string
    
    int n = strlen(s);
    int flag = 0;
    for (int len = 1; len <= n/2; len++) {
        if (n % len == 0) { // If len divides n evenly
            int is_repeated = 1;
            for (int i = len; i < n; i++) {
                if (s[i] != s[i % len]) {
                    is_repeated = 0; // If substring doesn't repeat, break out of loop
                    break;
                }
            }
            if (is_repeated) {
                flag = 1; // Set flag to true
                break; // No need to check other substring lengths
            }
        }
    }
    if (flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
