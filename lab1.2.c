#include <stdio.h>

int main(){
    float a,b,c;
    
    scanf("%f",&a);
    printf("%f\n",a*0.95);
    
    scanf("%f",&b);
    printf("%f\n",(a+b)*0.85);
    
    scanf("%f",&c);
    printf("%f\n",(a+b+c)*0.7);
    
	return 0;
}