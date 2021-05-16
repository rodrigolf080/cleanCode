#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printSpaces(int x, int y){
    int i;
    for (i = 0; i < x-y; i++){
        printf(" ");
    }

}

void printHashes(int x, int y){
    int ii;
    for (ii = 0; ii < y; ii++){
        printf("#");
    }

}

void solve(int x){
    int y = 0;
    while (y < x){
        y++;
        printSpaces(x, y);
        printHashes(x, y);
        printf("  ");
        printHashes(x, y);
        printSpaces(x, y);
        printf("\n");
    }
}

int main(){
    int x;
    printf( ">>> ");
    scanf("%d", &x);
    
    solve(x);

    return 0;
}

