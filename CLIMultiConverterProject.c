#include <stdio.h>
#include <stdlib.h>

void clearScreen()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

void pauseProgram()
{
	printf("\nPress Enter to continue...");
	while (getchar() != '\n');
	getchar();
}

// Declaring all menu names
void mainMenu();
void temperatureMenu();
void lengthMenu();
void weightMenu();
void currencyMenu();
void timeMenu();
void speedMenu();

// printing all menu names

void mainMenu()
{
	int choice1;
	do
	{
		clearScreen();
		printf("  _______________________\n");
		printf("  | *** Main Menu ***	|\n");
		printf("  _______________________\n");
		printf("  |1. Temperature Menu	|\n");
		printf("  |2. Length Menu	|\n");
		printf("  |3. Weight Menu	|\n");
		printf("  |4. Currency Menu	|\n");
		printf("  |5. Time Menu		|\n");
		printf("  |6. Speed Menu	|\n");
		printf("  |0. Exit		|\n");
		printf("  _______________________\n");
		printf("Choice between (1-6): ");
		scanf("%d", &choice1);

		switch (choice1)
		{
		case 1:
			temperatureMenu();
			break; // Selection between main menu
		case 2:
			lengthMenu();
			break;
		case 3:
			weightMenu();
			break;
		case 4:
			currencyMenu();
			break;
		case 5:
			timeMenu();
			break;
		case 6:
			speedMenu();
			break;
		case 0:
			break;
		default:
			printf("Invalid choice!!! Please choose between (1-6).\n");
			pauseProgram();
		}
	} while (choice1 != 0);
}

// Declaring all Temperature Menu Functions

void celsiusToFahrenheit();
void fahrenheitToCelsius();
void celsiusToKelvin();
void kelvinToCelsius();
void fahrenheitToKelvin();
void kelvinToFahrenheit();

// Printing temperature menu functions

void temperatureMenu()
{
	int choice2;
	do
	{
		clearScreen();
		printf("__________________________\n");
		printf("|**Temperature Menu**	  |\n");
		printf("__________________________\n");
		printf("|1. Celsius to Fahrenheit.|\n");
		printf("|2. Fahrenheit to Celsius.|\n");
		printf("|3. Celsius to Kelvin.	  |\n");
		printf("|4. kelvin to Celsius.	  |\n");
		printf("|5. Fahrenheit to Kelvin. |\n");
		printf("|6. Kelvin to Fahrenheit. |\n");
		printf("|7. Go-to main menu.	  |\n");
		printf("|0. Exit				  |\n");
		printf("__________________________\n");
		printf("Choice between (1-6):");
		scanf("%d", &choice2);

		switch (choice2)
		{
		case 1:
			celsiusToFahrenheit();
			break;
		case 2:
			fahrenheitToCelsius();
			break;
		case 3:
			celsiusToKelvin();
			break;
		case 4:
			kelvinToCelsius();
			break;
		case 5:
			fahrenheitToKelvin();
			break;
		case 6:
			kelvinToFahrenheit();
			break;
		case 7:
			return;
		case 0:
			exit(0);
			break;
		default:
			printf("Invalid!! Choice between (1-6).");
			pauseProgram();
		}
	} while (1);
}

// Calculation of all temperature Functions

void celsiusToFahrenheit()
{
	float celsius;
	printf("Enter temperature in Celsius:");
	scanf("%f", &celsius);
	float fahrenheit = (celsius * 9 / 5) + 32;
	printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
	pauseProgram();
}
void fahrenheitToCelsius()
{
	float fahrenheit;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f", &fahrenheit);
	float celsius = (fahrenheit - 32) * 5 / 9;
	printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
	pauseProgram();
}
void celsiusToKelvin()
{
	float celsius;
	printf("Enter temperature in Celsius:");
	scanf("%f", &celsius);
	float kelvin = celsius + 273.15;
	printf("%.2f Celsius = %.2f Kelvin\n", celsius, kelvin);
	pauseProgram();
}
void kelvinToCelsius()
{
	float kelvin;
	printf("Enter temperature in Kelvin:");
	scanf("%f", &kelvin);
	float celsius = kelvin - 273.15;
	printf("%.2f Kelvin = %.2f Celsius\n", kelvin, celsius);
	pauseProgram();
}
void fahrenheitToKelvin()
{
	float fahrenheit;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f", &fahrenheit);
	float kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
	printf("%.2f Fahrenheit = %.2f Kelvin\n", fahrenheit, kelvin);
	pauseProgram();
}
void kelvinToFahrenheit()
{
	float kelvin;
	printf("Enter temperature in Kelvin:");
	scanf("%f", &kelvin);
	float fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
	printf("%.2f Kelvin = %.2f Fahrenheit\n", kelvin, fahrenheit);
	pauseProgram();
}

