#include <stdio.h>
int maxBilangan(int a, int b, int c, int d){
    if ( a>b && a>c && a>d){
        printf("%d",a);
    }else if (b>a && b>c && b>d){
        printf("%d",b);
    }else if (c>a && c>b && c>d){
        printf("%d",c);
    }else if (d>a && d>b && d>c){
        printf("%d",d);
    }else{
        printf("\n");
    }
    return 0;
}
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = maxBilangan(a, b, c, d);
    printf("%.0d", hasil);
    return 0;
}