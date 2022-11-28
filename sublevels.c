#include <stdio.h>

int main(void) {
    int an;
    printf("HENRY MATONIS\n");
    printf("11/28/22\n");
    for (;;) {
        printf("\nEnter Atomic Number: ");
        scanf("%d", &an);
        printf("\n");

        if (an > 118 || an < 1) {
            printf("Invalid");
        } else if (an == 29) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^1, 3d^10");
        } else if (an == 79) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^1, 4f^14, 5d^10");
        } else if (an < 3) { //He
            printf("1s^%d", an);
        } else if (an < 5) {
            printf("1s^2, 2s^%d", an - 2);
        } else if (an < 11) { //Ne
            printf("1s^2, 2s^2, 2p^%d", an - 4);
        } else if (an < 13) {
            printf("1s^2, 2s^2, 2p^6, 3s^%d", an - 10);
        } else if (an < 19) { //Ar
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^%d", an - 12);
        } else if (an < 21) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^%d", an - 18);
        } else if (an < 31) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^%d", an - 20);
        } else if (an < 37) { //Kr
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^%d", an - 30);
        } else if (an < 39) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^%d", an - 36);
        } else if (an < 49) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^%d", an - 38);
        } else if (an < 55) { //Xe
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^%d", an - 48);
        } else if (an < 57) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^%d", an - 54);
        } else if (an < 71) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^%d", an - 56);
        } else if (an < 81) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^%d", an - 70);
        } else if (an < 87) { //Rn
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10, 6p^%d", an - 80);
        } else if (an < 89) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10, 6p^6, 7s^%d", an - 86);
        } else if (an < 103) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10, 6p^6, 7s^2, 5f^%d", an - 88);
        } else if (an < 113) {
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10, 6p^6, 7s^2, 5f^10, 6d^%d", an - 102);
        } else if (an < 119) { //Og
            printf("1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^2, 3d^10, 4p^6, 5s^2, 4d^10, 5p^6, 6s^2, 4f^14, 5d^10, 6p^6, 7s^2, 5f^10, 6d^10, 7p^%d", an - 112);
        }
        printf("\n");
    }
}
