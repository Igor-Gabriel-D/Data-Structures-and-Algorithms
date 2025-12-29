#include <iostream>
#include <cstdlib>
#include <cmath>

int fibo(int num){
    if(num == 1 || num == 0){
        return num;
    } 
    return ( fibo(num - 2) + fibo(num - 1) );
}

int main(){

    
    std::cout << fibo(7) << std::endl;
    return 0;
}
