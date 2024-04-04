#include <stdio.h>


union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {

    union Data data;

    printf("Enter the integer: ");
    scanf("%d", &data.intValue);

    printf("Integer value: %d\n", data.intValue);

    printf("Enter the float value: ");
    scanf("%f", &data.floatValue);

    printf("Float value: %.2f\n", data.floatValue);

    printf("Enter the character: ");
    scanf(" %c", &data.charValue);
    
    printf("Character value: %c\n", data.charValue);

    return 0;
}
