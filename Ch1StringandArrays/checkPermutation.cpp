#include<bits/stdc++.h>
int spaceLess(std::string str){
    
    for(int i=0;i<str.length();i++){
        if(str[i]== ' '){
            return i;
        }
    }
    return str.length();
}
bool checkPermutation(std::string str1, std::string str2){
    int lenstr1 = spaceLess(str1);
    int lenstr2 = spaceLess(str2);
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    int count[256]= {0};
    if(lenstr1 != lenstr2){
        return false;
    }
    for(int i=0 ; i<lenstr1;i++){
        int val = str1[i];
        count[val]=1;
    }
    for(int i=0;i<lenstr2;i++){
        int val =str2[i];
        count[val]--;
        if(count[val]<0){
            return false;
        }
    }
    return true;
}
int main(){
    std::string str1="OGD     ", str2= "dog";
    if(checkPermutation(str1,str2)){
        std::cout<< "is a permutable string"<< std::endl;
    }
    else{
        std::cout<< "is not a permutable string"<<std::endl;
    }
//     return 0;
}
// #include<bits/stdc++.h>
// #include<algorithm>
// #include<cstring>
// int checkSpaces(std::string str){
//     int len = str.length();
//      for(int i=0;i<str.length();i++){
//         if(str[i]==' '){
//             return i;
//         }
//     }
//     return len;
// }
// bool* fillArray(std::string str){
//     bool arr[100];
//     for(int i=0;i<str.length();i++){
//         int ascii=0;
        
//     }
// }
// bool checkPermutation(std::string str1, std::string str2){
//     int str1Len=checkSpaces(str1), str2Len= checkSpaces(str2);
//     transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
//     transform(str2.begin(), str2.end(), str2.begin() , ::toupper);

    
// }
// int main(){
//     std::string str1="God     ", str2= "dog";
//     if(checkPermutation){
//         std::cout<< "is a permutable string"<< std::endl;
//     }
//     else{
//         std::cout<< "is not a permutable string"<<std::endl;
//     }
//     return 0;
// }