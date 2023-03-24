#include <stdio.h>

void printSquares(int N, int M) {
    int remaining_area = N * M;
    while (remaining_area > 0) {
        int side = 1;
        while (side * side <= remaining_area) {
            side++;
        }
        side--;
        printf("%d ", side * side);
        remaining_area -= side * side;
    }
    printf("\n");
}

int main() {
    int N;
    int M;
    printf("Enter the values of N and M:\n");
    scanf("%d %d",&N,&M);
    printSquares(N, M);
    return 0;
}
