#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Student	{
private:
	char *name,*Branch,*year;

	int *number,*pattern;
public:	
	Student()	
	{
	Student name= new char;
	Branch=new char[20];
	year=new char[20];
	roll number= new int;
	pattern=new int;
	}
	void feeddata();
	void editdata();
	void showdata();
	int search(char[],char[]);
	
	
};

void Student::feeddata()	{
	cin.ignore();
	cout<<"\nEnter Your Name: ";     
	 cin.getline(name,20);
	cout<<"Enter Branch Name: ";      
	 cin.getline(Branch,20);
	cout<<"Enter Year : ";   
	cin.getline(*year,20);
	cout<<"Enter Your Roll Number : ";            
	cin>>*number;
	cout<<"Your Pattern For Syllabus: ";   
	cin>>*pattern;   
	
}

void Student::editdata()	{
	
	cout<<"\nEnter Your Name: ";      
	cin.getline(name,20);
	cout<<"Enter Branch Name: ";       
	cin.getline(Branch,20);
	cout<<"Enter Year: ";   
	cin.getline(year,20);
	cout<<"Enter Your Roll Number: ";            
	cin>>*number;
	cout<<"Your Pattern For Syllabus:: ";   
	cin>>*pattern;   
	
}

void Student::showdata()	
{
	cout<<"\nStudent Name: "<<name;
	cout<<"\nBranch Name: "<<Branch;
	cout<<"\n Year: "<<year;
	cout<<"\nRoll number: "<<*number;
	cout<<"\nYour Pattern: "<<*pattern;   
	
}


int main()	{
	Student *S[20];
	int i=0,r,t,choice;
	while(1)	{
		cout<<"\n\n\t\tMENU"
		<<"\n1. Entry of New Book"
		<<"\n2. Buy Book"
		<<"\n3. Search For Book"
		<<"\n4. Edit Details Of Book"
		<<"\n5. Exit"
		<<"\n\nEnter your Choice: ";
		cin>>choice;
		
		switch(choice)	{
			case 1:	S[i] = new Student;
				S[i]->feeddata();
				i++;	break;
				
			case 2: cin.ignore();
				cout<<"\nEnter student name: "; cin.getline(titlebuy,20);
				cout<<"Enter Author Of Book: ";  cin.getline(authorbuy,20);
				for(t=0;t<i;t++)	{
					if(B[t]->search(titlebuy,authorbuy))	{
						B[t]->buybook();
						break;
					}
				}
				if(t==1)
				cout<<"\nThis Book is Not in Stock";
				
				break;
			case 3: cin.ignore();
				cout<<"\nEnter Title Of Book: "; cin.getline(titlebuy,20);
				cout<<"Enter Author Of Book: ";  cin.getline(authorbuy,20);
				
				for(t=0;t<i;t++)	{
					if(B[t]->search(titlebuy,authorbuy))	{
						cout<<"\nBook Found Successfully";
						B[t]->showdata();
						break;
					}
				}
				if(t==i)
				cout<<"\nThis Book is Not in Stock";
				break;
			
			case 4: cin.ignore();
				cout<<"\nEnter Title Of Book: "; cin.getline(titlebuy,20);
				cout<<"Enter Author Of Book: ";  cin.getline(authorbuy,20);
				
				for(t=0;t<i;t++)	{
					if(B[t]->search(titlebuy,authorbuy))	{
						cout<<"\nBook Found Successfully";
						B[t]->editdata();
						break;
					}
				}
				if(t==i)
				cout<<"\nThis Book is Not in Stock";
				break;
			
			case 5: exit(0);
			default: cout<<"\nInvalid Choice Entered";
			
		}
	}
	
	
	
	
	return 0;
}
