#include <iostream>

int fuc(int n){
    if (n<0)
        return -1;
    if (n<=1)
        return 1;
    return n*fuc(n-1);
}

int main(){

    std:: cout << fuc(6) << std::endl;
    return 0;    
}