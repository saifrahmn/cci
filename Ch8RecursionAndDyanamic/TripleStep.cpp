#include<iostream>

int countWays(int n){
    if(n<0){
        return 0;
    }
    else if(n==0){
        return 1;
    }
    else{
        return countWays(n-1) + countWays(n-2) + countWays(n-3);
    }
}

int main(){
    int n=4;
    std::cout << countWays(n)<<std::endl;
}