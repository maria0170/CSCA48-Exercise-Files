/* Write a little program that initializes a variable pi to 3.14159265, then prints out pi as an integer (should print
3), and as a floating point number with increasing fractional part lengths. i.e., the output of your program should
look like:
3
3.1
3.14
3.141
3.1415
3.14159
3.141592
3.1415926
3.14159265
*/

#include<stdio.h>

int main(){

    float pi;
    pi = 3.14159265;

    printf("%.0f\n", pi);
    printf("%.1f\n", pi);
    printf("%.2f\n", pi);
    printf("%.3f\n", pi);
    printf("%.4f\n", pi);
    printf("%.5f\n", pi);
    printf("%.6f\n", pi);
    printf("%.7f\n", pi);
    printf("%.8f\n", pi);
    printf("%.9f\n", pi); 

    return 0;

}
