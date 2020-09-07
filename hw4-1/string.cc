#include<iostream>
#include<string>

int main(void){
    std::string s1,s2,s3;
    std::cin >> s1 >> s2;
    s3=s1+s2;
    std::cout << s3 << std::endl;
    std::cout << s3.substr(0,1) << std::endl;
    std::cout << s3.substr(s3.length()-1,1) << std::endl;

    return 0;
}
