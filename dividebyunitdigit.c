#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

int compareDates(Date d1, Date d2) {
    if (d1.year != d2.year) {
        return d1.year - d2.year;
    } else if (d1.month != d2.month) {
        return d1.month - d2.month;
    } else {
        return d1.day - d2.day;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    Date oldestDate, currentDate;
    scanf("%d/%d/%d", &oldestDate.day, &oldestDate.month, &oldestDate.year);

    for (int i = 1; i < N; i++) {
        scanf("%d/%d/%d", &currentDate.day, &currentDate.month, &currentDate.year);
        if (compareDates(currentDate, oldestDate) < 0) {
            oldestDate = currentDate;
        }
    }

    printf("%02d/%02d/%04d\n", oldestDate.day, oldestDate.month, oldestDate.year);

    return 0;
}
