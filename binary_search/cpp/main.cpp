#include <cstdlib>
#include <iostream>
#include <ctime>

void gen_orded_list(int arr[], size_t n, int min){

    
    for(int i = 0; i < n; i++){
    	arr[i] = ((rand() % (10 ) +  (10 * i)));
    
    }


}


int binary_search(int arr[], size_t n , int value){
    int res;
    int min = 0;
    int max = n - 1;
    int mid = (min + max) / 2;

    while( min != max){
        	//else if(arr[mid+1] == value) return mid+1;
	//std::cout << mid << std::endl;

	if(arr[mid] < value){
	    min = mid + 1;
	    mid = ((max - min) / 2) + min;
	} else if( arr[mid] > value){
	    max = mid - 1;
	    mid = ((max - min) / 2) + min;
	}

        if(arr[mid] == value) return mid;



	

    }

     
    return 0;
}

int linear_search(int arr[], size_t n, int value){
    for(int i = 0; i < n; i++){
    	if(arr[i] == value) return i;
    }
    return -1;
}

int main(){
    std::cout << "Binary Search" << std::endl;

    std::srand(time(0));


    int arr[100];
    //std::cout << sizeof(arr) << std::endl;
    gen_orded_list(arr, 100, 50);
    for(int i = 0; i < 100; i++) std::cout << arr[i] << " ";

    std::cout << std::endl;

    int value = arr[(rand() % 100)];
    std::cout << value << std::endl;

    std::cout << std::endl;
    std::cout << linear_search(arr, 100, value) << std::endl;
    std::cout << binary_search(arr, 100, value) << std::endl;


    return 0;
}
