//การตั้งชื่อตัวแปร ควรคำนึงการอ่านแล้วเข้าใจได้ง่าย ถึงแม้ว่า a = b * c; จะถูกหลักไวยกรณ์ของภาษา C แต่จุดประสงค์ของการใช้งานไม่ชัดเจน



#include <stdio.h>
int main(){
    printf("size of char = %d byte\n", sizeof(char));
    printf("example of char is \'a\'\n");
    printf("sizeof(int)    = %d bytes\n", sizeof(int));
    printf("example of int is \"1234\"\n");
    printf("sizeof(float)  = %d bytes\n", sizeof(float));
    printf("example of float is \"12.34\"\n");
    printf("sizeof(double) = %d bytes\n", sizeof(double));
    printf("example of double is \"12.34\"\n");
    printf("sizeof(short)  = %d bytes\n", sizeof(short));
    printf("example of short is \"123\"\n");
    printf("sizeof(long)   = %d bytes\n", sizeof(long));
    printf("example of long is \"123456\"\n\n");
    printf("You can print \\ with \"\\\\\"\n");
    printf("You can print a Question mark (?) with \"\\?\"\n");
    printf("You can print it on the next line with \"\\n\"\n");
    printf("You can print a single quote with \" \\\' \"\n");
    printf("You can print a double quote with \" \\\" \"\n");
}
