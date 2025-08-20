Top - Down apporch (Dynamic programming) :-
#include <stdio.h>

    int m[1000];
    int f(int n){
        if(n<=1){
            return n;
        }
        if(m[n]!=0){
        return m[n];
        }else{
            m[n]=f(n-1)+f(n-2);
            return m[n];
        }
        
    }
    int main(){
        
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    return 0;
}