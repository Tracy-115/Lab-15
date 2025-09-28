// COMSC-210 | Lab 15 | Kyawt Thinzar Min
// IDE used: Visual Studio Code


#include <iostream>
#include <string>
#include <array>
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
    
 }





