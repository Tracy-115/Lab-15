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
    ifstream inFile("input.txt");
    if (!inFile) {
        cerr << "Error: could not open input.txt" << endl;
        return 1;
    }
    Movie movie[4];
     string writer;
     string title;
     int year;

     for ( int i=0; i<4 ; i++){
         getline (inFile, title);
         inFile >> year;
         inFile.ignore();
         getline (inFile, writer);
         movie[i].setTitle(title);
         movie[i].setYear(year);
         movie[i].setWriter(writer);
     }
    inFile.close();

    for (int i=0; i<4 ; i++){
        movie[i].print();
    }
     return 0;
    
 }





