#include<bits/stdc++.h>
#include<iostream>
bool findUnique(std::string str){
    bool arr[200]={false};
    int alpha;
    for(int i=0;i<str.length();i++){
        alpha = str[i];
        if(arr[alpha]){
            return false;
        }
        else{
            arr[alpha]= true;
        }
    }
    return true;
}
int main(){
    std::string str="unique";
    if(findUnique(str))
        std::cout<<"String is unique"<<std::endl;
    else
        std::cout<<"String is not unique"<<std::endl;
    
    return 0;

}