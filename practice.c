#include <stdio.h> //Standard I/O library
#include <stdlib.h> //Standard Library
#include <string.h>  //Library used for string functions 
//Imports libraries 

//ALWAYS include both of the above libraries in EVERY SINGLE PROGRAM

void main(){
	int x = 5; //Variable initialization and declaration
	int y;
	
	printf("Enter an integer: "); 
	scanf("%d", &y); //Scans in an integer value for "y"

	printf("y (base 10) is %d\n", y); //Prints in decimal (%d)
	printf("y (base 8) is %o\n", y); 
	printf("y (base 16) is %x\n", y);
	
	//Scanning in User Inputs
	
	int num1, num2; //this is one way of declaring variables
	
	int num3;
	int num4; //this is another way to declare variables 
	
	
	
	//YOU CAN CHAIN TWO VALUES TOGETHER IF DESIRED
	printf("Enter two integers: ");
	scanf("%d %d", &num1,&num2); //Chaining inputs
	
	
	printf("Displaying two integers: %d %d\n", num1, num2); //Chaining outputs 
	
	
	
	//Basic for loop
	
	int sum = 0;
	for(int i = 0; i < 10; i++){
		sum += i;
	}
	
	//Conditionals (if, else if, else)
	if(num1 < num2){
		//Do something
	}
	else if(num1 > num2){
		//Do something
	}
	else{
		//Do something 
	}
	
	// String str = "Hello" in Java;
	
	//this is a string in C
	char str[32] = "Hello";
	printf("My String is: %s\n", str);

//Comparing strings in Java
//RECALL: if(s1.equals(s2) == true) where s1,s2 are strings


//How to compare strings in C

	if(strcmp(s1, s2) == 0){
		printf("Strings are equal\n");
	}
	else{
		printf("Strings are NOT equal\n");
	}
	
	//In Java: to User input strings...
	//System.out.println("Enter a string: ")
	//String s3 = scan.next();
	
	char s3[32];
	scanf("%s", s3); //NO & for strings



}

//To compile: Use these commands in Command Window

//FIRST: access file through file directory 

//gcc (name of .c file INCLUDE .c in the name)
//ls (name of above .c file)
// ./a.out


//OR



// gcc (name of .c file)
// ./a.out