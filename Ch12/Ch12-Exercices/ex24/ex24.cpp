#include <fstream> 
#include <iostream>
using namespace std; 

void main(void) 

 { 
    struct employee 

    { 
       char name [64] ; 
       int age; 
       float salary; 
    } worker = { "Джон Дой", 33, 25000.0 }; 

    ifstream emp_file("EMPLOYEE.DAT"); 
    emp_file.read((char *) &worker, sizeof(employee)); 
    cout << worker.name << endl; 
    cout << worker.age << endl; 
    cout << worker.salary << endl; 
 }

/*
void main(void) 

 { 
    struct employee 

    { 
       char name[64]; 
       int age; 
       float salary; 
    } worker = { "Джон Дой", 33, 25000.0 }; 

    ofstream emp_file("EMPLOYEE.DAT") ; 
    emp_file.write((char *) &worker, sizeof(employee)); 
 }

/*
void main(void) 

 { 
    
	 
	 ifstream input_file("BOOKINFO.DAT"); 
    char letter; 
    while (! input_file.eof()) 

    { 
       letter = input_file.get(); 
       cout << letter; 
    } 
 }

/*
void main(void) 

 { 
    ifstream input_file("BOOKINFO.DAT"); 
    char word[64] ; 
    while (! input_file.eof()) 

    { 
       input_file >> word; 
       cout << word << endl; 
    } 
 }

/*
void main (void) 

 { 
    ifstream input_file("BOOKINFO.DAT"); 
    char line[64]; 
    while (! input_file.eof()) 

    { 
       input_file.getline(line, sizeof(line)); 
       cout << line << endl; 
    } 
 }

/* 
void main(void) 
 { 
    ifstream input_file("BOOKINFO.DAT"); 
    char one[64], two[64], three [64] ; 
    input_file.getline(one, sizeof(one)) ; 
    input_file.getline(two, sizeof(two)); 
    input_file.getline(three, sizeof(three)) ; 
    cout << one << endl; 
    cout << two << endl; 
    cout << three << endl; 
 }


/*
void main(void) 

 { 
    ifstream input_file("BOOKINFO.DAT") ; 
    char one[64], two[64], three[64]; 
    input_file >> one; 
    input_file >> two; 
    input_file >> three; 
    cout << one << endl; 
    cout << two << endl; 
    cout << three << endl; 
 }


/*
void main(void) 

 { 
    ofstream book_file("BOOKINFO.DAT"); 
    book_file << "Учимся программировать на языке C++, " << "Вторая редакция"  << endl; 
    book_file << "Jamsa Press" << endl; 
    book_file << "22.95" << endl; 
 }
 */