#include <stdio.h>
#ifndef _countof
#define _countof(array) (sizeof(array) / sizeof(array[0]))
#endif
#include <stdbool.h>

int second(void) {
    const char* name = "Derek\n";
    printf("%s", name);
    return 0;
}

int third(void) {
    int idade;
	printf("Digite sua idade: ");
    scanf_s("%d", &idade);
	printf("Sua idade é: %d\n", idade);
    return 0;

}


int firstprogram(void) {
    char name[30];
    int dob;
    int age;
    long long phone;
	bool isNotValid = false;
	bool isValid = true;

    printf("Let's register you \n");
    printf("Enter your name: ");
    scanf_s("%s", name, (unsigned)_countof(name)); // Adiciona o tamanho do buffer
    printf("Enter your birthday date: ");
    scanf_s("%d", &dob);
    printf("Enter your age: ");
    scanf_s("%d", &age);
    printf("Enter your phone number: ");
	scanf_s("%lld", &phone);
	printf("Thank you for submit!\n");
    printf("This is your data: \n");
    printf("Name: %s\n", &name);
    printf("Your birthday date: %d\n ", dob);
    printf("Your age is: %d\n", age);
	printf("Your phone number is: %lld\n", phone);
    return 0;
}



int main(void) {
    printf("Hello, World!\n");
 /*   second();
    third();*/
	firstprogram();
    return 0;
}
