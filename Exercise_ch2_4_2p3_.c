/* Write a small program that creates an array for 10 floating point values. Then fills this array with
multiples of pi. That is:
array[0]=1*pi;
array[1]=2*pi;
array[2]=3*pi;
// etc... maybe you want to use a loop...
Have your program print out the entries in the array in separate lines once the array has been filled with the
correct values.
*/

#include <stdio.h>

int main(){
    float pi = 3.14159265;
    float array[10]; 
    for (int a =0; a <= 9; a++){
        array[a] = (a+1) * pi; 
        printf("%f\n", array[a]);
    }
    return 0;
}
