//Program to convert spaces into '%20'
#include<bits/stdc++.h>

void spaceReplace (char *str, int trueLenght){
    int index=0, spaceCount=0;
    for(int i=0;i<trueLenght;i++){
        if(str[i] == ' '){
            spaceCount++;
        }
    }
    index = trueLenght + spaceCount * 2;
    if(trueLenght < sizeof(str))
        str[trueLenght] = '\0';
    for(int i = trueLenght -1 ; i >= 0; i--){
        if(str[i] == ' '){
            str[index -1] = '0';
            str[index - 2] = '2';
            str[index - 3] = '%';
            index = index -3;
        }
        else{
            str[index - 1]= str [i];
            index = index -1;
        }
    }
    std::cout << str<< std::endl;
}

int main(){
    char str[]= "Mr John Smith    ";
    int trueLenght = 13;
    spaceReplace(str,trueLenght);
    return 0;
}