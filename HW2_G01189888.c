#include <stdio.h>

int get_input();
int compute_sum();

int main(void) {
    int i = 0;
    compute_sum(get_input());
}

int get_input() {
    int i = 0;
    printf("Enter an integer [1,999999]\n");
    scanf("%d", &i);
    return i;
}

int compute_sum(int val) {
    if (val < 1000000) {
        int sum = 0;
        int i = 0;
        while (i < val) {
            if (i % 3 == 0 || i % 5 == 0){
                printf("%d\n", i);
                sum += i;
            }
            i++;
        }
        printf("Sum of all multiples of 3 or 5 is %d", sum);
        return 0;
    } else {
        printf("Number out of range");
        return 0;
    }
}
