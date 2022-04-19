//#include is used at the start of every code in cpp so yeah remeber that 
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
//this is where the main body is code is writed 
int main(){
	//this is for giving value to words that i did choose
	double number;
	double form;
	double number2;
	double answer;
	int story;
	string full;
	cout << "if want the story put the next number on if you dont put on zero";
	if(story == 0) 
	{
	//this for new pepole who start using this code 
	cout << "hey for using this code you need to put a number on sconed part for \ngeting the  math \n(1 == +) (2 == -)\n(3 == *) (4 == /)\n";
	cout << "what is your name:";
	//getline () is a type cin right here so you can use it pretty easily 
	getline (cin, full);
	cout << "if your name is:" << full << " (PRESS ENTER)";
	cin.get();
	//yeah i dont know what to use with the name deta 
	cout << ":";
	cin >> number;
	cout << ":";
	//form is the part that helps us the most
	cin >> form;
	cout << ":";
	cin >> number2;
	// this part will help us for doing any form of math
	// cout << naswer; is been used inside if so if i want to add ester egg or arg i acn do it preety easiy yet some how its hard 
   if (form == 1)
   {
	answer = number + number2;
	cout << full << " your amswer is:" << answer;
   }    
   if (form == 2)
   {
	answer = number - number2;
	cout << full << " your amswer is:" << answer;
   }    
   if (form == 3)
   {
	answer = number * number2;
	cout << full << " your amswer is:" << answer;
   }
   if(form == 4)
   {
	answer = number / number2;
	cout << full << " your amswer is:" << answer;
   }
   // this just for making a meme or ester edd things nothing more then that
   if (form == 69)
   {
   	cout << "ok overrated joke can we STOP!\n";
   }
   //this part is only to make sure pepole find that by them selfs
   	if (form != 1 ,2 ,3 ,4 ,69 ,26)
   {
   	cout << "pls dont use a number higher then 4 thanks ";
   }
   //i did add some spise right here mate 
   if (form == 26 ,number == 1 ,number2 == 1386)
   {
   	cout <<"\nso you found the secret but there is a biger  one wating";
   }
   //i did use if like this so i can make the else work but it didnt this worknormaly tho
	cout << "\nend of the code\n";
	//this part is for findhing the code ir self
	cout << "this code was made in 1/26/1386" << endl;
	}
	if (story == 1)
	{
		cout << "welcome to the new park my man" << endl;
	}
	return 0;
}
//this may not be the proper way but it dose work preatty easily 
//this code is made by R_TMF hope you like it
//this is the verion 1.5 of the code hope this help you in any way learning code or make you to become a programer yet hope this do something
//oh and there is a easter egg try to find it it is easy
//so we are going to make some upates today
