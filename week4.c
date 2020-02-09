//ฟังก์ชัน printf, scanf และ getchar เป็นตัวอย่างของฟังก์ชันที่อยู่ใน standard library functions
//ฟังก์ชัน sqrt, exp และ log เป็นตัวอย่างของฟังก์ชันที่อยู่ใน math library functions
//หากโปรแกรมของเรามีการใช้ฟังก์ชันเหล่านี้ เวลาคอมไพล์โปรแกรม เราจำเป็นต้องคอมไพล์ (link) โปรแกรมของเราเข้ารวมกับโค้ดของฟังก์ชันเหล่านี้ (gcc มีโค้ดของฟังก์ชันกลุ่มนี้อยู่ในไลบรารีที่ถูกติดตั้งไว้แล้วตอนที่เรารัน pacman -S gcc-libs)
//โค้ดของ standard library functions ถูกเก็บอยู่ใน /usr/lib/libc.a
//โค้ดของ math library functions ถูกเก็บอยู่ใน /usr/lib/libm.a 
//หากเราต้องการใช้ฟังก์ชันใน math library เราควรต้อง #include <math.h> ด้วย
//ภาษา C ยังกำหนดให้ผู้ใช้สามารถกำหนด storage class ให้กับตัวแปร ใน 4 ลักษณะ ผ่านการใช้ keyword auto, register, extern, และ static เพื่อช่วยกำหนดช่วงชีวิตในการเก็บข้อมูลของตัวแปรใน memory
//storage class 4 ประเภทนี้ สามารถแบ่งออกเป็น 2 storage duration ซึ่งคือ automatic storage duration และ static storage duration
//auto และ register ใช้กำหนดตัวแปรที่เป็น automatic storage duration  ซึ่งก็คือ ตัวแปรเหล่านี้จะถูกกำหนดขึ้นมาใน memory เมื่อโปรแกรมเข้าไปทำงานใน block ที่ถูกแปรเหล่านี้ถูกประกาศขึ้น และเมื่อโปรแกรมออกจาก block ตัวแปรเหล่านี้จะไม่อยู่ใน memory อีกต่อไป
//ตัวแปร local เป็นตัวแปรที่อยู่ใน automatic storage duration โดย default ดังนั้นการใช้ keyword auto จึงไม่เป็นการจำเป็น ซึ่งเรามักจะไม่ค่อยเห็น auto ปรากฏอยู่ในโค้ดโปรแกรม
//ส่วน register เป็นการแจ้งให้คอมไพเลอร์ได้ทราบว่าเราต้องการเก็บค่าตัวแปรนี้ไว้ใน register เพื่อความเร็วในการเข้าถึงตัวแปร ดังนั้นหากระบบมี register เหลือใช้ คอมไพเลอร์ก็จะจัดสรร register ให้กับโปรแกรมได้ใช้งาน
//การรันแยกส่วน
//$ gcc -c main.c                   # คำสั่งนี้จะสร้าง main.o 
//$ gcc -c func.c                   # คำสั่งนี้จะสร้าง func.o 
//$ gcc main.o func.o -o main.exe   # คำสั่งนี้จะลิงก์ main.o และ func.o เข้าด้วยกัน

#include <stdio.h>

long fib (int  n ) {
    if (n < 1){
        return     0 ;
    }
    else if(n < 3){
        return     1;
    }
return     fib (n-1) + fib (n-2);
}

int main (){
    int a;
    scanf("%d",&a);
    printf("%d",fib(a));
}
