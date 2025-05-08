#include<stdio.h>
#include<ctype.h>
#include<string.h>


char caesar(char c, int key){
    int d = key;
    char ch;
    if (isalnum(c)) {
            if (islower(c)) {
                if(d > 'z'){ //'z' == 122
                    ch = d - 26;
                } else if(d < 'a') { //'a' == 97
                    ch = d + 26;
                } else {
                    ch = d;
                }
            }
            if (isupper(c)) {
                if(d > 'Z'){
                    ch = d - 26;
                } else if(d < 'A') {
                    ch = d + 26;
                } else {
                    ch = d;
                }
            }
            if (isdigit(c)) {
                if(d > 57){
                    ch = d - 10;
                } else if(d < 48) {
                    ch = d + 10;
                } else {
                    ch = d;
                }
            }
        }
        return ch;
}

int main() {
    char text[500];
    char key[500];
    char result[500];
    int choice;

    printf("\nEnter a message to encrypt/decrypt: ");

    scanf("%s", &text);

    printf("\nEnter the key: ");

    scanf("%s", &key);

    if(strlen(text) > strlen(key)){
        int lenText = strlen(text);
        int lenKey = strlen(key);
        for(int i = 0; i < (lenText - lenKey); i++){
            key[lenKey + i] = key[i];
        }
        key[lenText] = '\0'; // kept getting junk data at end of string? this prevented that
    }
    printf("\nPress 1 to encrypt, 2 to decrypt:\t");
    scanf("%d", &choice);
    if (choice == 1) {
        for(int i = 0; i < strlen(text); i++){
            result[i] = caesar(text[i], (text[i] + (key[i] - 'a')));
        }
        result[strlen(text)] = '\0'; // same problem, same klugey fix
    } else if(choice == 2) {
        for(int i = 0; i < strlen(text); i++){
            result[i] = caesar(text[i], (text[i] - (key[i] - 'a')));
        }
        result[strlen(text)] = '\0'; // same problem, same klugey fix
    } else {
        printf("\nMajor Error: %d is not a valid choice", choice);
    }

    printf("\n\nResults: %s", result);
    return 0;
}

//Problems:
//figuring out that bottom error where junk data kept getting added to the end of the string
//Cleaning the textual data that comes in - remove white space, for instance - from both key and text
