#include <iostream>
#include <fstream>
#include <string>
#include "person.cpp"
using namespace std;



void readData(Person(&worker)[20], int &nWorker){
ifstream input_file;
input_file.open("input.txt");
if (input_file) {
	string line;
	while (getline(input_file, line))
	cout << line << '\n';
	
	input_file.close();
		
}
}


void writeData(Person(&worker)[20], int &nWorker){
ofstream output_file;
output_file.open("output.txt");
output_file << worker[0].fullName() << " " << worker[0].totalPay(); 




output_file.close();
}


int main(){
	Person person[20];
	int nWorker = 6;

	
	
	readData(person,nWorker);
	writeData(person,nWorker);
	return 0;
}
