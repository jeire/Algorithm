#include <iostream>

std::string toggleCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c >= 'A' && c <= 'Z') {
            // 대문자를 소문자로 변환 (0x20 추가)
            result += c + 0x20;
        } else if (c >= 'a' && c <= 'z') {
            // 소문자를 대문자로 변환 (0x20 빼기)
            result += c - 0x20;
        } else {
            // 기타 문자는 그대로 추가
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::string toggled = toggleCase(input);
    std::cout << toggled << std::endl;

    return 0;
}