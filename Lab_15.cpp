// COMSC-210 | Lab 15 | Kyawt Thinzar Min
// IDE used: Visual Studio Code


#include <iostream>
#include <string>
#include <array>
#include <fstream>
using namespace std;

class Movie{
    private: //private data members
        string screenWriter;
        int yearReleased;
        string title;
    public:
        //for each data member in private these are setters and getters pair
        void setWriter(string writer) {screenWriter = writer;}
        string getWriter() {return screenWriter;}

        void setYear(int year) {yearReleased = year;}
        int getYear() {return yearReleased;}

        void setTitle(string movieTitle) {title = movieTitle;}
        string getTitle() {return title;}
        //print function to output data
        void print(){
            cout << title << endl;
            cout << yearReleased << endl;
            cout << screenWriter << endl <<endl;
        }
};
 int main(){
     //this is opening the file
    ifstream inFile("input.txt");
    if (!inFile) {
        cerr << "Error: could not open input.txt" << endl;
        return 1;
    }
     //this is an array for the object,movie[number of variables]
    Movie movie[4];
     string writer;
     string title;
     int year;

    //after opening the file, data is stored in year, writer, title
     for ( int i=0; i<4 ; i++){
         getline (inFile, title);
         inFile >> year;
         inFile.ignore(); //to ignore the new line
         getline (inFile, writer);
         
         Movie temp;                // temporary object
         temp.setTitle(title);
         temp.setYear(year);
         temp.setWriter(writer);

    movie[i] = temp;  
     }
    inFile.close();

    for (int i=0; i<4 ; i++){ //printing data for each of the array
        movie[i].print();
    }
     return 0;
    
 }





