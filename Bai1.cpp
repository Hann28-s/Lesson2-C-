#include <stdio.h>
 int main(){
 	// Cac kieu du lieu co ban trong C
	 
	// 1. Int: Luu tru so nguyen
	 int a = 10 ; // so nguyen duong
	 int b = -10 ; //so nguyen am
	 printf("int a = %d, b = %d\n", a, b);
    
	 
	// 2. Float: Luu tru so thuc
	 int c = 28.12 ; // so thuc duong
	 int d = -28.12 ; // so thuc am
     printf("float c = %.2f, d = %.2f\n", c, d);
	 
	// 3. Double: Luu tru so thuc do chinh xac cao hon Float 
     double e = 3.141592653589 ; // so thuc voi do chinh xac cao hon 
     printf("double e = %.12f\n", e);

    // 4. Char: Luu tru ky tu don 
     char f = 'A'; // Ki tu chu cai 
     char g = '1'; // Ki tu so 
     printf("char f = %c, g = %c\n", f, g);

    // 5. Unsigned int: Luu tru so nguyen khong am 
     unsigned int j = 123 ; // So nguyen khong am
     printf("j = %u\n", j);
	 
    // 6. Short: Luu tru so nguyen nho hon 
     short k = 32767 ; // Gia tri toi da cua kieu Short
	 printf("k = %d\n", k); 

    // 7. Long: Luu tru so nguyen lon hon 
     long l = 1234567890 ; // Gia tri so nguyen lon 
     printf("l = %ld\n", l);

    return 0;
}
	  
 
