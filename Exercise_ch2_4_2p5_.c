/*  Modify the program you wrote for Exercise 2.4 so that instead of using type-casting, the entries in the
integer array are obtained by rounding the corresponding floating point value to the nearest integer.
You should write your own separate function that takes as input a floating point value, and returns the
corresponding nearest integer.
*/

#include <stdio.h>

int rounded(float a){
    return (int)(a + 0.5);
}


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
        printf("%d\n", rounded(my_array[m]));
    }
    return 0;
}
