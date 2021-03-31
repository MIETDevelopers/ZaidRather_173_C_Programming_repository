/*
ZaidRather
Program: To interact with user and take student's name, roll number and attendance percentage and stores it in a .csv file
*/
#include<stdio.h>     //Pre-processor directive to include standard input and output functions header file
struct s{    //Using structures to create a user defined data type
	char name[50];
	int roll;
	float attendance;
};
int main(){   	//Main function
	struct s a[5], b[5];
	FILE *fptr;
	fptr=fopen("storedata.csv","wb");   //For opening the file
	for (int i=0; i<5; ++i)    //For loop to take details from the user
	{
		fflush(stdin);
		printf("\nEnter details of student %d:\n", i+1);
		printf("Enter Name: ");
		gets(a[i].name);   //For name
		printf("\nEnter Roll Number: ");
		scanf("%d", &a[i].roll);    //For roll number
		printf("\nEnter Attendance Percentage: ");
		scanf("%f", &a[i].attendance);   //For attendance
		printf("\n");
	}
	fwrite(a, sizeof(a), 1, fptr);  	//For writing in the file
	fclose(fptr);
	fptr=fopen("storedata.csv","rb");
	fread(b, sizeof(b), 1, fptr);	  //For reading from the file
	for (int i=0; i<5; ++i)    //For loop to print the details
	{
		printf("Name: %s\nRoll Number: %d\nAttendance Percentage: %.1lf\n", b[i].name, b[i].roll, b[i].attendance);		//Printing the stored/ entered details
	}
	fclose(fptr);
	return 0;  //Return function
}