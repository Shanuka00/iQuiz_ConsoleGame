#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

int level=0;

//-----introducing header and footer for maintain an unique labels in every page-----
void header(){
	if (level != 0){
		cout<<"========================================================================"<<endl;
		cout<<"\t\tQUIZ GAME by Conceptualizers "<<"(Level-"<<level<<")"<<endl;
		cout<<"========================================================================"<<endl;
		}
	else{
		cout<<"========================================================================"<<endl;
		cout<<"\t\t\tQUIZ GAME by Conceptualizers"<<endl;
		cout<<"========================================================================"<<endl;
		}
	}

void footer(){
	cout<<"\n========================================================================"<<endl;
}
//---------------------------------------------------------------------------------

int main(){
	
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE); // color changing code
	char name[20];
	int totScore;
	string rslt[5][6]; // delcaring a 2D array for keeping whether the answer is correct or wrong 
		
	FILE *file;
	file = fopen("Result_sheet.txt","w"); // creating result sheet file
	
	header();	
	rslt[0][0] = "            ";
	rslt[0][1] = "Q1";
	rslt[0][2] = "Q2";
	rslt[0][3] = "Q3";
	rslt[0][4] = "Q4";
	rslt[0][5] = "Q5";
	rslt[1][0] = "Level-1";
	rslt[2][0] = "Level-2";
	rslt[3][0] = "Level-3";
	rslt[4][0] = "Level-4";
	
	cout << "\nEnter Your Name : ";
	cin >> name;
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(h,10);
	cout << "   __| |____________________________________________________________| |__\n";
	cout << "  (__   ________________________Instructions________________________   __)\n";
	cout << "     | |                                                            | |\n";
	cout << "     | | * There are four levels in this game with five questions   | |\n";
	cout << "     | |   per each level.                                          | |\n";
	cout << "     | | * Type the English letter of the  answer you choose and    | |\n";
	cout << "     | |   hit enter to proceed in the game.                        | |\n";
	cout << "     | | * Answering at least four questions correctly is required  | |\n";
	cout << "     | |   to move to the next level.                               | |\n";
	cout << "     | | * If you are failed the same level will be repeated.       | |\n";
	cout << "     | | * You will win the game,Once you are done with the fourth  | |\n";
	cout << "     | |   level successfully.                                      | |\n";
	cout << "   __| |____________________________________________________________| |__\n";
	cout << "  (__   ____________________________________________________________   __)\n";
	cout << "     | |                                                            | |\n";
	cout << endl;
	SetConsoleTextAttribute(h,15);
	cout << "\nHi " << name << ", Press any key to play the game.." << endl;
	footer();
	getch(); //wait for press any key from user

	
	//=====================================================
	//----------------Level-1 starting------------------
	//=====================================================
	bool L1 = true; //this value is true until repeating the level
	while (L1){
		//----------Level-1---Question-1-------------------
		sleep(0.5); //pause the programme for 0.5 secs
		system ("CLS"); //clear the console for continue to the next step
		level = 1;
		SetConsoleTextAttribute(h,11);
		header();
		int L1tot=0;
		char q1a,q2a,q3a,q4a,q5a;
		
		cout<<"\nQ1. How many overs are there in a one day cricket match? \n\n\t a. 10 \n\t b. 20 \n\t c. 50 \n\t d. 60 \n\nYour Answer : ";
		
		cin>>q1a;
		if(q1a=='c'){
			L1tot=L1tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[1][1] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[1][1] = "W";
		}
		footer();
		
		//----------Level-1---Question-2-------------------
		sleep(1);
		system ("CLS");
		header();
	
		cout<<"\nQ2. How many districts are there in Sri Lanka? \n\n\t a. 22 \n\t b. 25 \n\t c. 26 \n\t d. 28 \n\nYour Answer : ";
		cin>>q2a;
		if(q2a=='b'){
			L1tot=L1tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[1][2] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[1][2] = "W";
		}
		footer();
		
		//----------Level-1---Question-3-------------------
		sleep(1);
		system ("CLS");
		header();
		
		cout<<"\nQ3. What is the highest waterfall in Srilanka? \n\n\t a. Bambarakanda \n\t b. Dunhinda \n\t c. Bakers fall \n\t d. Stclairs \n\nYour Answer : ";
		cin>>q3a;
		if(q3a=='a'){
			L1tot=L1tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[1][3] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[1][3] = "W";
		}
		footer();
		
		//----------Level-1---Question-4-------------------
		sleep(1);
		system ("CLS");
		header();
		
		cout<<"\nQ4. Who was the first person to discover 'Gravity'? \n\n\t a. Albert Ainstain \n\t b. Newton \n\t c. Stephn Howkings \n\t d. Maari curi \n\nYour Answer : ";
		cin>>q4a;
		if(q4a=='b'){
			L1tot=L1tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[1][4] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[1][4] = "W";
		}
		footer();
		
		//----------Level-1---Question-5-------------------
		sleep(1);
		system ("CLS");
		header();
		
		cout<<"\nQ5. How many centimeters ara there in a meter? \n\n\t a. 5 \n\t b. 10 \n\t c. 100 \n\t d. 1000 \n\nYour Answer : ";
		cin>>q5a;
		if(q5a=='c'){
			L1tot=L1tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[1][5] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[1][5] = "W";
		}
		footer();
		
		//-----------Level-1---Results----------------------
		sleep(1);
		system ("CLS");
		header();
		if (L1tot>3){
			cout << endl;
			cout << "      ***********   **********   *****     ***   ***********  ************         ***     ************* ************   ****   \n";
			cout << "     ************  ************  ******    ***  ************  *************       *****    ************* ************  ******  \n";
			cout << "     ***           ***      ***  *******   ***  ***           ***       ***      *** ***        ***            ****    ******  \n";
			cout << "     ***           ***      ***  *** ****  ***  ***   ******  *************     ***   ***       ***           ****     ******  \n";
			cout << "     ***           ***      ***  ***  **** ***  ***   ******  ************     ***********      ***         ****        ****   \n";
			cout << "     ***           ***      ***  ***   *******  ***      ***  ***     ***     *************     ***        ****          **    \n";
			cout << "     ************  ************  ***    ******  ************  ***      ***   ***         ***    ***      ************   ****   \n";
			cout << "      ***********   **********   ***     *****   **********   ***       *** ***           ***   ***      ************   ****   \n";
			cout << endl;
			
			cout << name <<  ", you have successfully completed Level 1";
			cout << "\nYou scored " << L1tot << " out of 5";
			cout << "\n\nPress any key to continue to Level 2";
			footer();
			getch();
			totScore += L1tot;
			L1 = false;
		}
		else{
			cout << endl;
			cout << "      **********    **********   ************   ************  ***        ***   ****   \n";
			cout << "     ************  ************  *************  *************  ***      ***   ******  \n";
			cout << "     ***           ***      ***  ***       ***  ***       ***   ***    ***    ******  \n";
			cout << "     ***********   ***      ***  *************  *************     *** ***     ******  \n";
			cout << "      ***********  ***      ***  ************   ************        ***        ****   \n";
			cout << "              ***  ***      ***  ***     ***    ***     ***         ***         **    \n";
			cout << "     ************  ************  ***      ***   ***      ***        ***        ****   \n";
			cout << "      **********    **********   ***       ***  ***       ***       ***        ****   \n";
			cout << endl;
			
			cout << name << ", you have to play again" << endl;
			cout << "You scored " << L1tot << " out of 5" << endl;
			cout << "you should attain at least 4 marks to enter the level 2";
			cout<<"\n\nPress any key to play again..";
			getch();
		}
	}
	
	
	//=====================================================
	//----------------Level-2 starting-------------------
	//=====================================================
	bool L2 = true;
	while (L2){
		//----------Level-2---Question-1-------------------
		sleep(0.5);
		system ("CLS");
		level = 2;
		SetConsoleTextAttribute(h,14);
		header();
		int L2tot=0;
		char q1a,q2a,q3a,q4a,q5a;
		
		cout<<"\nQ1. How many states are there in India? \n\n\t a. 13 \n\t b. 35 \n\t c. 50 \n\t d. 60  \n\nYour Answer : ";
		cin>>q1a;
		if(q1a=='d'){
			L2tot=L2tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[2][1] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[2][1] = "W";
		}
		footer();
		
		//----------Level-2---Question-2-------------------
		sleep(1);
		system ("CLS");
		header();
		cout<<"\nQ2. What is Hitler's birth country? \n\n\t a. Austria \n\t b. Germany \n\t c. Russia \n\t d. Italy \n\nYour Answer : ";
		cin>>q2a;
		if(q2a=='a'){
			L2tot=L2tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[2][2] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[2][2] = "W";
		}
		footer();
		
		//----------Level-2---Question-3-------------------
		sleep(1);
		system ("CLS");
		header();
		cout << "\t\t_________________________________________" << endl;
		cout << "\t\t|\t|\t|\t|\t|\t|" << endl;
		cout << "\t\t|\t|\t|\t|\t|\t|" << endl;
		cout << "\t\t|_______|_______|_______|_______|_______|" << endl;
		cout<<"\nQ3. How many squares are there in the above figure?? \n\n\t a. 10 \n\t b. 12 \n\t c. 15 \n\t d. 20 \n\nYour Answer : ";
		cin>>q3a;
		if(q3a=='c'){
			L2tot=L2tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[2][3] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[2][3] = "W";
		}
		footer();
		
		//----------Level-2---Question-4-------------------
		sleep(1);
		system ("CLS");
		header();
		cout<<"\nQ4. What is the largest island in Sri Lanka? \n\n\t a. Delft \n\t b. Parawi \n\t c. Kayts \n\t d. Mannar \n\nYour Answer : ";
		cin>>q4a;
		if(q4a=='d'){
			L2tot=L2tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[2][4] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[2][4] = "W";
		}
		footer();
		
		//----------Level-2---Question-5-------------------
		sleep(1);
		system ("CLS");
		header();
		cout << "\t\t_________________________" << endl;
		cout << "\t\t|\t|\t|\t|" << endl;
		cout << "\t\t|   7   |   4   |   6   |" << endl;
		cout << "\t\t|_______|_______|_______|" << endl;
		cout << "\t\t|\t|\t|\t|" << endl;
		cout << "\t\t|   6   |   5   |   8   |" << endl;
		cout << "\t\t|_______|_______|_______|" << endl;
		cout << "\t\t|\t|\t|\t|" << endl;
		cout << "\t\t|   2   |   _   |   9   |" << endl;
		cout << "\t\t|_______|_______|_______|" << endl;
		cout<<"\nQ5. Which number should fill the blank? \n\n\t a. 2 \n\t b. 4 \n\t c. 6 \n\t d. 7 \n\nYour Answer : ";
		cin>>q5a;
		if(q5a=='a'){
			L2tot=L2tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[2][5] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[2][5] = "W";
		}
		footer();
		
		//-----------Level-2---Results----------------------
		sleep(1);
		system ("CLS");
		header();
		if (L2tot>3){
			cout << endl;
			cout << "      ***********   **********   *****     ***   ***********  ************         ***     ************* ************   ****   \n";
			cout << "     ************  ************  ******    ***  ************  *************       *****    ************* ************  ******  \n";
			cout << "     ***           ***      ***  *******   ***  ***           ***       ***      *** ***        ***            ****    ******  \n";
			cout << "     ***           ***      ***  *** ****  ***  ***   ******  *************     ***   ***       ***           ****     ******  \n";
			cout << "     ***           ***      ***  ***  **** ***  ***   ******  ************     ***********      ***         ****        ****   \n";
			cout << "     ***           ***      ***  ***   *******  ***      ***  ***     ***     *************     ***        ****          **    \n";
			cout << "     ************  ************  ***    ******  ************  ***      ***   ***         ***    ***      ************   ****   \n";
			cout << "      ***********   **********   ***     *****   **********   ***       *** ***           ***   ***      ************   ****   \n";
			cout << endl;
			
			cout << name <<  ", you have successfully completed Level 2";
			cout << "\nYou scored " << L2tot << " out of 5";
			cout << "\n\nPress any key to continue to Level 3";
			footer();
			getch();
			totScore += L2tot;
			L2 = false;
		}
		else{
			cout << endl;
			cout << "      **********    **********   ************   ************  ***        ***   ****   \n";
			cout << "     ************  ************  *************  *************  ***      ***   ******  \n";
			cout << "     ***           ***      ***  ***       ***  ***       ***   ***    ***    ******  \n";
			cout << "     ***********   ***      ***  *************  *************     *** ***     ******  \n";
			cout << "      ***********  ***      ***  ************   ************        ***        ****   \n";
			cout << "              ***  ***      ***  ***     ***    ***     ***         ***         **    \n";
			cout << "     ************  ************  ***      ***   ***      ***        ***        ****   \n";
			cout << "      **********    **********   ***       ***  ***       ***       ***        ****   \n";
			cout << endl;
			
			cout << name << ", you have to play again" << endl;
			cout << "You scored " << L2tot << " out of 5" << endl;
			cout << "you should attain at least 4 marks to enter the level 3";
			cout<<"\n\nPress any key to play again..";
			getch();
		}
	}
	
	//=====================================================
	//----------------Level-3 starting-------------------
	//=====================================================
	bool L3 = true;
	while (L3){
		//----------Level-3---Question-1-------------------
		sleep(0.5);
		system ("CLS");
		level = 3;
		SetConsoleTextAttribute(h,11);
		header();
		int L3tot=0;
		char q1a,q2a,q3a,q4a,q5a;
		
		cout<<"\nQ1. What is the currency of Malaysia? \n\n\t a. Ruffiya \n\t b. Riggit \n\t c. Rupiah \n\t d. Ruffee  \n\nYour Answer : ";
		cin>>q1a;
		if(q1a=='b'){
			L3tot=L3tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[3][1] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[3][1] = "W";
		}
		footer();
		
		//----------Level-3---Question-2-------------------
		sleep(1);
		system ("CLS");
		header();
		cout << "\n\t_________________________________________" << endl;
		cout << "\t|\t|\t|\t|\t|\t|" << endl;
		cout << "\t|   1   |   8   |  18   |   75  |  ___  |" << endl;
		cout << "\t|_______|_______|_______|_______|_______|" << endl;
		cout<<"\n\nQ2. What will be the next number? \n\n\t a. 126 \n\t b. 143 \n\t c. 150 \n\t d. 225 \n\nYour Answer : ";
		cin>>q2a;
		if(q2a=='a'){
			L3tot=L3tot+1;
			cout<<"\nGreat Your answer is Correct!";
			rslt[3][2] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[3][2] = "W";
		}
		footer();
		
		//----------Level-3---Question-3-------------------
		sleep(1);
		system ("CLS");
		header();
		cout<<"\nQ3. Who is the most famous fictional character in the world? \n\n\t a. Harry Potter \n\t b. Peter Pan \n\t c. Sherlock Holmes \n\t d. Joker \n\nYour Answer : ";
		cin>>q3a;
		if(q3a=='c'){
			L3tot=L3tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[3][3] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[3][3] = "W";
		}
		footer();
		
		//----------Level-3---Question-4-------------------
		sleep(1);
		system ("CLS");
		header();
		cout<<"\nQ4. How many mobile apps are downloaded everyday? \n\n\t a. 5 million \n\t b. 25 million \n\t c. Over 100 million \n\t d. Over 1 billion \n\nYour Answer : ";
		cin>>q4a;
		if(q4a=='c'){
			L3tot=L3tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[3][4] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[3][4] = "W";
		}
		footer();
		
		//----------Level-3---Question-5-------------------
		sleep(1);
		system ("CLS");
		header();
		cout<<"\n\t16, 39, 63, 90, 120";
		cout<<"\n\t18, 36, 60, 88, 120";
		cout<<"\n\nQ5. In the two numerical sequences above,\
		\n    none number that appears in the top sequence should appear\
		\n    in the bottom sequence and vice versa.\
		\n    Which two numbers should be changed round? \n\n\t a. 16 and 18 \n\t b. 39 and 36 \n\t c. 63 and 60 \n\t d. 90 and 88 \n\nYour Answer : ";
		cin>>q5a;
		if(q5a=='a'){
			L3tot=L3tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[3][5] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[3][5] = "W";
		}
		footer();
		
		//-----------Level-3---Results----------------------
		sleep(1);
		system ("CLS");
		header();
		if (L3tot>3){
			cout << endl;
			cout << "      ***********   **********   *****     ***   ***********  ************         ***     ************* ************   ****   \n";
			cout << "     ************  ************  ******    ***  ************  *************       *****    ************* ************  ******  \n";
			cout << "     ***           ***      ***  *******   ***  ***           ***       ***      *** ***        ***            ****    ******  \n";
			cout << "     ***           ***      ***  *** ****  ***  ***   ******  *************     ***   ***       ***           ****     ******  \n";
			cout << "     ***           ***      ***  ***  **** ***  ***   ******  ************     ***********      ***         ****        ****   \n";
			cout << "     ***           ***      ***  ***   *******  ***      ***  ***     ***     *************     ***        ****          **    \n";
			cout << "     ************  ************  ***    ******  ************  ***      ***   ***         ***    ***      ************   ****   \n";
			cout << "      ***********   **********   ***     *****   **********   ***       *** ***           ***   ***      ************   ****   \n";
			cout << endl;
			
			cout << name <<  ", you have successfully completed Level 3";
			cout << "\nYou scored " << L3tot << " out of 5";
			cout << "\n\nPress any key to continue to Level 4";
			footer();
			getch();
			totScore += L3tot;
			L3 = false;
		}
		else{
			cout << endl;
			cout << "      **********    **********   ************   ************  ***        ***   ****   \n";
			cout << "     ************  ************  *************  *************  ***      ***   ******  \n";
			cout << "     ***           ***      ***  ***       ***  ***       ***   ***    ***    ******  \n";
			cout << "     ***********   ***      ***  *************  *************     *** ***     ******  \n";
			cout << "      ***********  ***      ***  ************   ************        ***        ****   \n";
			cout << "              ***  ***      ***  ***     ***    ***     ***         ***         **    \n";
			cout << "     ************  ************  ***      ***   ***      ***        ***        ****   \n";
			cout << "      **********    **********   ***       ***  ***       ***       ***        ****   \n";
			cout << endl;
			
			cout << name << ", you have to play again" << endl;
			cout << "You scored " << L3tot << " out of 5" << endl;
			cout << "you should attain at least 4 marks to enter the level 4";
			cout<<"\n\nPress any key to play again..";
			getch();
		}
	}
	
	//=====================================================
	//----------------Level-4 starting-------------------
	//=====================================================
	bool L4 = true;
	while (L4){
		//----------Level-4---Question-1-------------------
		sleep(0.5);
		system ("CLS");
		level = 4;
		SetConsoleTextAttribute(h,14);
		header();
		int L4tot=0;
		char q1a,q2a,q3a,q4a,q5a;
		cout<<"\n\tA B C D E F G H";
		cout<<"\n\nQ1. What letter is three to the right of the letter immediately to\
		\n    the left of the letter three to the left of the letter two to the\
		\n    right of the letter F ? \n\n\t a. B \n\t b. C \n\t c. F \n\t d. G  \n\nYour Answer : ";
		cin>>q1a;
		if(q1a=='d'){
			L4tot=L4tot+1;
			cout<<"\nGreat Your answer is Correct!";
			rslt[4][1] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[4][1] = "W";
		}
		footer();
		
		//----------Level-4---Question-2-------------------
		sleep(1);
		system ("CLS");
		header();
		cout<<"\nQ2. What is the colour that babies recognize first when their\
		\n    colour vision begins to develop?\
		 \n\n\t a. Yellow \n\t b. Green \n\t c. Blue \n\t d. Red \n\nYour Answer : ";
		cin>>q2a;
		if(q2a=='d'){
			L4tot=L4tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[4][2] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[4][2] = "W";
		}
		footer();
		
		//----------Level-4---Question-3-------------------
		sleep(1);
		system ("CLS");
		header();
		cout<<"\nQ3. Five years ago, the total of the ages of a father and his son was 40 years.\
		\n    The ratio of their present ages is 4 : 1\
		\n    What is the present age of the father? \n\n\t a. 20 years \n\t b. 30 years \n\t c. 40 years \n\t d. 50 years \n\nYour Answer : ";
		cin>>q3a;
		if(q3a=='c'){
			L4tot=L4tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[4][3] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[4][3] = "W";
		}
		footer();
		
		//----------Level-4---Question-4-------------------
		sleep(1);
		system ("CLS");
		header();
		cout<<"\nQ4. What is the book written by Mohan Munasinghe,\
		\n    the Sri Lankan Nobel prize winner in 2021? \
		 \n\n\t a. Sustainability in the Twenty-First Century (2019) \n\t b. Capital in the Twenty-First Century(2014)\
		  \n\t c. Nomadland: Surviving America in the twenty-first century (2017) \n\t d. The Stranger of Twenty-First Century(2015) \n\nYour Answer : ";
		cin>>q4a;
		if(q4a=='a'){
			L4tot=L4tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[4][4] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[4][4] = "W";
		}
		footer();
		
		//----------Level-4---Question-5-------------------
		sleep(1);
		system ("CLS");
		header();
		cout << "\n\t_________________________" << "\t_________________________" << endl;
		cout << "\t|\t|\t|\t|" << "\t|\t|\t|\t|" << endl;
		cout << "\t|   2   |   3   |   2   |" << "\t|   3   |   4   |   3   |" << endl;
		cout << "\t|_______|_______|_______|" << "\t|_______|_______|_______|" << endl;
		cout << "\t|\t|\t \t|" << "\t|\t|\t \t|" << endl;
		cout << "\t|   4   |       9       |" << "\t|   9   |      48       |" << endl;
		cout << "\t|_______|_______________|" << "\t|_______|_______________|" << endl;
		cout << endl;
		cout << "\n\t_________________________" << "\t_________________________" << endl;
		cout << "\t|\t|\t|\t|" << "\t|\t|\t|\t|" << endl;
		cout << "\t|   4   |   5   |   4   |" << "\t|   a   |   b   |   c   |" << endl;
		cout << "\t|_______|_______|_______|" << "\t|_______|_______|_______|" << endl;
		cout << "\t|\t|\t \t|" << "\t|\t|\t \t|" << endl;
		cout << "\t|  16   |      625      |" << "\t|   d   |       e       |" << endl;
		cout << "\t|_______|_______________|" << "\t|_______|_______________|" << endl;
		cout<<"\nQ5. What is the answer that fits the above blanks a,b,c,d,e respectively?\
		 \n\n\t a. 20, 25, 8, 6, 2550 \n\t b. 40, 6, 5, 25, 7776 \n\t c. 1250, 25, 60, 8 \n\t d. 25, 8, 16, 8555 \n\nYour Answer : ";
		cin>>q5a;
		if(q5a=='b'){
			L4tot=L4tot+1;
			cout<<"\nGreat! Your answer is Correct!";
			rslt[4][5] = "C";
		}
		else{
			cout<<"\nSorry your answer is wrong!";
			rslt[4][5] = "W";
		}
		footer();
		
		//-----------Level-4---Results----------------------
		sleep(1);
		system ("CLS");
		header();
		if (L4tot>3){
			cout << endl;
			cout << "      ***********   **********   *****     ***   ***********  ************         ***     ************* ************   ****   \n";
			cout << "     ************  ************  ******    ***  ************  *************       *****    ************* ************  ******  \n";
			cout << "     ***           ***      ***  *******   ***  ***           ***       ***      *** ***        ***            ****    ******  \n";
			cout << "     ***           ***      ***  *** ****  ***  ***   ******  *************     ***   ***       ***           ****     ******  \n";
			cout << "     ***           ***      ***  ***  **** ***  ***   ******  ************     ***********      ***         ****        ****   \n";
			cout << "     ***           ***      ***  ***   *******  ***      ***  ***     ***     *************     ***        ****          **    \n";
			cout << "     ************  ************  ***    ******  ************  ***      ***   ***         ***    ***      ************   ****   \n";
			cout << "      ***********   **********   ***     *****   **********   ***       *** ***           ***   ***      ************   ****   \n";
			cout << endl;
			
			cout << name <<  ", you have successfully completed Level 4";
			cout << "\nYou scored " << L4tot << " out of 5";
			footer();
			sleep(2);
			totScore += L4tot;
			L4 = false;
		}
		else{
			cout << endl;
			cout << "      **********    **********   ************   ************  ***        ***   ****   \n";
			cout << "     ************  ************  *************  *************  ***      ***   ******  \n";
			cout << "     ***           ***      ***  ***       ***  ***       ***   ***    ***    ******  \n";
			cout << "     ***********   ***      ***  *************  *************     *** ***     ******  \n";
			cout << "      ***********  ***      ***  ************   ************        ***        ****   \n";
			cout << "              ***  ***      ***  ***     ***    ***     ***         ***         **    \n";
			cout << "     ************  ************  ***      ***   ***      ***        ***        ****   \n";
			cout << "      **********    **********   ***       ***  ***       ***       ***        ****   \n";
			cout << endl;
			
			cout << name << ", you have to play again" << endl;
			cout << "You scored " << L4tot << " out of 5" << endl;
			cout << "you should attain at least 4 marks to finish the game";
			cout<<"\n\nPress any key to play again..";
			getch();
		}
	}
	
	//=====================================================
	//----------------You win----------------------
	//=====================================================
	
	system ("CLS");
	level=0;
	SetConsoleTextAttribute(h,10);
	header();
	
	cout<<"\n"<< name << ", You have completed all levels successfully!" << endl;
	
	cout<<endl;
	cout<<endl;
	
	cout << "     ***        ***   **********   ***      ***  \n";
	cout << "      ***      ***   ************  ***      ***  \n";
	cout << "       ***    ***    ***      ***  ***      ***  \n";
	cout << "        *** ***      ***      ***  ***      ***  \n";
	cout << "          ***        ***      ***  ***      ***  \n";
	cout << "          ***        ***      ***  ***      ***  \n";
	cout << "          ***        ************  ************  \n";
	cout << "          ***         **********    **********   \n";
	
	cout<<endl;
	
	cout << "     ***          ***   **********   *****     ***   ****   \n";
	cout << "     ***          ***  ************  ******    ***  ******  \n";
	cout << "     ***    **    ***  ***      ***  *******   ***  ******  \n";
	cout << "     ***   ****   ***  ***      ***  *** ****  ***  ******  \n";
	cout << "     ***  ******  ***  ***      ***  ***  **** ***   ****   \n";
	cout << "     *******  *******  ***      ***  ***   *******    **    \n";
	cout << "     ******    ******  ************  ***    ******   ****   \n";
	cout << "     *****      *****   **********   ***     *****   ****   \n";
	
	cout<<endl;
	cout<<endl;
	
	cout<<"You scored " << totScore <<" marks out of 20 marks!"<<endl;
	cout<<"\nThank you very much for your participation!" <<endl;
	
	cout<<"\n\nPress any key to generate your result sheet.." <<endl;
	getch();
	
	system ("CLS");
	header();
	
	fprintf(file,"%s, this is your result sheet\n\n",name);
	
	//Putting the data in the 2D array into the file
	fprintf(file,"%s       %s          %s          %s          %s          %s\n",rslt[0][0].c_str(),rslt[0][1].c_str(),rslt[0][2].c_str(),rslt[0][3].c_str(),rslt[0][4].c_str(),rslt[0][5].c_str());
    fprintf(file,"\n%s        %s            %s             %s             %s            %s\n",rslt[1][0].c_str(),rslt[1][1].c_str(),rslt[1][2].c_str(),rslt[1][3].c_str(),rslt[1][4].c_str(),rslt[1][5].c_str());
    fprintf(file,"%s        %s            %s             %s             %s            %s\n",rslt[2][0].c_str(),rslt[2][1].c_str(),rslt[2][2].c_str(),rslt[2][3].c_str(),rslt[2][4].c_str(),rslt[2][5].c_str());
    fprintf(file,"%s        %s            %s             %s             %s            %s\n",rslt[3][0].c_str(),rslt[3][1].c_str(),rslt[3][2].c_str(),rslt[3][3].c_str(),rslt[3][4].c_str(),rslt[3][5].c_str());
    fprintf(file,"%s        %s            %s             %s             %s            %s\n",rslt[4][0].c_str(),rslt[4][1].c_str(),rslt[4][2].c_str(),rslt[4][3].c_str(),rslt[4][4].c_str(),rslt[4][5].c_str());
    
	fprintf(file,"\nYou scored %d marks out of 20 marks!\n",totScore);
	fprintf(file,"\nGood luck!\n");
	fclose(file);
	
	cout<<"\n\nYour results sheet has been generated successfully!\n" <<endl;
	footer();
	
	sleep(1);
	cout << "\n\nCredits goes to,";
	sleep(1);
	
	//conceptualizers group members
	SetConsoleTextAttribute(h,13);
	cout << "\n\n\t Sachintha Dinuka\t-\tIM/2020/009";
	sleep(1);
	cout << "\n\t Shanuka Dilshan\t-\tIM/2020/017";
	sleep(1);
	cout << "\n\t Anuji Vithana\t\t-\tIM/2020/033";
	sleep(1);
	cout << "\n\t Vidul Pramitha\t\t-\tIM/2020/088";
	sleep(1);
	cout << "\n\t Ushari Egodawele\t-\tIM/2020/109\n";
	sleep(1);
	SetConsoleTextAttribute(h,10);
	
	return 0;
}
