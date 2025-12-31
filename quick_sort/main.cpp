#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>

void gen_random_list(int arr[], size_t n){
    for(int i = 0; i < n; i++){
    	arr[i] = rand() % 1000;
    }

}

void print_list(int arr[], size_t n){
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void quick_sort(int arr[], int min, int pivot){
    if(min >= pivot){
        return;
    }
    
    int i = min;
    for(int j = min; j <= pivot-1; j++){
        if(arr[j] <= arr[pivot]){
            swap(arr, i, j);
	    i++; 
	} 
    }

    swap(arr, pivot, i);

    quick_sort(arr, min, i-1);
    quick_sort(arr, i+1, pivot);
}

int main(){
    srand(time(0));
    size_t length = 100;
    int arr[length];

    gen_random_list(arr, length);
    print_list(arr, length);

    quick_sort(arr, 0,  length-1);
    print_list(arr, length);


    return 0;
}

