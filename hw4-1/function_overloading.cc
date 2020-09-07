#include<iostream>
#include<string>

int add(int a,int b){
    return a+b;
}

std::string add(std::string a,std::string b){
    return a+'-'+b;
}

int main(void){
    int x, y;
    std::string s1, s2;

    std::cin >> x >> y >> s1 >> s2;

    std::cout << add(x,y) << std::endl;
    std::cout << add(s1,s2) << std::endl;

    return 0;
}
