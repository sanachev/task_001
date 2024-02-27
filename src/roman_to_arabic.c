#include <stdio.h>
#define LENGTH 15

void input(char *data);
void calculate(char *data, int *result);
void output(int result);

int main(void) {
    char data[LENGTH + 1] = {0};
    int result = 0;

    input(data);

    calculate(data, result);

    output(result);

    return 0;
}

void input(char *data) { scanf("%s", data); }

void calculate(char *data, int *result) { /* some code */
}

void output(int result) {
    if (result == 0) {
        printf("Be careful, Verter");
    } else {
        printf("%d", result);
    }
}