#include <stdio.h>

int rows, cols;
char matrix[501][501];
int fillMatrix(){
    if(rows > 500 || cols > 500 || rows < 3 || cols < 3)
        return 0;
    for(int i = 0; i < rows; i++){
        char a[502];
        scanf("%s", a);
        for(int j = 0; j < cols; j++){
            matrix[i][j] = a[j];
            if(i % 2 == 0){
                if(matrix[i][j] == '#')
                    return 0;
            }
        }
        int hasWater = 0;
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] == 'o'){
                hasWater = 1;
                break;
            }
        }
        if(i == 0){
            if(!hasWater)
                return 0;
        }else{
            if(hasWater)
                return 0;
        }
    }
    return 1;
}

int waterMatrix(){
    for(int i = 1; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] == '#'){
                int x = 1;
                if(matrix[i - 1][j] == 'o'){
                    if(j + 1 < cols){
                        matrix[i - 1][j + 1] = 'o';
                    }
                    while(j - x >= 0 && j - x + 1 >= 0){
                        if(matrix[i][j - x + 1] == '#'){
                            if(matrix[i][j - x] == '.'){
                                matrix[i][j - x] = 'o';
                            }
                            matrix[i - 1][j - x] = 'o';
                        }else{
                            break;
                        }
                        x++;
                    }
                }
            }
            if(matrix[i][j] == '.'){
                if(matrix[i - 1][j] == 'o'){
                    matrix[i][j] = 'o';
                }
            }
        }
    }
    return 1;
}

int main(){
    scanf("%d %d", &rows, &cols);
    if(fillMatrix() == 1 && waterMatrix() == 1){
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                printf("%c", matrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
