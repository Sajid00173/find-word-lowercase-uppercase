#include <stdio.h>
int main()
{
    char str[100];
    int lower=0, upper=0, word=0;

    printf("Enter a string: ");
    gets(str);

    for (int i=0; str[i]!='\0'; i++) {
        if(str[i]==' '){
            word++;
        }

        else if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
    }
    printf("Word: %d\n", word+1);
    printf("Lowercase: %d", lower);
    printf("\nUppercase: %d", upper);



    return 0;
}

