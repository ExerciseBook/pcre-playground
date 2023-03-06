#define PCRE2_CODE_UNIT_WIDTH 8

#include <pcre2.h>
#include "jpcre2.hpp"
#include <iostream>

typedef jpcre2::select<wchar_t> jp;

auto re =  jp::Regex(L"\\p{Han}");

bool check(const std::wstring& s) {
    if (re.match(s)) {
        return true;
    }
    return false;
}

int main() {
    auto locale = std::locale("");
    std::locale::global(locale);
    std::wcin.imbue(locale);
    while (true) {
        std::wstring s;
        std::getline(std::wcin, s);
        if (check(s)) {
            std::cout << "matched" << std::endl;
        } else {
            std::cout << "no match" << std::endl;
        }
    }
}
