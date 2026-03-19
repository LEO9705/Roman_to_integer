#include <iostream>

int main(){
        std::string s;
        int i;
        int j;
        int roman;
        int roman_next;
        int result;
        result = 0;
        std::cout << "Enter your roman integer: ";
        std::cin >> s;
        for(i=0; i < s.size(); i++){
            switch(s[i]){
                case 'I':
                case 'V':
                case 'X':
                case 'L':
                case 'C':
                case 'D':
                case 'M':
                continue;
                default:
                std::cout << "Enter a valid roman number.";
                return 0;
            }
        }
        for(i=0; i < s.size(); i++){
            switch(s[i]){
                case 'I':
                roman = 1;
                break;
                case 'V':
                roman = 5;
                break;
                case 'X':
                roman = 10;
                break;
                case 'L':
                roman = 50;
                break;
                case 'C':
                roman = 100;
                break;
                case 'D':
                roman = 500;
                break;
                case 'M':
                roman = 1000;
                break;
            }
            j = i + 1;
            if(j < s.size()){
                switch(s[j]){
                    case 'I':
                    roman_next = 1;
                    break;
                    case 'V':
                    roman_next = 5;
                    break;
                    case 'X':
                    roman_next = 10;
                    break;
                    case 'L':
                    roman_next = 50;
                    break;
                    case 'C':
                    roman_next = 100;
                    break;
                    case 'D':
                    roman_next = 500;
                    break;
                    case 'M':
                    roman_next = 1000;
                    break;
                }
            }
            else{
                roman_next = 0;
            }
            if( roman >= roman_next ){
                roman = roman;
            }
            else{
                roman = -roman;
            }
            result = result + roman;
        }
        std::cout << "The given integer is " << result;
        return 0;
}