#include <cstdlib>
#include <unordered_map>
#include <iostream>

int main(){
    std::unordered_map<std::string, int> unmap;

    unmap["fist"] = 1;
    unmap["second"] = 2;
    unmap.insert({"third", 3});

    for(auto pos: unmap){
        std::cout << pos.first << " " << pos.second << std::endl;
    }
    std::cout << unmap.size() << std::endl;
    unmap.erase("third");
    for(auto pos: unmap){
        std::cout << pos.first << " " << pos.second << std::endl;
    }
    std::cout << unmap.size() << std::endl;

    unmap.clear();
    std::cout << unmap.size() << std::endl;
    std::cout << unmap.empty() << std::endl;
    return 0;
}
