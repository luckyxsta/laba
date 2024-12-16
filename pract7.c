#include <stdio.h>
#include <string.h>

int main(){
    char string[100000];
    printf("Введите строку: ");
    fgets(string, sizeof(string), stdin);
    char result[1000000];
    int cnt = 0;

    int j = 0;
    for (int i = 0; i < strlen(string); i++){
        if (string[i] != ' '){
            result[j] = string[i];
            j++;
        } else {
            cnt++;
        }
    }
    result[j] = '\0';
    printf("Строка без пробелов: %s\n", result);
    printf("Кол-во удаленных пробелов: %d\n", cnt);
}