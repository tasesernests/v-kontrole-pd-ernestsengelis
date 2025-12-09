#include <iostream>


int main() {
    unsigned long long m [93];
    m[0] = 1;
    m[1] = 1;
    for (int i =2; i<=93; i++) 
    {
        m[i]=m[i-1]+m[i-2];
    }
    for (int i =93; i>=0; i--) 
    {
        std::cout << m[i] << ' ';
    }
    return 0;
}