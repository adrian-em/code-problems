#include <stdio.h>

int isPrime(int p) {
    for (int i=2;i<p;i++) {
        if (p%i==0 && p!=i) {
            return 0;
        }
    }
    return 1;
}

int main(int argc,char *argv[]) {
    for (int i=1;i<101;i++) {
        printf("%d -> %d\n",i,isPrime(i));
    }
}