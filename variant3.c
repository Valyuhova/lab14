#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    system("chcp 65001");
    char str[100];
    int count = 0;

    printf("Введіть рядок: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i += 1) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            count += 1;
        }
    }

    printf("Кількість малих літер: %d\n", count);
    return 0;
}