// Declaring all Length Menu functions

void metersToKilometers();
void kilometersToMeters();
void metersToMiles();
void milesToMeters();
void inchesToCentimeters();
void centimetersToInches();
void feetToMeters();
void metersToFeet();

// Printing Length menu

void lengthMenu()
{
	int choice3;
	do
	{
		clearScreen();
		printf("___________________________\n");
		printf("| **Length Menu**	  |\n");
		printf("___________________________\n");
		printf("|1. Meters to Kilometers. |\n");
		printf("|2. Kilometers to Meters. |\n");
		printf("|3. Meters to Miles.	  |\n");
		printf("|4. Miles to Meters.	  |\n");
		printf("|5. Inches to Centimeters.|\n");
		printf("|6. Centimeters to Inches.|\n");
		printf("|7. Feet to Meters.	  |\n");
		printf("|8. Meters to Feet.	  |\n");
		printf("|9. Go-to main menu.   	  |\n");
		printf("|0. Exit		  |\n");
		printf("___________________________\n");
		printf("Choice between (1-8):");
		scanf("%d", &choice3);

		switch (choice3)
		{
		case 1:
			metersToKilometers();
			break;
		case 2:
			kilometersToMeters();
			break;
		case 3:
			metersToMiles();
			break;
		case 4:
			milesToMeters();
			break;
		case 5:
			inchesToCentimeters();
			break;
		case 6:
			centimetersToInches();
			break;
		case 7:
			feetToMeters();
			break;
		case 8:
			metersToFeet();
			break;
		case 9:
			return;
		case 0:
			exit(0);
			break;
		default:
			printf("Invalid !!! choice between (1-8).");
			pauseProgram();
		}
	} while (1);
}

// Calculation of all Length menu function

void metersToKilometers()
{
	float meters;
	printf("Enter Length in Meters:");
	scanf("%f", &meters);
	float kilometers = meters / 1000;
	printf("%.2f Meters = %.2f Kilometers\n", meters, kilometers);
	pauseProgram();
}
void kilometersToMeters()
{
	float kilometers;
	printf("Enter Length in Kilometers:");
	scanf("%f", &kilometers);
	float meters = kilometers * 1000;
	printf("%.2f Kilometers = %.2f Meters\n", kilometers, meters);
	pauseProgram();
}
void metersToMiles()
{
	float meters;
	printf("Enter Length in Meters:");
	scanf("%f", &meters);
	float miles = meters * 0.0006213;
	printf("%.2f Meters = %.2f Miles\n", meters, miles);
	pauseProgram();
}
void milesToMeters()
{
	float miles;
	printf("Enter Length in Miles:");
	scanf("%f", &miles);
	float meters = miles * 1609.344;
	printf("%.2f Miles = %.2f Meters\n", miles, meters);
	pauseProgram();
}
void inchesToCentimeters()
{
	float inches;
	printf("Enter Length in Inches:");
	scanf("%f", &inches);
	float centimeters = inches * 2.54;
	printf("%.2f Inches = %.2f Meters\n", inches, centimeters);
	pauseProgram();
}
void centimetersToInches()
{
	float centimeters;
	printf("Enter Length in Centimeters:");
	scanf("%f", &centimeters);
	float inches = centimeters / 2.54;
	printf("%.2f Centimeters = %.2f Inches", centimeters, inches);
	pauseProgram();
}
void feetToMeters()
{
	float feet;
	printf("Enter Length in Feet:");
	scanf("%f", &feet);
	float meters = feet * 0.3048;
	printf("%.2f Feet = %.2f Meters", feet, meters);
	pauseProgram();
}
void metersToFeet()
{
	float meters;
	printf("Enter Length in Meters:");
	scanf("%f", &meters);
	float feet = meters * 3.28084;
	printf("%.2f Meters = %.2f Feet", meters, feet);
	pauseProgram();
}

// Declaring all weight menu functions

void kilogramsToPounds();
void poundsToKilograms();
void gramsToOunces();
void ouncesToGrams();

// Printing weight menu

void weightMenu()
{
	int choice4;
	do
	{
		clearScreen();
		printf("_________________________\n");
		printf("| **Weight Menu**        |\n");
		printf("_________________________\n");
		printf("| 1. Kilograms to Pounds.|\n");
		printf("| 2. Pounds to Kilogram. |\n");
		printf("| 3. Grams to Ounces.    |\n");
		printf("| 4. Ounces to Grams.    |\n");
		printf("| 5. Go-to main menu.    |\n");
		printf("| 0. Exit.               |\n");
		printf("__________________________\n");
		printf("Choice between (1-4):");
		scanf("%d", &choice4);

		switch (choice4)
		{
		case 1:
			kilogramsToPounds();
			break;
		case 2:
			poundsToKilograms();
			break;
		case 3:
			gramsToOunces();
			break;
		case 4:
			ouncesToGrams();
			break;
		case 5:
			return;
		case 0:
			exit(0);
			break;
		default:
			printf("Invalid !!! choice between (1-4).");
			pauseProgram();
		}
	} while (1);
}

