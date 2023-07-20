#include <stdio.h>
 
int main() {
    int n1, i;
    scanf("%i", &n1);
    for(i = 1; i <=10; i++){
        printf("%i x %i = %i\n", i, n1, n1*i);
    }
    return 0;
}