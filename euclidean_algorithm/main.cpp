#include <iostream>
#include <cmath>
#include <cstdlib>

int gcd_euclid(int m, int n){
    if(n % m == 0){
        return m;
    }

    return gcd_euclid(n%m, m);
}

int main(){
    std::cout << gcd_euclid(100, 250) << std::endl;
    return 0;
}
