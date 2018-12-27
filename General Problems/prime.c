#include<stdio.h>

main(){
	int i,j, mod_count = 0;
	int number[5] = {2, 3, 4, 73, 9};	
	
	for(i=0;i<5;i++){
		mod_count = 0 ;
		for(j=1;j<=number[i];j++){
			if(number[i]%j == 0){
				mod_count++;
			}
		}
		if(mod_count == 2)
			printf("%d\n", number[i]);
	}

}