// Calculation of weight menu functions

void kilogramsToPounds()
{
	float kilograms;
	printf("Enter weight in Kilograms:");
	scanf("%f", &kilograms);
	float pounds = kilograms * 2.20462262;
	printf("%.2f Kilograms = %.2f Pounds", kilograms, pounds);
	pauseProgram();
}
void poundsToKilograms()
{
	float pounds;
	printf("Enter weight in Pounds:");
	scanf("%f", &pounds);
	float kilograms = pounds * 0.45359237;
	printf("%.2f Pounds = %.2f Kilograms", pounds, kilograms);
	pauseProgram();
}
void gramsToOunces()
{
	float grams;
	printf("Enter weight in Grams:");
	scanf("%f", &grams);
	float ounces = grams * 0.0352739;
	printf("%.2f Grams = %.2f Ounces", grams, ounces);
	pauseProgram();
}
void ouncesToGrams()
{
	float ounces;
	printf("Enter weight in Ounces:");
	scanf("%f", &ounces);
	float grams = ounces * 28.3495231;
	printf("%.2f Ounces = %.2f Grams", ounces, grams);
	pauseProgram();
}

// Declaring all Currency Menu

void inrToUsd();
void usdToInr();
void inrToEur();
void eurToInr();
void usdToEur();
void eurToUsd();

// Printing currency menu

void currencyMenu()
{
	int choice5;
	do
	{
		clearScreen();
		printf("_____________________\n");
		printf("| **Currency Menu** |\n");
		printf("_____________________\n");
		printf("| 1. INR to USD.     |\n");
		printf("| 2. USD to INR.     |\n");
		printf("| 3. INR to EUR.     |\n");
		printf("| 4. EUR to INR.     |\n");
		printf("| 5. USD to EUR.     |\n");
		printf("| 6. EUR to USD.     |\n");
		printf("| 7. Go-to main menu.|\n");
		printf("| 0. Exit.           |\n");
		printf("_____________________\n");
		printf("Choice between (1-6):");
		scanf("%d", &choice5);

		switch (choice5)
		{
		case 1:
			inrToUsd();
			break;
		case 2:
			usdToInr();
			break;
		case 3:
			inrToEur();
			break;
		case 4:
			eurToInr();
			break;
		case 5:
			usdToEur();
			break;
		case 6:
			eurToUsd();
			break;
		case 7:
			return;
		case 0:
			exit(0);
			break;
		default:
			printf("Invalid !!! choice between(1-6).");
			pauseProgram();
		}
	} while (1);
}

// Calculation of currency menu

void inrToUsd()
{
	float inr;
	printf("Enter currency in INR:");
	scanf("%f", &inr);
	float usd = inr / 86;
	printf("%.2f INR = %.2f USD", inr, usd);
	pauseProgram();
}
void usdToInr()
{
	float usd;
	printf("Enter currency in USD:");
	scanf("%f", &usd);
	float inr = usd * 86.144253;
	printf("%.2f USD = %.2f INR", usd, inr);
	pauseProgram();
}
void inrToEur()
{
	float inr;
	printf("Enter currency in  INR:");
	scanf("%f", &inr);
	float eur = inr * 0.000991;
	printf("%.2f INR = %.2f EUR", inr, eur);
	pauseProgram();
}
void eurToInr()
{
	float eur;
	printf("Enter currency in  EUR:");
	scanf("%f", &eur);
	float inr = eur * 101.33;
	printf("%.2f EUR = %.2f INR", eur, inr);
	pauseProgram();
}
void usdToEur()
{
	float usd;
	printf("Enter currency in USD:");
	scanf("%f", &usd);
	float eur = usd * 0.8578;
	printf("%.2f USD = %.2f EUR", usd, eur);
	pauseProgram();
}
void eurToUsd()
{
	float eur;
	printf("Enter currency in EUR:");
	scanf("%f", &eur);
	float usd = eur * 1.1709;
	printf("%.2f EUR = %.2f USD", eur, usd);
	pauseProgram();
}

// Declaring all time functions

void secondsToMinutes();
void minutesToSeconds();
void minutesToHours();
void hoursToMinutes();
void hoursToDays();
void daysToHours();

