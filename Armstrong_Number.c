#include <stdio.h>
#include <conio.h>
#include <math.h>
int one, two, three, four , five , six , m , n , x , y , z, o , p;
void check(int a){
	one = a%10 ;                 //Digit at one 's place
	two = (a%100)/10 ;           //Digit at ten 's place  
	three =  (a%1000)/100 ;      //Digit at hundred 's place
	four = (a%10000)/1000 ;      //Digit at thousand's place
	five = (a%100000)/10000 ;    //Digit at ten thousand 's place
	if(a/10 == 0 ){         //power = 1 
		printf("%d\n", a );
	}
	else if(a/10 != 0 && a/100 ==0){	//	power = 2 
		x =	pow(two , 2);
		y = pow(one , 2);
		if(x + y == a )
			printf("%d\n", a );
	}
	else if(a/100 != 0 && a/1000 == 0){ 	//	power = 3 
		x = pow(three , 3);
		y = pow(two , 3);
		z = pow(one , 3);
		if( x + y + z == a )
			printf("%d\n", a );
	}
	else if(a/1000 != 0 && a/10000 == 0){	//	power = 4 
		p = pow(four , 4);
		x = pow(three , 4);
		y = pow(two , 4);
		z = pow(one , 4);
		if( p + x + y + z == a )
			printf("%d\n", a );
	}	
	else if (a/10000 != 0 && a/100000 == 0){	//	power = 5
		o = pow(five , 5);
		p = pow(four , 5);
		x = pow(three , 5);
		y = pow(two , 5);
		z = pow(one , 5);
		if( o + p + x + y + z == a )
			printf("%d\n", a );
	}  
}
main(int argc, char const *argv[])
{
	int c ;
	printf("ENTER THE NUMBER UPTO WHICH ARMSTRONG NUMBER IS TO BE PRINTED\n");
	scanf("%d" , &n);
	for (int i = 1; i <= n; ++i)
	{
		 check(i) ;
	}
	getch();
}