#include <stdio.h>

int main() {
    int num, count = 0;
    float sum = 0, avg;
    
    printf("Enter the numbers (enter -1 to stop):\n");
    
    while(1) {
        scanf("%d", &num);
        if (num == -1) break;
        sum += num;
        count++;
    }
    
    if (count == 0) {
        printf("No numbers were entered.\n");
    } else {
        avg = sum / count;
        printf("Sum = %.2f\n", sum);
        printf("Average = %.2f\n", avg);
    }
    
    return 0;
}
