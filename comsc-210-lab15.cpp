// COMSC-210 | Lab 15 | Ahmad Dharhan

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

const int SIZE = 4;

class Movie{
    private:
        string movie;
        int year;
        string screenwriter;

     public:
        void setMovie(string a)         {movie = a;}
        string getMovie()               {return movie;}

        void setYear(int a)             {year = a;}
        int getYear()                   {return year;}

        void setWriter(string a)        {screenwriter = a;}
        string getWriter()              {return screenwriter;}

        void print(){
            cout << "Movie: " << movie << endl;
            cout << "Year Released: " << year << endl;
            cout << "Screen Writer" << screenwriter << endl;
        }
};

int main(){

    


    return 0;
}