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

    vector<Movie> movies(SIZE);

    ifstream file("Best Movie of 2019.txt");

    if(!file.is_open()){
        cout << "Error! File couldn't be opened!" << endl;
        return 1;
    }

    for(int i = 0; i < SIZE; i++){
        movies[i].
    }

    return 0;
}