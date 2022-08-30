#include <stdio.h>

int main() {
    int i = 0;
    get_input();
    compute_sum(i);
    return 0;
}

int get_input() {
    printf("Enter an integer [1,999999]\n");
    scanf("%d", &i);
}

int compute_sum(int val) {
    while (val > 0) {
        if (val % 3 == 0 || val % 5 == 0){
            printf("%d\n", val);
        }
        val--;
    }
}