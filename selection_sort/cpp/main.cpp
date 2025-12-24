#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

void gen_random_list(int arr[], size_t n){
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 101;
    }
}

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void reorder_min_first(int arr[], size_t n){
    int min = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < arr[min]){
	    min = i;
	}
    }

    swap(arr, 0, min);
}

void selection_sort(int arr[], size_t n){
    for(int i = 0; i < n; i++){
        reorder_min_first(arr+i, n-i);
    }
}

int main(){
    std::srand(time(0));
    int arr[100];

    gen_random_list(arr, 100);

    for(int i = 0; i < 100; i++){
        std::cout << arr[i] << " " ;
    }

    std::cout << std::endl;

    selection_sort(arr, 100);
    
    for(int i = 0; i < 100; i++){
        std::cout << arr[i] << " " ;
    }

    std::cout << std::endl;
    
    return 0;
}

