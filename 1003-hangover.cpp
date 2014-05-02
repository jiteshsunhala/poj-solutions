#include<cstdio>
 
int main(){
    
    float sum, mat[300], n;
    int k;
    for(int i=2;i<300;i++){
        mat[i] = (float)1 / (float)i;
    }
    while(1){
        scanf("%f", &n);
        if(n==0)
            break;
        sum = 0;
        k=2;
        while(sum < n){
            sum += mat[k];
            k++;
        }
        printf("%d card(s)\n", k-2);
    }
    return 0;
}
