/*
** EPITECH PROJECT, 2024
** password_generator
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void generate_password(char *password, int length)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=";
    int charsetSize = strlen(charset);

    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        password[i] = charset[rand() % charsetSize];
    }
    password[length] = '\0';
}

int main()
{
    int length;

    printf("Enter the length of the password: ");
    scanf("%d", &length);
    char password[length + 1];
    generate_password(password, length);
    printf("Generated Password: %s\n", password);
    return 0;
}

