#include <stdio.h>

int main(){
    char name[50],age_str[3],sex[2];
    int age;
    printf("Enter your name: ");
    gets(name);
    printf("Hello There ");
    puts(name);
    
    int n_digits = 0;
    int n_non_digits = 0;
    int ch;
    while ((ch=getchar()) != EOF) {
       switch (ch) {
          case '0': case '1': case '2': case '3': 
          case '4': case '5': case '6': case '7':
          case '8': case '9':
             n_digits++;
             break;
          default: 
             n_non_digits++;
             break;
       }   
    }
    printf("จำนวนตัวเลข: %d, ไม่ใช่ตัวเลข: %d\n", n_digits, n_non_digits);

}
