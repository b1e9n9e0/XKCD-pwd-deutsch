/*
 * pwdgen.cxx
 *
 *  Created on: 04.11.15
 *      Author: b1e9n9e0

 If you want to use another input file you will have to change the entries manually...(use absolute path if global command is to be used!!!)
 same for the output.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;


int main(){
	//declaration of variables
	int pwdlength = 0;
	int i = 0;
	int stringlength;
	int maxlen = 0;
	srand(time(NULL));
	string STRING;
	ifstream myReadFile;
	ifstream in;



	//ask for length to use
	cout << "Hi, now let us generate a password!" << endl;
	cout << "How many words can you remember easily?" << endl;
	cin >> pwdlength;
	cout << endl << endl << endl;



 	myReadFile.open("/home/bene/Programme/pwd/pwdtest.txt");

 	if (myReadFile.is_open()) {
 		
 		while (!myReadFile.eof()) {
    	
	        getline(myReadFile,STRING); // Saves the line in STRING

	        stringlength = STRING.size();

	        if(stringlength > maxlen){
	        maxlen = stringlength;
	        }
	        //determine size of file;
	        i++;

	        
 		}
	}
	//reset file position by closing the file and reopening it
	myReadFile.close();
	in.open("/home/bene/Programme/pwd/pwdtest.txt");


	//get this back in if you want to know how big yout library is
	//cout << i << endl;


	//make array;
	string table[i];
	
	//fill array with all the words in the file...FILL IN ALL THE WORDS!!!
	if(in.is_open()){
		for(int j = 0; j < i; j++){
			getline(in,table[j]);
		}
	  	//cout << "haha" << endl;
	  	in.close();
	}
  	//generate the pwd
//  	ofstream out ("out.pwd");
  	for(int j = 0; j < pwdlength; j++){
  		cout << table[rand() % i];
  	}
  	cout << endl << endl << endl;

//		out.close();
	return 0;
}