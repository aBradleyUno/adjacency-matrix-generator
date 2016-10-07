//
//  main.c
//  Matrices
//
//  Created by Alexander Bradley on 10/7/16.
//  Copyright © 2016 Ingenieria de Software UAZ. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char size = ( rand() % 10) + 1, matriz[size][size], entrantes[size], salientes[size];
    int counter = 0, i, j;
    
    for ( i = 0; i < size; i++){
        entrantes[i] = 0;
        salientes[i] = 0;
        for (int j = 0; j < size; j++) {
            matriz[i][j] = rand() % 2;
        }
    }
    
    printf("La matriz es de %d X %d\n\n", size, size);
    
    for ( i = 0; i < size; i++){
        if (matriz[i][i]){
            counter+=1;
        }
        printf("|");
        for ( j = 0; j < size; j++) {
            printf(" %d |",matriz[i][j]);
            if (matriz[i][j]){
                salientes[i]+=1;
                entrantes[j]+=1;
            }
        }
        printf("\n\n");
    }
    
    printf("El numero de lazos es de %d\n\n", counter);
    
    for (i = 0; i < size; i++){
        printf("El nodo %d tiene:\n", i);
        printf("%d entrantes\n", entrantes[i]);
        printf("%d salientes\n", salientes[i]);
    }
    
    return 0;
}
