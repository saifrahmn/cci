#include<bits/stdc++.h>
#include<algorithm>
#include<cstring>
int checkSpaces(std::string str){
    int len = str.length();
     for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            return i;
        }
    }
    return len;
}
bool* fillArray(std::string str){
    bool arr[100];
    for(int i=0;i<str.length();i++){
        int ascii=0;
        
    }
}
bool checkPermutation(std::string str1, std::string str2){
    int str1Len=checkSpaces(str1), str2Len= checkSpaces(str2);
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin() , ::toupper);

    
}
int main(){
    std::string str1="God     ", str2= "dog";
    if(checkPermutation){
        std::cout<< "is a permutable string"<< std::endl;
    }
    else{
        std::cout<< "is not a permutable string"<<std::endl;
    }
    return 0;
}