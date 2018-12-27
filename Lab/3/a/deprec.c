#include <stdio.h>

int main(){
	int n, year, choice = 0;
	float val, tag, deprec;
	
	while (choice !=4){
		printf("\nMethod: \n1. SL \n2. DDB \n3. SYD \n4. End\n");
		printf("\nEnter your choice (1-4): ");
		scanf("%d",&choice);
		if(choice >=1 && choice <=3){
			printf("Original Value: ");
			scanf("%f", &val);
			printf("Number of years: ");
			scanf("%d", &n);
		}
		
		switch (choice) {
			case 1:
				printf("\nStraight Line Method \n\n");
				deprec = val/n; //8000/10 = 800
				year = 1;
				while (year <= n){ // 1 <= 10
					val -= deprec; // val = val - deprec;
					printf("End of Year %2d ", year);
					printf("Depreciation: %7.2f ", deprec);
					printf("Current Value: %8.2f\n", val);
					year++;
				}
			break;
			case 2:
				printf("\nDouble-Declining-balance Method \n\n");
				year = 1;
				while(year<=n){
					deprec = 2*val/n;
					val -= deprec;
					printf("End of Year %2d ", year);
					printf("Depreciation: %7.2f ", deprec);
					printf("Current Value: %8.2f\n", val);
					year++;					
				}
			break;
			case 3:
				printf("\nSum-of-the-years Digit Method\n\n");
				year = 1;
				tag = val;
				while (year <=n){
					deprec = (n-year+1)*tag/(n*(n+1)/2);
					val -= deprec;
					printf("End of Year %2d ", year);
					printf("Depreciation: %7.2f ", deprec);
					printf("Current Value: %8.2f\t", val);
					year++;	
				}
			break;
			case 4:
				printf("\nHave a nice day! Good Bye!\n");
			break;
			default:
				printf("\nInvalid Entry!\n");
		} //end of switch
	} //end of while
	return 0;
} //end of main
