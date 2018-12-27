#include <stdio.h>

int main (){
	int floors;
	float groundFlr, firstFlr, secondFlr;
	float thirdFlr, fourthFlr, fifthFlr;
	float sixthFlr, seventhFlr, eighthFlr;
	float ninethFlr, tenthFlr, tax = 0.0;
	
	printf("Welcome to Tax Calculation System \n");
	printf("\nEnter how many floors? (Max 10): ");
	scanf("%d", &floors);
	
	
	if (floors == 1){
		printf("\nEnter Surface area of Ground Floor: ");
		scanf("%f",&groundFlr);
		tax = groundFlr * 10; 
	} else if(floors == 2) {
		printf("\nEnter Surface area of Ground Floor: ");
		scanf("%f",&groundFlr);
		printf("\nEnter Surface area of First Floor: ");
		scanf("%f",&firstFlr);
		tax = (groundFlr * 10) + (firstFlr * 12); 
	} else if(floors == 3){
		printf("\nEnter Surface area of Ground Floor: ");
		scanf("%f",&groundFlr);
		printf("\nEnter Surface area of First Floor: ");
		scanf("%f",&firstFlr);
		printf("\nEnter Surface area of Second Floor: ");
		scanf("%f",&secondFlr);
		tax += (groundFlr * 10) + (firstFlr * 12) + (secondFlr * 14);
	} else if(floors == 4){
		printf("\nEnter Surface area of Ground Floor: ");
		scanf("%f",&groundFlr);
		printf("\nEnter Surface area of First Floor: ");
		scanf("%f",&firstFlr);
		printf("\nEnter Surface area of Second Floor: ");
		scanf("%f",&secondFlr);
		printf("\nEnter Surface area of Third Floor: ");
		scanf("%f",&thirdFlr);
		tax += (groundFlr * 10) + (firstFlr * 12) + (secondFlr * 14)
				+ (thirdFlr * 15);
	} else if(floors == 5){
		printf("\nEnter Surface area of Ground Floor: ");
		scanf("%f",&groundFlr);
		printf("\nEnter Surface area of First Floor: ");
		scanf("%f",&firstFlr);
		printf("\nEnter Surface area of Second Floor: ");
		scanf("%f",&secondFlr);
		printf("\nEnter Surface area of Third Floor: ");
		scanf("%f",&thirdFlr);
		printf("\nEnter Surface area of Fourth Floor: ");
		scanf("%f",&fourthFlr);
		tax += (groundFlr * 10) + (firstFlr * 12) + (secondFlr * 14)
				+ (thirdFlr * 15) + (fourthFlr * 20);
	} else if(floors == 6) {
		printf("\nEnter Surface area of Ground Floor: ");
		scanf("%f",&groundFlr);
		printf("\nEnter Surface area of First Floor: ");
		scanf("%f",&firstFlr);
		printf("\nEnter Surface area of Second Floor: ");
		scanf("%f",&secondFlr);
		printf("\nEnter Surface area of Third Floor: ");
		scanf("%f",&thirdFlr);
		printf("\nEnter Surface area of Fourth Floor: ");
		scanf("%f",&fourthFlr);
		printf("\nEnter Surface area of Five Floor: ");
		scanf("%f",&fifthFlr);
		tax += (groundFlr * 10) + (firstFlr * 12) + (secondFlr * 14)
				+ (thirdFlr * 15) + (fourthFlr * 20) + (fifthFlr * 25);
	} else if(floors == 7) {
		printf("\nEnter Surface area of Ground Floor: ");
		scanf("%f",&groundFlr);
		printf("\nEnter Surface area of First Floor: ");
		scanf("%f",&firstFlr);
		printf("\nEnter Surface area of Second Floor: ");
		scanf("%f",&secondFlr);
		printf("\nEnter Surface area of Third Floor: ");
		scanf("%f",&thirdFlr);
		printf("\nEnter Surface area of Fourth Floor: ");
		scanf("%f",&fourthFlr);
		printf("\nEnter Surface area of Five Floor: ");
		scanf("%f",&fifthFlr);
		printf("\nEnter Surface area of Sixth Floor: ");
		scanf("%f",&sixthFlr);
		tax += (groundFlr * 10) + (firstFlr * 12) + (secondFlr * 14)
				+ (thirdFlr * 15) + (fourthFlr * 20) + (fifthFlr * 25)
				+ (sixthFlr * 30);
	} else if(floors == 8) {
		printf("\nEnter Surface area of Ground Floor: ");
		scanf("%f",&groundFlr);
		printf("\nEnter Surface area of First Floor: ");
		scanf("%f",&firstFlr);
		printf("\nEnter Surface area of Second Floor: ");
		scanf("%f",&secondFlr);
		printf("\nEnter Surface area of Third Floor: ");
		scanf("%f",&thirdFlr);
		printf("\nEnter Surface area of Fourth Floor: ");
		scanf("%f",&fourthFlr);
		printf("\nEnter Surface area of Five Floor: ");
		scanf("%f",&fifthFlr);
		printf("\nEnter Surface area of Sixth Floor: ");
		scanf("%f",&sixthFlr);
		printf("\nEnter Surface area of Seventh Floor: ");
		scanf("%f",&seventhFlr);
		tax += (groundFlr * 10) + (firstFlr * 12) + (secondFlr * 14)
				+ (thirdFlr * 15) + (fourthFlr * 20) + (fifthFlr * 25)
				+ (sixthFlr * 30) + (seventhFlr * (30 +10));
	} else if (floors == 9) {
		printf("\nEnter Surface area of Ground Floor: ");
		scanf("%f",&groundFlr);
		printf("\nEnter Surface area of First Floor: ");
		scanf("%f",&firstFlr);
		printf("\nEnter Surface area of Second Floor: ");
		scanf("%f",&secondFlr);
		printf("\nEnter Surface area of Third Floor: ");
		scanf("%f",&thirdFlr);
		printf("\nEnter Surface area of Fourth Floor: ");
		scanf("%f",&fourthFlr);
		printf("\nEnter Surface area of Five Floor: ");
		scanf("%f",&fifthFlr);
		printf("\nEnter Surface area of Sixth Floor: ");
		scanf("%f",&sixthFlr);
		printf("\nEnter Surface area of Seventh Floor: ");
		scanf("%f",&seventhFlr);
		printf("\nEnter Surface area of Eighth Floor: ");
		scanf("%f",&eighthFlr);
		tax += (groundFlr * 10) + (firstFlr * 12) + (secondFlr * 14)
				+ (thirdFlr * 15) + (fourthFlr * 20) + (fifthFlr * 25)
				+ (sixthFlr * 30) + (seventhFlr * (30 +10)) + (eighthFlr * (30+10+10));
	} else if (floors == 10){
		printf("\nEnter Surface area of Ground Floor: ");
		scanf("%f",&groundFlr);
		printf("\nEnter Surface area of First Floor: ");
		scanf("%f",&firstFlr);
		printf("\nEnter Surface area of Second Floor: ");
		scanf("%f",&secondFlr);
		printf("\nEnter Surface area of Third Floor: ");
		scanf("%f",&thirdFlr);
		printf("\nEnter Surface area of Fourth Floor: ");
		scanf("%f",&fourthFlr);
		printf("\nEnter Surface area of Five Floor: ");
		scanf("%f",&fifthFlr);
		printf("\nEnter Surface area of Sixth Floor: ");
		scanf("%f",&sixthFlr);
		printf("\nEnter Surface area of Seventh Floor: ");
		scanf("%f",&seventhFlr);
		printf("\nEnter Surface area of Eighth Floor: ");
		scanf("%f",&eighthFlr);
		printf("\nEnter Surface area of Nineth  Floor: ");
		scanf("%f",&ninethFlr);
		tax = (groundFlr * 10) + (firstFlr * 12) + (secondFlr * 14)
				+ (thirdFlr * 15) + (fourthFlr * 20) + (fifthFlr * 25)
				+ (sixthFlr * 30) + (seventhFlr * (30 +10)) + (eighthFlr * (30+10+10))
				+ (ninethFlr * (30+10+10+10));
	}
	if(floors > 10 ){
		printf("\nRange 1 - 10 Allowed\n");
	} else {
		printf("\nTotal Tax to be paid for year 2075/76 is: Nrs. %8.2f", tax);
	}
	
	return 0;
}
