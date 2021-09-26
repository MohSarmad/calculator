#include <stdio.h>
#include <stdlib.h>

int main() {

    float first_num;
    scanf("%f", &first_num);

    char operator = 0;
    do {scanf("%c", &operator);}while (operator == '\n');
    
    float sec_num = 0;
    do {scanf("%f", &sec_num);}while (sec_num == '\n');

    switch (operator) {
        case '+':
            printf("= %f\n", first_num + sec_num);
            break;

        case '-':
            printf("= %f\n", first_num - sec_num);
            break;

        case '/':
            sec_num != 0 ?  
                printf("= %f\n", first_num / sec_num) : 
                printf("Error: Invalid division (division by zero)!");
            break;

        case '*':
            printf("= %f\n", first_num * sec_num);
            break;
        
        default:
            break;
    }
    

    return 0;
}