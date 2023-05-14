//Program to convert spaces into '%20'
#include<bits/stdc++.h>

void spaceReplace (char[] st, int trueLenght){
    int index, spaceCount;
    for(int i=0;i<trueLenght;i++){
        if(st[i]==' '){
            spaceCount++;
        }
    }
    index = trueLenght + spaceCpunt * 2;
}

void main(){
    char st[]= "Mr John Smith    ";
    int trueLenght = 13;
    spaceReplace(st,trueLenght);
}