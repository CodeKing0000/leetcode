#include <iostream>
#include <string>
#include <cctype>

void foo(std::string str) {
    int p = str.length() /2;

    std::string a = "";
    std::string b = "";
    for(int i = 0; i < p; i++) {
        a.push_back(str[i]);
    }
    for(int i = p; i <= str.length(); i++) {
        b.push_back(str[i]);
    }
    int result_1 = 0;
    int result_2 = 0;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
            result_1++;
            
        }
        // std::cout << result_1 << " " << str[i] << "| ";
    }
    for(int i = 0; i < b.length(); i++) {
        if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' || b[i] == 'A' || b[i] == 'E' || b[i] == 'I' || b[i] == 'O' || b[i] == 'U') {
            result_2++;
             
        }
        std::cout << result_2 << " " << str[i] << "| ";
    }

    if(result_1 == result_2) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
}

int main() {
    std::string str = "ghfj";
    foo(str);
}
