#include <stdio.h>

int main() {
    float a;
    float b;
    float luas;
    
    scanf("%f", &a);
    scanf("%f", &b);
    
    luas = (a * b) / 2;
    
    printf("%.2f",luas);
    
    return 0;
}