// Printing Time Menu
void timeMenu()
{
	int choice6;
	do
	{
		clearScreen();
		printf("__________________________\n");
		printf("| **Time Menu**          |\n");
		printf("__________________________\n");
		printf("| 1. Seconds to Minutes. |\n");
		printf("| 2. Minutes to Seconds. |\n");
		printf("| 3. Minutes to Hours.   |\n");
		printf("| 4. Hours to Minutes.   |\n");
		printf("| 5. Hours to Days.      |\n");
		printf("| 6. Days to Hours.      |\n");
		printf("| 7. Go-to main menu.    |\n");
		printf("| 0. Exit.               |\n");
		printf("__________________________\n");
		printf("\nChoice between (1-6):");
		scanf("%d", &choice6);

		switch (choice6)
		{
		case 1:
			secondsToMinutes();
			break;
		case 2:
			minutesToSeconds();
			break;
		case 3:
			minutesToHours();
			break;
		case 4:
			hoursToMinutes();
			break;
		case 5:
			hoursToDays();
			break;
		case 6:
			daysToHours();
			break;
		case 7:
			return;
		case 0:
			exit(0);
			break;
		default:
			printf("Invalid !!! choice between (1-6).");
			pauseProgram();
		}
	} while (1);
}

// Calculation of time menu functions

void secondsToMinutes()
{ // 1
	float seconds;
	printf("Enter time in Seconds:");
	scanf("%f", &seconds);
	float minutes = seconds / 60;
	printf("%.2f Seconds = %.2f Minutes\n", seconds, minutes);
	pauseProgram();
}
void minutesToSeconds()
{ // 2
	float minutes;
	printf("Enter time in Minutes:");
	scanf("%f", &minutes);
	float seconds = minutes * 60;
	printf("%.2f Minutes = %.2f Seconds\n", minutes, seconds);
	pauseProgram();
}
void minutesToHours()
{ // 3
	float minutes;
	printf("Enter time in Minutes:");
	scanf("%f", &minutes);
	float hours = minutes / 60;
	printf("%.2f Minutes = %.2f Hours\n", minutes, hours);
	pauseProgram();
}
void hoursToMinutes()
{ // 4
	float hours;
	printf("Enter time in Hours:");
	scanf("%f", &hours);
	float minutes = hours * 60;
	printf("%.2f Hours = %.2f Minutes\n", hours, minutes);
	pauseProgram();
}
void hoursToDays()
{ // 5
	float hours;
	printf("Enter time in Hours:");
	scanf("%f", &hours);
	float days = hours / 24;
	printf("%.2f Hours = %.2f Days\n", hours, days);
	pauseProgram();
}
void daysToHours()
{ // 6
	float days;
	printf("Enter time in Days:");
	scanf("%f", &days);
	float hours = days * 24;
	printf("%.2f Days = %.2f Hours", days, hours);
	pauseProgram();
}

// Declaring all Speed Menu functions

void kmphToMph();
void mphToKmph();
void mpsToKmph();
void kmphToMps();

// Printing Speed Menu

void speedMenu()
{
	int choice7;
	do
	{
		clearScreen();
		printf("______________________\n");
		printf("| **Speed Menu**     |\n");
		printf("______________________\n");
		printf("| 1. Kmph to Mph.    |\n");
		printf("| 2. Mph to Kmph.    |\n");
		printf("| 3. Mps to Kmph.    |\n");
		printf("| 4. Kmph to Mps.    |\n");
		printf("| 5. Go-to main menu.|\n");
		printf("| 0. Exit.           |\n");
		printf("______________________\n");
		printf("Choice between (1-4):");
		scanf("%d", &choice7);

		switch (choice7)
		{
		case 1:
			kmphToMph();
			break;
		case 2:
			mphToKmph();
			break;
		case 3:
			mpsToKmph();
			break;
		case 4:
			kmphToMps();
			break;
		case 5:
			return;
		case 0:
			exit(0);
			break;
		default:
			printf("Invalid !!! Choice between(1-4).");
			pauseProgram();
		}
	} while (1);
}

// Calculation of speed menu functions

void kmphToMph()
{
	float kmph;
	printf("Enter speed in kmph:");
	scanf("%f", &kmph);
	float mph = kmph * 0.621371;
	printf("%.2f kmph = %.2f mph", kmph, mph);
	pauseProgram();
}
void mphToKmph()
{
	float mph;
	printf("Enter speed in mph:");
	scanf("%f", &mph);
	float kmph = mph * 1.609344;
	printf("%.2f mph = %.2f kmph", mph, kmph);
	pauseProgram();
}
void mpsToKmph()
{
	float mps;
	printf("Enter speed in Mps:");
	scanf("%f", &mps);
	float kmph = mps * 3.6;
	printf("%.2f mps = %.2f kmph", mps, kmph);
	pauseProgram();
}
void kmphToMps()
{
	float kmph;
	printf("Enter speed in kmph:");
	scanf("%f", &kmph);
	float mps = kmph * 0.277778;
	printf("%.2f kmph = %.2f mps", kmph, mps);
	pauseProgram();
}

int main()
{
	mainMenu();
	return 0;
}
