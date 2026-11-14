#include <stdio.h>

int main(){
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    char like[50];
    printf("What you like the most?: ");
    scanf("%s", like);
    printf("Hello %s!\n", name);
    printf("You are %d years old.\n", age);
    printf("You like %s.\n", like);
    printf("Welcome to C programming %s!\n", name);
    return 0;
}