#include <iostream>
#include <cstdlib>
#include <cmath>

struct Node{
    int value;
    Node* p;
};

void print_list(Node no){
    Node* next = &no;

    while(next != NULL){
	std::cout << next->value  << std::endl;
       	next = next->p;
    }
}

int main(){
    std::cout << "hello linked list" << std::endl;
    
    Node no2;
    no2.value = 10;
    no2.p = NULL;

    Node no1;
    no1.value = 5;
    no1.p = &no2;


    
    std::cout << no1.value << " " << no1.p->value << std::endl;

    print_list(no1);

    return 0;
}
