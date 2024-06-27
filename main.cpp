#include <iostream>
#include <string>

using namespace std;

int string_length(const char* str);

int main() {
    int choice;
	char str[] = "Hello, World!";
	
	cout << "Enter your choice: ";
	cin >> choice;

    switch (choice) {
    case 1:
        printf("String length: %d\n", string_length(str));
        break;
    default:
        printf("Invalid choice!\n");
        break;
    }

	system("pause");
	return 0;
}

int string_length(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}