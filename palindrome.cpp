#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str);
void printPalin();
void printNonPalin();
void prompt();
std::string toLowerCase(std::string& str);

int main(int argc, char* argv[])
{   
    if(argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <word>\n";
        return 1;
    }
    std::string palin = argv[1];

    if (isPalindrome(toLowerCase(palin)))
    {
        printPalin();
    }
    else
    {
        printNonPalin();
    }
}
bool isPalindrome(const std::string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; ++i)
    {
        if (str[i] != str[n - i - 1])
        return false;
    }
    return true;
}
void printPalin()
{
    std::cout << "word is palindrome\n";
}
void printNonPalin()
{
    std::cout << "word is not palindrome\n";
}
std::string toLowerCase(std::string& str)
{
    std::string lowerCase = str;
    std::transform(lowerCase.begin(), lowerCase.end(), lowerCase.begin(), ::tolower);
    return lowerCase;
}