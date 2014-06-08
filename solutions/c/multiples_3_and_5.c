#include <stdio.h>


int main(int argc, char *argv[]) {
    unsigned int sum = 0;
    for (int i=0;i<1000;i++) {
        if (i%3==0 || i%5==0) {
            sum += i;
        }
    }
    printf("%u", sum);
}