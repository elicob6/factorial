#include <stdio.h>

int main() {
    unsigned int n;
    unsigned long long fact=1;
    scanf("%u", &n);
    if(n<=15) 
    {
    for(unsigned int i=1; i<=n; i++) 
    {
        fact*=i;
    }
    
    }
    printf("%llu\n", fact);

    return 0;
}
