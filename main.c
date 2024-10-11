#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 3, m = 3;
    int Arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int Temp[n][m];
    for (int i = 0; i < n; i++){
        if (i % 2 == 0) {
            for (int k = 0; k < m; k++){
                // printf("%d ", Arr[i][k]);
                Temp[i][k] = Arr[i][k];
            }
        } else {
            int cnt = 0;
            for (int k = n; k > 0; k--){
                // printf("%d ", Arr[i][k - 1]);
                Temp[i][cnt] = Arr[i][k - 1];
                cnt++;
            }
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++){
        for (int k = 0; k < m; k++){
            printf("%d", Temp[i][k]);
            if (k != 3){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
