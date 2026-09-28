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
            cout << "\tYear Released: " << year << endl;
            cout << "\tcreen Writer: " << screenwriter << endl;
            cout << endl;
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
 
        string tempMovie;
        int tempYear;
        string tempScreenwriter;

        getline(file,tempMovie);
        file >> tempYear;
        file.ignore();
        getline(file, tempScreenwriter);

        movies[i].setMovie(tempMovie);
        movies[i].setYear(tempYear);
        movies[i].setWriter(tempScreenwriter);

    }

    file.close();

    for(int i = 0; i < SIZE; i++){
        movies[i].print();
    }

    return 0;
}