#include <stdio.h>

int[] count() {
    int k = 0;
    for(int i = 0; i < inputDist.size; i++) {
        if(start <= inputDist.data[i] && inputDist.data[i] <= end) {
            answer.data[k++] = inputDist.data[i]; 
        }
    }
}


int main(){
    int l, r, n;
    scanf("%d %d %d", &l, &r, &n);    
}