/* Modify the program you wrote for Exercise 2.3 so that there is a second array, this array should be of
integer type, and the entries of this array are filled by type-casting to int the corresponding entry of the floating
point array that contains the multiples of pi.
Make sure your program prints out both the floating point value, and the corresponding int value for each
index in the arrays.
*/

#include <stdio.h>

int main(){
    float pi = 3.14159265;
    float array[10]; 
    for (int a =0; a <= 9; a++){
        array[a] = (a+1) * pi; 
        printf("%f\n", array[a]);
    }

    int my_array[10];
    for(int m =0; m !=10; m++){
        my_array[m] = (m+1) *pi;
        printf("%d\n", my_array[m]);
    }
    return 0;
}
