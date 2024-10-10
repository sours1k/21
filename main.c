#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 3, m = 3;
    int Arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int Temp[n][m];
    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++){
            printf("[k:%d][i:%d]:%d", k, i, Arr[k][i]);
            if (k != 3){
                printf(" ");
            }
        }
            printf("\n");
    }

    // for (int i = 0; i < n; i++){
    //     for (int k = 0; k < m; k++){
    //         printf("%d", Temp[i][k]);
    //         if (k != 3){
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    return 0;
}