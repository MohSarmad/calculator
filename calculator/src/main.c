#include <stdio.h>

int main() {

    char fir_num = fgetc(stdin); if (fir_num == '\n') {printf("dont enter!"); return 0;}
    char oper    = fgetc(stdin); if (oper    == '\n') {printf("dont enter!"); return 0;}
    char sec_num = fgetc(stdin); if (sec_num == '\n') {printf("dont enter!"); return 0;}
    char result  = 0;

    if (oper == '+') {
        result = fir_num + sec_num;
    }
    if (oper == '-') {
        result = fir_num - sec_num;
    }
    if (oper == '*') {
        result = fir_num * sec_num;
    }
    if (oper == '/') {
        result = fir_num / sec_num;
    }
    

    return 0;
}
