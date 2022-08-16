
#include<stdio.h> 
 void main() {
	 int x = 8;
	 int y = 11;
	 int ans;
	 ans = ++x || ++y ;  //9 || 11
	 printf("%d\n",ans);
	printf("%d\n",x);
       printf("%d\n",y); 

       ans = x++ && ++y;  // 9 && 12;
	 printf("%d\n",ans); // 1
	printf("%d\n",x); // 10
	
       printf("%d\n",y);  //12

      
       

 }    
 
       

       
 
