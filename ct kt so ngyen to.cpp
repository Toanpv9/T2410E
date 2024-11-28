#include<stdio.h>
#include<math.h>
int main( ){
	int a;
	 printf("\n a: ");
  scanf("%d",&a);
   if (a<2) {
  		printf("\n %d không phai so nguyen to", a ); 
	  
	}
    int count=0;
    for(int i = 2; i<= sqrt(a); i++)
        if(a % i == 0){
            count++;
        }
    if(count == 0){
        printf("\n%d la so nguyen to", a);
    }else{
        printf("\n%d khong phai so nguyen to", a);
    }
  }
  
  


