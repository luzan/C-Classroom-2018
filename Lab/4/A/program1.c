#include<stdio.h>

main(){
	int units;
	float total = 0.0, amount=0.0;
	
	printf("Enter Units Consumed: ");
	scanf("%d", &units);
	
	if(units <= 20){
		amount = 80;
	}else if(units <= 100){
		amount = 80 + ((units - 20) * 7.5);
	}else if(units <= 200){
		amount = 80 + (80 * 7.5) + ((units-100) * 8.5);
	}else if(units >
	 200){
		amount = 80 + (80 * 7.5) + (100 * 8.5) + ((units - 200) * 9.5);
	}
	
	total = (amount * 0.15) + amount;
	
	printf("Electricity Bill = Rs. %.2f", total);
	
	
}
