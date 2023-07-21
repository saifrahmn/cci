//algorithm works very fine and well

#include<bits/stdc++.h>

void swap(int a,int b){
    int diff;
    if (b>a){
        diff= b-a;
        b = b - diff;
        a = b + diff;
    }
    else{
        diff= a-b;
        a = a - diff;
        b = a + diff;
    }
    std::cout << "swapped value of a is" << a << std::endl << "and value of b is" << b << std::endl;
}
int main(){
    int a , b;
    std::cout << "Enter the values of a and b"<< std::endl;
    std::cin >> a >> b;
   swap(a,b);
}