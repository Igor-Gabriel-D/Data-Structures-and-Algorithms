#include <cstdlib>
#include <iostream>
#include <ctime>

void gen_orded_list(int arr[], size_t n, int min){

    
    for(int i = 0; i < n; i++){
    	arr[i] = ((rand() % (10 ) +  (10 * i)));
    
    }


}


int main(){
    std::cout << "Binary Search" << std::endl;

    std::srand(time(0));


    int arr[100];
    //std::cout << sizeof(arr) << std::endl;
    gen_orded_list(arr, 100, 50);
    for(int i = 0; i < 100; i++) std::cout << arr[i] << " ";

    std::cout << std::endl;

    return 0;
}
