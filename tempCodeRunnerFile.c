#include <stdio.h>
#include <string.h>

void rearrangeString(char* str) {
    int count_z = 0, count_e = 0, count_r = 0, count_o = 0, count_n = 0;
    int len = strlen(str);

    // Count the occurrences of 'z', 'e', 'r', 'o', and 'n'
    for (int i = 0; i < len; i++) {
        switch (str[i]) {
            case 'z':
                count_z++;
                break;
            case 'e':
                count_e++;
                break;
            case 'r':
                count_r++;
                break;
            case 'o':
                count_o++;
                break;
            case 'n':
                count_n++;
                break;
        }
    }

    // Check if the string can be rearranged
    if ((count_z == count_e) && (count_e == count_r) && (count_r == count_o) && (count_o == count_n)) {
        for (int i = 0; i < count_o; i++) {
            printf("one");
        }
        for (int i = 0; i < count_z; i++) {
            printf("zero");
        }
    } else {
        printf("-1");
    }
}

int main() {
    char str[1001];
    scanf("%s", str);
    rearrangeString(str);
    return 0;
}
