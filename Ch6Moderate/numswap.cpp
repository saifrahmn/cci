//algorithm works very fine and well

#include<bits/stdc++.h>

void swap(int a,int b){
    if (b>a){
        a = b-a;
        b = b - a;
        a = b + a;
    }
    else{
        b= a-b;
        a = a - b;
        b = a + b;
    }
    std::cout << "swapped value of a is" << a << std::endl << "and value of b is" << b << std::endl;
}
int main(){
    int a , b;
    std::cout << "Enter the values of a and b"<< std::endl;
    std::cin >> a >> b;
   swap(a,b);
}