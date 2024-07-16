#include <stdio.h>

void cutSquares(int N, int M) {
    while (N > 0 && M > 0) {
        if (N > M) {
            printf("%dx%d\n", M, M);
            N -= M;
        } else {
            printf("%dx%d\n", N, N);
            M -= N;
        }
    }
}

int main() {
    int N1 = 6, M1 = 5;
    printf("Cutting squares for N = %d, M = %d:\n", N1, M1);
    cutSquares(N1, M1);
    
    int N2 = 1, M2 = 1;
    printf("\nCutting squares for N = %d, M = %d:\n", N2, M2);
    cutSquares(N2, M2);
    
    int N3 = 9, M3 = 9;
    printf("\nCutting squares for N = %d, M = %d:\n", N3, M3);
    cutSquares(N3, M3);

    return 0;
}
