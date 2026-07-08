/* Write a program that prints out the prime numbers between 2 and 100
*/
#include<stdio.h>

// return 1 if it is prime and 0 if it is not prime 
int is_prime(int n){
    if (n <=1){
        return 0;
    }
    for (int i = 2; i < n; i++){
        if(n % i == 0){
            return 0; 
        }
    }
    return 1;
}
int main(){
    
    for (int i =2; i<=100; i++){
        if(is_prime(i)==1){
            printf("%d\n", i);
        }
    }

    return 0;

}
