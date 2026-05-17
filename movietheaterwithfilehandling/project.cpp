#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;
int count = 0;
int movie_count = 10;
string movie_action[100] = {"John Wick", "Mad Max: Fury Road", "The Dark Knight", "Gladiator", "Mission: Impossible _ Fallout", "Avengers: Endgame", "Die Hard", "The Matrix", "Extraction", "Fast & Furious 7"};
int movie_actionprice[100] = {1000, 1300, 490, 670, 875, 999, 445, 278, 890, 500};
string movie_animation[100] = {"Toy Story", "Frozen", "Finding Nemo", "The Lion King", "Shrek", "Kung Fu Panda", "Spider-Man: Into the Spider-Verse", "Coco", "Despicable Me", "How to Train Your Dragon"};
int movie_animationprice[100] = {850, 790, 550, 900, 1100, 1500, 2000, 1800, 2500, 1600};
string movie_comedy[100] = {"The Hangover", "Superbad", "Step Brothers", "Dumb and Dumber", "21 Jump Street", "Rush Hour", "Home Alone", "The Mask", "Mean Girls", "We're the Millers"};
int movie_comedyprice[100] = {1000, 1300, 490, 670, 875, 999, 445, 278, 890, 500};
string movie_crime[100] = {"The Godfather", "Pulp Fiction", "The Dark Knight", "Goodfellas", "The Departed", "Scarface", "Se7en", "Casino", "Heat", "American Gangster"};
int movie_crimeprice[100] = {850, 790, 550, 900, 1100, 1500, 2000, 1800, 2500, 1600};
string movie_fantasy[100] = {"The Lord of the Rings: The Fellowship of the Ring", "Harry Potter and the Sorcerer's Stone", "The Hobbit: An Unexpected Journey", "Pirates of the Caribbean: The Curse of the Black Pearl", "Pan's Labyrinth", "The Chronicles of Narnia: The Lion, the Witch and the Wardrobe", "Doctor Strange", "Stardust", "Clash of the Titans", "Alice in Wonderland"};
int movie_fantasyprice[100] = {1000, 1300, 490, 670, 875, 999, 445, 278, 890, 500};
string movie_historical[100] = {"Gladiator", "Braveheart", "Schindler's List", "12 Years a Slave", "The Patriot", "Lincoln", "Troy", "Kingdom of Heaven", "Dunkirk", "The Imitation Game"};
int movie_historicalprice[100] = {850, 790, 550, 900, 1100, 1500, 2000, 1800, 2500, 1600};
string movie_horror[100] = {"The Conjuring", "Insidious", "The Exorcist", "A Nightmare on Elm Street", "The Ring", "Hereditary", "IT", "The Nun", "Halloween", "The Texas Chain Saw Massacre"};
int movie_horrorprice[100] = {1000, 1300, 490, 670, 875, 999, 445, 278, 890, 500};
string movie_sciencefiction[100] = {"Interstellar", "Inception", "The Matrix", "Blade Runner 2049", "Arrival", "Avatar", "Star Wars: A New Hope", "The Martian", "Minority Report", "Ex Machina"};
int movie_sciencefictionprice[100] = {450, 630, 980, 770, 555, 390, 1000, 950, 999, 1700};
string movie_thriller[100] = {"Se7en", "Gone Girl", "Shutter Island", "The Silence of the Lambs", "Fight Club", "Prisoners", "Zodiac", "The Sixth Sense", "Oldboy", "Nightcrawler"};
int movie_thrillerprice[100] = {850, 790, 550, 900, 1100, 1500, 2000, 1800, 2500, 1600};
string movie_theater[3] = {"Lost in the spotlight", "Echo stage ", " Dreams capes"};
int hallcapacity[3] = {0, 0, 0};
string customer_name[100];
int customer_age[100];
string customermovie_name[100];
int customermovie_price[100];
int customerHall[100] = {0};
const string file_movies = "movies.txt";
const string file_customers = "customers.txt";
const string file_hall = "halls.txt";
//--------------------------prototype start
void adminmenu();
void managementmenu();
void customermenu();
void addmovie();
void updatemovie();
void deletemovie();
void viewmovie();
void addhall();
void deletehall();
void viewhall();
void genremenu();
void showMoviesByGenre(int);
int findPrice(int, string);
void viewcustomerbooking();
void searchcustomerbyname();
void totalrevenue();
void revenuebygenre();
void totalticketssold();
void cancelbooking();
void applydiscount();
// file handling prototype started
void savemovie();
void loadmovie();
void savecustomer();
void loadcustomer();
void savehall();
void loadhall();
// file handling prototype ended
//--------------------------prototype ends
//--------------------------Data structure start
void savemovie()
{
    fstream file;
    file.open(file_movies, ios::out);
    file << movie_count << endl;
    for (int i = 0; i < movie_count; i++)
    {
        file << movie_action[i] << "|" << movie_actionprice[i] << endl;
    }
    for (int i = 0; i < movie_count; i++)
    {
        file << movie_animation[i] << "|" << movie_animationprice[i] << endl;
    }
    for (int i = 0; i < movie_count; i++)
    {
        file << movie_comedy[i] << "|" << movie_comedyprice[i] << endl;
    }
    for (int i = 0; i < movie_count; i++)
    {
        file << movie_crime[i] << "|" << movie_crimeprice[i] << endl;
    }
    for (int i = 0; i < movie_count; i++)
    {
        file << movie_fantasy[i] << "|" << movie_fantasyprice[i] << endl;
    }
    for (int i = 0; i < movie_count; i++)
    {
        file << movie_historical[i] << "|" << movie_historicalprice[i] << endl;
    }
    for (int i = 0; i < movie_count; i++)
    {
        file << movie_horror[i] << "|" << movie_horrorprice[i] << endl;
    }
    for (int i = 0; i < movie_count; i++)
    {
        file << movie_sciencefiction[i] << "|" << movie_sciencefictionprice[i] << endl;
    }
    for (int i = 0; i < movie_count; i++)
    {
        file << movie_thriller[i] << "|" << movie_thrillerprice[i] << endl;
    }
    file.close();
}
void loadmovie()
{
    fstream file;
    file.open(file_movies, ios::in);
    if (!file) // file does not exist yet → save defaults and return
    {
        savemovie();
        return;
    }
    file >> movie_count;
    for (int i = 0; i < movie_count; i++)
    {
        getline(file, movie_action[i], '|');
        file >> movie_actionprice[i];
        file.ignore();
    }
    for (int i = 0; i < movie_count; i++)
    {
        getline(file, movie_animation[i], '|');
        file >> movie_animationprice[i];
        file.ignore();
    }
    for (int i = 0; i < movie_count; i++)
    {
        getline(file, movie_comedy[i], '|');
        file >> movie_comedyprice[i];
        file.ignore();
    }
    for (int i = 0; i < movie_count; i++)
    {
        getline(file, movie_crime[i], '|');
        file >> movie_crimeprice[i];
        file.ignore();
    }
    for (int i = 0; i < movie_count; i++)
    {
        getline(file, movie_fantasy[i], '|');
        file >> movie_fantasyprice[i];
        file.ignore();
    }
    for (int i = 0; i < movie_count; i++)
    {
        getline(file, movie_historical[i], '|');
        file >> movie_historicalprice[i];
        file.ignore();
    }
    for (int i = 0; i < movie_count; i++)
    {
        getline(file, movie_horror[i], '|');
        file >> movie_horrorprice[i];
        file.ignore();
    }
    for (int i = 0; i < movie_count; i++)
    {
        getline(file, movie_sciencefiction[i], '|');
        file >> movie_sciencefictionprice[i];
        file.ignore();
    }
    for (int i = 0; i < movie_count; i++)
    {
        getline(file, movie_thriller[i], '|');
        file >> movie_thrillerprice[i];
        file.ignore();
    }
    file.close();
}
void savecustomer()
{
    fstream file;
    file.open(file_customers, ios::out);
    file << count << endl;
    for (int i = 0; i < count; i++)
    {
        file << customer_name[i] << "|" << customer_age[i] << "|" << customermovie_name[i] << "|" << customermovie_price[i] << "|" << customerHall[i] + 1 << endl;
    }
    file.close();
}
void loadcustomer()
{
    fstream file;
    file.open(file_customers, ios::in);
    if (!file)
    {
        count = 0;
        return;
    }
    file >> count;
    file.ignore();
    for (int i = 0; i < count; i++)
    {
        getline(file, customer_name[i], '|');
        file >> customer_age[i];
        file.ignore();
        getline(file, customermovie_name[i], '|');
        file >> customermovie_price[i];
        file.ignore();
        file >> customerHall[i];
        file.ignore();
    }
    file.close();
}
void savehall()
{
    fstream file;
    file.open(file_hall, ios::out);
    for (int i = 0; i < 3; i++)
    {
        file << movie_theater[i] << "|" << hallcapacity[i] << "\n";
    }
    file.close();
}
void loadhall()
{
    fstream file;
    file.open(file_hall, ios::in);
    if (!file)
    {
        savehall();
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        getline(file, movie_theater[i], '|');
        file >> hallcapacity[i];
        file.ignore();
    }

    file.close();
}
void showMoviesByGenre(int genre)
{
    system("cls");
    if (genre == 1)
    {
        cout << "--- Action Movies ---" << endl;
        for (int i = 0; i < movie_count; i++)
            if (movie_action[i] != "")
                cout << i + 1 << ". " << movie_action[i] << " : Rs." << movie_actionprice[i] << endl;
    }
    else if (genre == 2)
    {
        cout << "--- Animation Movies ---" << endl;
        for (int i = 0; i < movie_count; i++)
            if (movie_animation[i] != "")
                cout << i + 1 << ". " << movie_animation[i] << " : Rs." << movie_animationprice[i] << endl;
    }
    else if (genre == 3)
    {
        cout << "--- Comedy Movies ---" << endl;
        for (int i = 0; i < movie_count; i++)
            if (movie_comedy[i] != "")
                cout << i + 1 << ". " << movie_comedy[i] << " : Rs." << movie_comedyprice[i] << endl;
    }
    else if (genre == 4)
    {
        cout << "--- Crime Movies ---" << endl;
        for (int i = 0; i < movie_count; i++)
            if (movie_crime[i] != "")
                cout << i + 1 << ". " << movie_crime[i] << " : Rs." << movie_crimeprice[i] << endl;
    }
    else if (genre == 5)
    {
        cout << "--- Fantasy Movies ---" << endl;
        for (int i = 0; i < movie_count; i++)
            if (movie_fantasy[i] != "")
                cout << i + 1 << ". " << movie_fantasy[i] << " : Rs." << movie_fantasyprice[i] << endl;
    }
    else if (genre == 6)
    {
        cout << "--- Historical Movies ---" << endl;
        for (int i = 0; i < movie_count; i++)
            if (movie_historical[i] != "")
                cout << i + 1 << ". " << movie_historical[i] << " : Rs." << movie_historicalprice[i] << endl;
    }
    else if (genre == 7)
    {
        cout << "--- Horror Movies ---" << endl;
        for (int i = 0; i < movie_count; i++)
            if (movie_horror[i] != "")
                cout << i + 1 << ". " << movie_horror[i] << " : Rs." << movie_horrorprice[i] << endl;
    }
    else if (genre == 8)
    {
        cout << "--- Science Fiction Movies ---" << endl;
        for (int i = 0; i < movie_count; i++)
            if (movie_sciencefiction[i] != "")
                cout << i + 1 << ". " << movie_sciencefiction[i] << " : Rs." << movie_sciencefictionprice[i] << endl;
    }
    else if (genre == 9)
    {
        cout << "--- Thriller Movies ---" << endl;
        for (int i = 0; i < movie_count; i++)
            if (movie_thriller[i] != "")
                cout << i + 1 << ". " << movie_thriller[i] << " : Rs." << movie_thrillerprice[i] << endl;
    }
}
int findPrice(int genre, string moviename)
{
    bool found = false;
    if (genre == 1)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_action[i] == moviename)
            {
                return movie_actionprice[i];
            }
    }
    else if (genre == 2)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_animation[i] == moviename)
            {
                return movie_animationprice[i];
            }
    }
    else if (genre == 3)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_comedy[i] == moviename)
                return movie_comedyprice[i];
    }
    else if (genre == 4)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_crime[i] == moviename)
                return movie_crimeprice[i];
    }
    else if (genre == 5)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_fantasy[i] == moviename)
                return movie_fantasyprice[i];
    }
    else if (genre == 6)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_historical[i] == moviename)
                return movie_historicalprice[i];
    }
    else if (genre == 7)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_horror[i] == moviename)
                return movie_horrorprice[i];
    }
    else if (genre == 8)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_sciencefiction[i] == moviename)
                return movie_sciencefictionprice[i];
    }
    else if (genre == 9)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_thriller[i] == moviename)
                return movie_thrillerprice[i];
    }
    return -1; // not found
}
void genremenu()
{
    system("cls");
    cout << "These are  the category  " << endl;
    cout << "1. Action Genre " << endl;
    cout << "2. Animation Genre " << endl;
    cout << "3. Comedy Genre " << endl;
    cout << "4. Crime Genre " << endl;
    cout << "5. Fantasy Genre " << endl;
    cout << "6. Historical Genre " << endl;
    cout << "7. Horror Genre " << endl;
    cout << "8. Science Fiction " << endl;
    cout << "9. Thriller Genre " << endl;
}
void addmovie()
{
    genremenu();
    int genrechoice;
    cout << "Enter the choice (1-9) : ";
    cin >> genrechoice;
    string newmovie;
    int newprice;
    cout << "Enter the new movie name ";
    cin.ignore();
    getline(cin, newmovie);
    cout << "Enter the new movie price ";
    cin >> newprice;
    if (genrechoice == 1)
    {
        movie_action[movie_count] = newmovie;
        movie_actionprice[movie_count] = newprice;
    }
    else if (genrechoice == 2)
    {
        movie_animation[movie_count] = newmovie;
        movie_animationprice[movie_count] = newprice;
    }
    else if (genrechoice == 3)
    {
        movie_comedy[movie_count] = newmovie;
        movie_comedyprice[movie_count] = newprice;
    }
    else if (genrechoice == 4)
    {
        movie_crime[movie_count] = newmovie;
        movie_crimeprice[movie_count] = newprice;
    }
    else if (genrechoice == 5)
    {
        movie_fantasy[movie_count] = newmovie;
        movie_fantasyprice[movie_count] = newprice;
    }
    else if (genrechoice == 6)
    {
        movie_historical[movie_count] = newmovie;
        movie_historicalprice[movie_count] = newprice;
    }
    else if (genrechoice == 7)
    {
        movie_horror[movie_count] = newmovie;
        movie_horrorprice[movie_count] = newprice;
    }
    else if (genrechoice == 8)
    {
        movie_sciencefiction[movie_count] = newmovie;
        movie_sciencefictionprice[movie_count] = newprice;
    }
    else if (genrechoice == 9)
    {
        movie_thriller[movie_count] = newmovie;
        movie_thrillerprice[movie_count] = newprice;
    }
    else
    {
        cout << "\n Invalid genre!" << endl;
        getch();
    }
    movie_count++;
    savemovie();
    cout << "\n Movie added successfully!" << endl;
    cout << "Press any key to continue...";
    getch();
}
void updatemovie()
{
    genremenu();
    int genrechoice;
    cout << "Enter the genre choice that you want to updated your movie ";
    cin >> genrechoice;
    if (genrechoice == 1)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to upgrade ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_action[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            int movie;
            cout << "OLd record " << endl;
            cout << "Movie name\t" << "Price\n";
            cout << movie_action[foundindex] << "\t" << movie_actionprice[foundindex] << endl;
            string name;
            int price;
            cout << "Enter the updated name of movie ";
            getline(cin, name);
            cout << "Enter the updated price of movie ";
            cin >> price;
            movie_action[foundindex] = name;
            movie_actionprice[foundindex] = price;
            savemovie();
            cout << "Your new updated record for movie added successfully " << endl;
            cout << "Press any key to continue " << endl;
            getch();
        }
    }
    else if (genrechoice == 2)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to upgrade ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_animation[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            int movie;
            cout << "OLd record " << endl;
            cout << "Movie name\t" << "Price\n";
            cout << movie_animation[foundindex] << "\t" << movie_animationprice[foundindex] << endl;
            string name;
            int price;
            cout << "Enter the updated name of movie ";
            getline(cin, name);
            cout << "Enter the updated price of movie ";
            cin >> price;
            movie_animation[foundindex] = name;
            movie_animationprice[foundindex] = price;
            savemovie();
            cout << "Your new upgraded record for movie added successfully " << endl;
            cout << "Press any key to continue " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (genrechoice == 3)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to upgrade ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_comedy[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            int movie;
            cout << "OLd record " << endl;
            cout << "Movie name\t" << "Price\n";
            cout << movie_comedy[foundindex] << "\t" << movie_comedyprice[foundindex] << endl;
            string name;
            int price;
            cout << "Enter the updated name of movie ";
            getline(cin, name);
            cout << "Enter the updated price of movie ";
            cin >> price;
            movie_comedy[foundindex] = name;
            movie_comedyprice[foundindex] = price;
            savemovie();
            cout << "Your new upgraded record for movie added successfully " << endl;
            cout << "Press any key to continue " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (genrechoice == 4)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to upgrade ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_crime[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            int movie;
            cout << "OLd record " << endl;
            cout << "Movie name\t" << "Price\n";
            cout << movie_crime[foundindex] << "\t" << movie_crimeprice[foundindex] << endl;
            string name;
            int price;
            cout << "Enter the updated name of movie ";
            getline(cin, name);
            cout << "Enter the updated price of movie ";
            cin >> price;
            movie_crime[foundindex] = name;
            movie_crimeprice[foundindex] = price;
            savemovie();
            cout << "Your new upgraded record for movie added successfully " << endl;
            cout << "Press any key to continue " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (genrechoice == 5)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to upgrade ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_fantasy[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            int movie;
            cout << "OLd record " << endl;
            cout << "Movie name\t" << "Price\n";
            cout << movie_fantasy[foundindex] << "\t" << movie_fantasyprice[foundindex] << endl;
            string name;
            int price;
            cout << "Enter the updated name of movie ";
            getline(cin, name);
            cout << "Enter the updated price of movie ";
            cin >> price;
            movie_fantasy[foundindex] = name;
            movie_fantasyprice[foundindex] = price;
            savemovie();
            cout << "Your new upgraded record for movie added successfully " << endl;
            cout << "Press any key to continue " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (genrechoice == 6)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to upgrade ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_historical[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            int movie;
            cout << "OLd record " << endl;
            cout << "Movie name\t" << "Price\n";
            cout << movie_historical[foundindex] << "\t" << movie_historicalprice[foundindex] << endl;
            string name;
            int price;
            cout << "Enter the updated name of movie ";
            getline(cin, name);
            cout << "Enter the updated price of movie ";
            cin >> price;
            movie_historical[foundindex] = name;
            movie_historicalprice[foundindex] = price;
            savemovie();
            cout << "Your new upgraded record for movie added successfully " << endl;
            cout << "Press any key to continue " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (genrechoice == 7)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to upgrade ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_horror[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            int movie;
            cout << "OLd record " << endl;
            cout << "Movie name\t" << "Price\n";
            cout << movie_horror[foundindex] << "\t" << movie_horrorprice[foundindex] << endl;
            string name;
            int price;
            cout << "Enter the updated name of movie ";
            getline(cin, name);
            cout << "Enter the updated price of movie ";
            cin >> price;
            movie_horror[foundindex] = name;
            movie_horrorprice[foundindex] = price;
            savemovie();
            cout << "Your new upgraded record for movie added successfully " << endl;
            cout << "Press any key to continue " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (genrechoice == 8)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to upgrade ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_sciencefiction[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            int movie;
            cout << "OLd record " << endl;
            cout << "Movie name\t" << "Price\n";
            cout << movie_sciencefiction[foundindex] << "\t" << movie_sciencefictionprice[foundindex] << endl;
            string name;
            int price;
            cout << "Enter the updated name of movie ";
            getline(cin, name);
            cout << "Enter the updated price of movie ";
            cin >> price;
            movie_sciencefiction[foundindex] = name;
            movie_sciencefictionprice[foundindex] = price;
            savemovie();
            cout << "Your new upgraded record for movie added successfully " << endl;
            cout << "Press any key to continue " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (genrechoice == 9)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to upgrade ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_thriller[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {

            cout << "OLd record " << endl;
            cout << "Movie name\t" << "Price\n";
            cout << movie_thriller[foundindex] << "\t" << movie_thrillerprice[foundindex] << endl;
            string name;
            int price;
            cout << "Enter the updated name of movie ";
            getline(cin, name);
            cout << "Enter the updated price of movie ";
            cin >> price;
            movie_thriller[foundindex] = name;
            movie_thrillerprice[foundindex] = price;
            savemovie();
            cout << "Your new upgraded record for movie added successfully " << endl;
            cout << "Press any key to continue " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
}
void deletemovie()
{
    system("cls");
    genremenu();
    int type;
    cout << "Enter the choice (1-9): ";
    cin >> type;
    if (type == 1)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to delete ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_action[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            movie_action[foundindex] = "";
            movie_actionprice[foundindex] = 0;
            savemovie();
            cout << "Movie successfully deleted " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (type == 2)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to delete ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_animation[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            movie_animation[foundindex] = "";
            movie_animationprice[foundindex] = 0;
            savemovie();
            cout << "Movie successfully deleted " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (type == 3)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to delete ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_comedy[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            movie_comedy[foundindex] = "";
            movie_comedyprice[foundindex] = 0;
            savemovie();
            cout << "Movie successfully deleted " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (type == 4)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to delete ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_crime[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            movie_crime[foundindex] = "";
            movie_crimeprice[foundindex] = 0;
            savemovie();
            cout << "Movie successfully deleted " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (type == 5)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to delete ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_fantasy[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            movie_fantasy[foundindex] = "";
            movie_fantasyprice[foundindex] = 0;
            savemovie();
            cout << "Movie successfully deleted " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (type == 6)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to delete ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_historical[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            movie_historical[foundindex] = "";
            movie_historicalprice[foundindex] = 0;
            savemovie();
            cout << "Movie successfully deleted " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (type == 7)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to delete ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_horror[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            movie_horror[foundindex] = "";
            movie_horrorprice[foundindex] = 0;
            savemovie();
            cout << "Movie successfully deleted " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (type == 8)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to delete ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_sciencefiction[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            movie_sciencefiction[foundindex] = "";
            movie_sciencefictionprice[foundindex] = 0;
            savemovie();
            cout << "Movie successfully deleted " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
    else if (type == 9)
    {
        system("cls");
        cin.ignore();
        string moviename;
        cout << "Enter the movie name that you want to delete ";
        getline(cin, moviename);
        cin.ignore();
        bool found = false;
        int foundindex = -1;
        for (int i = 0; i < movie_count; i++)
        {
            if (moviename == movie_thriller[i])
            {
                foundindex = i;
                found = true;
            }
        }
        if (found == true)
        {
            movie_thriller[foundindex] = "";
            movie_thrillerprice[foundindex] = 0;
            savemovie();
            cout << "Movie successfully deleted " << endl;
            getch();
        }
        else
        {
            cout << "Record not found " << endl;
        }
    }
}
void viewmovie()
{
    system("cls");
    cout << "\n--- Action ---" << endl;
    for (int i = 0; i < movie_count; i++)
    {
        cout << i + 1 << ". " << movie_action[i] << " : Rs." << movie_actionprice[i] << endl;
    }
    cout << "\n--- Animation ---" << endl;
    for (int i = 0; i < movie_count; i++)
    {
        cout << i + 1 << ". " << movie_animation[i] << " : Rs." << movie_animationprice[i] << endl;
    }
    cout << "\n--- Comedy ---" << endl;
    for (int i = 0; i < movie_count; i++)
    {
        cout << i + 1 << ". " << movie_comedy[i] << " : Rs." << movie_comedyprice[i] << endl;
    }
    cout << "\n--- Crime ---" << endl;
    for (int i = 0; i < movie_count; i++)
    {
        cout << i + 1 << ". " << movie_crime[i] << " : Rs." << movie_crimeprice[i] << endl;
    }
    cout << "\n--- Fantasy ---" << endl;
    for (int i = 0; i < movie_count; i++)
    {
        cout << i + 1 << ". " << movie_fantasy[i] << " : Rs." << movie_fantasyprice[i] << endl;
    }
    cout << "\n--- Historical ---" << endl;
    for (int i = 0; i < movie_count; i++)
    {
        cout << i + 1 << ". " << movie_historical[i] << " : Rs." << movie_historicalprice[i] << endl;
    }
    cout << "\n--- Horror ---" << endl;
    for (int i = 0; i < movie_count; i++)
    {
        cout << i + 1 << ". " << movie_horror[i] << " : Rs." << movie_horrorprice[i] << endl;
    }
    cout << "\n--- Science Fiction ---" << endl;
    for (int i = 0; i < movie_count; i++)
    {
        cout << i + 1 << ". " << movie_sciencefiction[i] << " : Rs." << movie_sciencefictionprice[i] << endl;
    }
    cout << "\n--- Thriller ---" << endl;
    for (int i = 0; i < movie_count; i++)
    {
        cout << i + 1 << ". " << movie_thriller[i] << " : Rs." << movie_thrillerprice[i] << endl;
    }
    cout << "\nPress any key to continue...";
    getch();
}
void addhall()
{
    system("cls");
    cout << "=== Add Hall ===" << endl;
    cout << "Current Halls:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ".\t" << movie_theater[i] << "\t[" << hallcapacity[i] << "/3]" << endl;
    }
    cout << "\nWhich hall name to update? (1-3): ";
    int hallno;
    cin >> hallno;
    hallno--;
    cout << "Enter new hall name: ";
    cin.ignore();
    getline(cin, movie_theater[hallno]);
    savehall();
    cout << "Hall updated successfully!" << endl;
    cout << "Press any key to continue...";
    getch();
}
void deletehall()
{
    system("cls");
    cout << "=== Delete Hall ===" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ".\t" << movie_theater[i] << "\t[" << hallcapacity[i] << " customers]" << endl;
    }
    cout << "Select hall to clear (1-3): ";
    int hallno;
    cin >> hallno;
    hallno--;

    // clear all customers in this hall
    for (int i = 0; i < count; i++)
    {
        if (customerHall[i] == hallno)
        {
            customer_name[i] = "";
            customer_age[i] = 0;
            customermovie_name[i] = "";
            customermovie_price[i] = 0;
            customerHall[i] = -1;
        }
    }
    hallcapacity[hallno] = 0;
    savehall();
    savecustomer();
    cout << "Hall cleared successfully!" << endl;
    cout << "Press any key to continue...";
    getch();
}
void viewhall()
{
    system("cls");
    cout << "=== Hall Status ===" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\nHall " << i + 1 << ": " << movie_theater[i] << endl;
        cout << "Seats Filled: " << hallcapacity[i] << "/3" << endl;

        // show customers in this hall
        for (int j = 0; j < count; j++)
        {
            if (customerHall[j] == i && customer_name[j] != "")
            {
                cout << "  - " << customer_name[j] << "\t" << customermovie_name[j] << "\tRs." << customermovie_price[j] << endl;
            }
        }

        if (hallcapacity[i] >= 3)
            cout << "Status: FULL" << endl;
        else
            cout << "Status: " << 3 - hallcapacity[i] << " seats available" << endl;
    }
    cout << "\nPress any key to continue...";
    getch();
}
void viewcustomerbooking()
{
    system("cls");
    if (count == 0)
    {
        cout << "There is no customer " << endl;
    }
    else
    {
        cout << "Serial\tCustomer Name\tAge\tMovie Booked\tPrice" << endl;
        for (int i = 0; i < count; i++)
        {
            cout << i + 1 << "\t" << customer_name[i] << "\t\t" << customer_age[i] << "\t" << customermovie_name[i] << "\t\t" << customermovie_price[i] << endl;
        }
        cout << "total customer " << count << endl;
    }
    cout << "Press any key to continue " << endl;
    getch();
}
void searchcustomerbyname()
{
    system("cls");
    cout << "Search Customer by Name " << endl;
    string searchname;
    cout << "Enter the name yo want to search " << endl;
    cin.ignore();
    getline(cin, searchname);
    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (customer_name[i] == searchname)
        {
            cout << customer_name[i] << "\t\t" << customer_age[i] << "\t" << customermovie_name[i] << "\t\t" << customermovie_price[i] << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No record was found under this name " << searchname << endl;
    }
    cout << "Press any key to continue " << endl;
    getch();
}
void totalrevenue()
{
    system("cls");
    cout << "The total revenue report " << endl;
    int totalrevenue = 0;
    for (int i = 0; i < count; i++)
    {
        totalrevenue = customermovie_price[i] + totalrevenue;
    }
    cout << "Total revenue sold out " << totalrevenue << endl;
    cout << "Number of ticket sold out " << count << endl;
    cout << "press any key to continue " << endl;
    getch();
}
void revenuebygenre()
{
    system("cls");

    int rev_action = 0, rev_animation = 0, rev_comedy = 0, rev_crime = 0, rev_fantasy = 0, rev_historical = 0, rev_horror = 0, rev_sciencefiction = 0, rev_thriller = 0;
    bool category = false;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < movie_count; j++)
        {
            if (customermovie_name[i] == movie_action[j])
            {
                rev_action += customermovie_price[i];
                category = true;
            }
            else if (customermovie_name[i] == movie_animation[j])
            {
                rev_animation += customermovie_price[i];
                category = true;
            }
            else if (customermovie_name[i] == movie_comedy[j])
            {
                rev_comedy += customermovie_price[i];
                category = true;
            }
            else if (customermovie_name[i] == movie_crime[j])
            {
                rev_crime += customermovie_price[i];
                category = true;
            }
            else if (customermovie_name[i] == movie_fantasy[j])
            {
                rev_fantasy += customermovie_price[i];
                category = true;
            }
            else if (customermovie_name[i] == movie_historical[j])
            {
                rev_historical += customermovie_price[i];
                category = true;
            }
            else if (customermovie_name[i] == movie_horror[j])
            {
                rev_horror += customermovie_price[i];
                category = true;
            }
            else if (customermovie_name[i] == movie_sciencefiction[j])
            {
                rev_sciencefiction += customermovie_price[i];
                category = true;
            }
            else if (customermovie_name[i] == movie_thriller[j])
            {
                rev_thriller += customermovie_price[i];
                category = true;
            }
        }
    }
    cout << "Genre\t\t\tRevenue" << endl;
    cout << "-------------------------------" << endl;
    cout << "Action\t\t\tRs." << rev_action << endl;
    cout << "Animation\t\tRs." << rev_animation << endl;
    cout << "Comedy\t\t\tRs." << rev_comedy << endl;
    cout << "Crime\t\t\tRs." << rev_crime << endl;
    cout << "Fantasy\t\t\tRs." << rev_fantasy << endl;
    cout << "Historical\t\tRs." << rev_historical << endl;
    cout << "Horror\t\t\tRs." << rev_horror << endl;
    cout << "Science Fiction\t\tRs." << rev_sciencefiction << endl;
    cout << "Thriller\t\tRs." << rev_thriller << endl;
    cout << "Press any key to continue...";
    getch();
}
void totalticketssold()
{
    system("cls");
    cout << "Tickets sales " << endl;
    cout << "Total sold tickets " << count << endl;
    int child = 0;
    int adult = 0;
    int seniorcitizen = 0;
    for (int i = 0; i < count; i++)
    {
        if (customer_age[i] < 13)
            child++;
        if (customer_age[i] > 13 && customer_age[i] <= 50)
            adult++;
        if (customer_age[i] > 50)
            seniorcitizen++;
    }
    cout << "Total childrens :     " << child << endl;
    cout << "Total adults :        " << adult << endl;
    cout << "Total seniorcitizen : " << seniorcitizen << endl;
    cout << "Press any key to continue " << endl;
    getch();
}
void cancelbooking()
{
    system("cls");
    cout << "Cancel Booking " << endl;
    string customername;
    cout << "Enter the name of person that you want booking to cancel out " << endl;
    cin >> customername;
    for (int i = 0; i < count; i++)
    {
        if (customer_name[i] == customername)
        {
            customer_name[i] = "";
            customer_age[i] = 0;
            customermovie_name[i] = "";
            customermovie_price[i] = 0;
            cout << "Successfully the booking is cancelled " << endl;
        }
    }
    savecustomer();
    savehall();

    cout << "Press any key to continue " << endl;
    getch();
}
void applydiscount()
{
    system("cls");
    cout << "Discounted offer " << endl;
    genremenu();
    int selection;
    cout << "Enter the genre ";
    cin >> selection;
    cin.ignore();
    string moviename;
    cout << "Enter movie name to apply discount: ";
    getline(cin, moviename);
    bool found = false;
    int discount;
    if (selection == 1)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_action[i] == moviename)
            {
                cout << "Current price: Rs." << movie_actionprice[i] << endl;
                cout << "Enter discount %: ";
                cin >> discount;
                movie_actionprice[i] -= movie_actionprice[i] * discount / 100;
                cout << "New price: Rs." << movie_actionprice[i] << endl;
                found = true;
                savemovie();
                cout << "Press any key to continue ";
                getch();
                break;
            }
    }
    else if (selection == 2)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_animation[i] == moviename)
            {
                cout << "Current price: Rs." << movie_animationprice[i] << endl;
                cout << "Enter discount %: ";
                cin >> discount;
                movie_animationprice[i] -= movie_animationprice[i] * discount / 100;
                cout << "New price: Rs." << movie_animationprice[i] << endl;
                found = true;
                savemovie();
                cout << "Press any key to continue ";
                getch();
                break;
            }
    }
    else if (selection == 3)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_comedy[i] == moviename)
            {
                cout << "Current price: Rs." << movie_comedyprice[i] << endl;
                cout << "Enter discount %: ";
                cin >> discount;
                movie_comedyprice[i] -= movie_comedyprice[i] * discount / 100;
                cout << "New price: Rs." << movie_comedyprice[i] << endl;
                found = true;
                savemovie();
                cout << "Press any key to continue ";
                getch();
                break;
            }
    }
    else if (selection == 4)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_crime[i] == moviename)
            {
                cout << "Current price: Rs." << movie_crimeprice[i] << endl;
                cout << "Enter discount %: ";
                cin >> discount;
                movie_crimeprice[i] -= movie_crimeprice[i] * discount / 100;
                cout << "New price: Rs." << movie_crimeprice[i] << endl;
                found = true;
                savemovie();
                cout << "Press any key to continue ";
                getch();
                break;
            }
    }
    else if (selection == 5)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_fantasy[i] == moviename)
            {
                cout << "Current price: Rs." << movie_fantasyprice[i] << endl;
                cout << "Enter discount %: ";
                cin >> discount;
                movie_fantasyprice[i] -= movie_fantasyprice[i] * discount / 100;
                cout << "New price: Rs." << movie_fantasyprice[i] << endl;
                found = true;
                savemovie();
                cout << "Press any key to continue ";
                getch();
                break;
            }
    }
    else if (selection == 6)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_historical[i] == moviename)
            {
                cout << "Current price: Rs." << movie_historicalprice[i] << endl;
                cout << "Enter discount %: ";
                cin >> discount;
                movie_historicalprice[i] -= movie_historicalprice[i] * discount / 100;
                cout << "New price: Rs." << movie_historicalprice[i] << endl;
                found = true;
                savemovie();
                cout << "Press any key to continue ";
                getch();
                break;
            }
    }
    else if (selection == 7)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_horror[i] == moviename)
            {
                cout << "Current price: Rs." << movie_horrorprice[i] << endl;
                cout << "Enter discount %: ";
                cin >> discount;
                movie_horrorprice[i] -= movie_horrorprice[i] * discount / 100;
                cout << "New price: Rs." << movie_horrorprice[i] << endl;
                found = true;
                savemovie();
                cout << "Press any key to continue ";
                getch();
                break;
            }
    }
    else if (selection == 8)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_sciencefiction[i] == moviename)
            {
                cout << "Current price: Rs." << movie_sciencefictionprice[i] << endl;
                cout << "Enter discount %: ";
                cin >> discount;
                movie_sciencefictionprice[i] -= movie_sciencefictionprice[i] * discount / 100;
                cout << "New price: Rs." << movie_sciencefictionprice[i] << endl;
                found = true;
                savemovie();
                cout << "Press any key to continue ";
                getch();
                break;
            }
    }
    else if (selection == 9)
    {
        for (int i = 0; i < movie_count; i++)
            if (movie_thriller[i] == moviename)
            {
                cout << "Current price: Rs." << movie_thrillerprice[i] << endl;
                cout << "Enter discount %: ";
                cin >> discount;
                movie_thrillerprice[i] -= movie_thrillerprice[i] * discount / 100;
                cout << "New price: Rs." << movie_thrillerprice[i] << endl;
                found = true;
                savemovie();
                cout << "Press any key to continue ";
                getch();
                break;
            }
    }
}

void adminmenu()
{
    system("cls");
    string admin_user;
    int admin_password;
    for (int i = 1; i <= 3; i++)
    {
        system("cls");
        cout << "Login attempt " << i << endl;
        cout << "Enter the admin username ";
        cin >> admin_user;
        cout << "Enter the admin password ";
        cin >> admin_password;
        if (admin_user == "admin" && admin_password == 12345)
        {
            cout << "LOGIN SUCCESSFULLY " << endl;
            while (true)
            {
                system("cls");
                cout << "Admin Menu " << endl;
                cout << "1. Add movie " << endl;
                cout << "2. Update movie " << endl;
                cout << "3. Delete movie " << endl;
                cout << "4. View movie " << endl;
                cout << "5. Add hall " << endl;
                cout << "6. Delete hall " << endl;
                cout << "7. View hall " << endl;
                cout << "8. Logout " << endl;
                cout << "Enter the choice ";
                int admin_choice;
                cin >> admin_choice;
                if (admin_choice == 1)
                {
                    addmovie();
                }
                else if (admin_choice == 2)
                {
                    updatemovie();
                }
                else if (admin_choice == 3)
                {
                    deletemovie();
                }
                else if (admin_choice == 4)
                {
                    viewmovie();
                }
                else if (admin_choice == 5)
                {
                    addhall();
                }
                else if (admin_choice == 6)
                {
                    deletehall();
                }
                else if (admin_choice == 7)
                {
                    viewhall();
                }
                else if (admin_choice == 8)
                {
                    cout << "Press any key to Logging out of admin menu ";
                    getch();
                    break;
                }
            }
            break;
        }
        else
        {
            cout << "Username and password is invalid " << endl;
        }
        cout << "Press any key to continue " << endl;

        getch();
    }
}
void managementmenu()
{
    system("cls");
    string management_user;
    int management_password;
    for (int i = 1; i <= 3; i++)
    {
        system("cls");
        cout << "Login attempt " << i << endl;
        cout << "Enter the management username ";
        cin >> management_user;
        cout << "Enter the admin password ";
        cin >> management_password;
        if (management_user == "management" && management_password == 12345)
        {
            cout << "LOGIN SUCCESSFULLY " << endl;
            while (true)
            {
                system("cls");
                cout << "Management menu " << endl;
                cout << "1. View customer booking  " << endl;
                cout << "2. Search Customer by Name " << endl;
                cout << "3. View total Revenue " << endl;
                cout << "4. View Revenue by genre " << endl;
                cout << "5. View total tickets sold " << endl;
                cout << "6. Cancel Booking " << endl;
                cout << "7. Apply discount for movie " << endl;
                cout << "8. Logout " << endl;
                int manage_choice;
                cout << "Enter the choice ";
                cin >> manage_choice;
                if (manage_choice == 1)
                {
                    viewcustomerbooking();
                }
                else if (manage_choice == 2)
                {
                    searchcustomerbyname();
                }
                else if (manage_choice == 3)
                {
                    totalrevenue();
                }
                else if (manage_choice == 4)
                {
                    revenuebygenre();
                }
                else if (manage_choice == 5)
                {
                    totalticketssold();
                }
                else if (manage_choice == 6)
                {
                    cancelbooking();
                }
                else if (manage_choice == 7)
                {
                    applydiscount();
                }
                else if (manage_choice == 8)
                {
                    cout << "Press any key to Logging out of management menu ";
                    getch();
                    break;
                }
            }
            break;
        }
        else
        {
            cout << "Username and password is invalid " << endl;
        }
        cout << "Press any key to continue " << endl;

        getch();
    }
}
void customermenu()
{
    system("cls");
    string name;
    cout << "Enter your name ";
    cin >> name;
    int age;
    cout << "Enter your age ";
    cin >> age;
    cout << "Press any key to continue ";
    getch();
    system("cls");
    cout << "Welcome to the  Movie Theater " << endl;
    genremenu();
    int moviechoice;
    cout << "Enter the choice you want ";
    cin >> moviechoice;
    showMoviesByGenre(moviechoice);
    string movie_name;
    cout << "Enter the movie name you want to watch ";
    cin.ignore();
    getline(cin, movie_name);
    // int selected_price;
    int selected_price;
    selected_price = findPrice(moviechoice, movie_name);
    if (selected_price == -1)
    {
        cout << "Movie not found. Booking not confirmed." << endl;
        cout << "Press any key to continue ";
        getch();
        return; // exit the function early
    }
    cout << "\n--- Select Hall ---" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ".\t" << movie_theater[i];
        if (hallcapacity[i] >= 3)
            cout << "\t[FULL]" << endl;
        else
            cout << "\t[Seats left: " << 3 - hallcapacity[i] << "]" << endl;
    }

    int hallchoice;
    cout << "Choose Hall (1-3): ";
    cin >> hallchoice;
    hallchoice--; // make it 0-based
    bool found = false;
    if (hallcapacity[hallchoice] >= 3)
    {
        cout << "Hall full! Moving to next available hall..." << endl;
        for (int i = 0; i < 3; i++)
        {
            if (hallcapacity[i] < 3)
            {
                hallchoice = i;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "All halls are full!" << endl;
        }
    }

    {
        system("cls");
        hallcapacity[hallchoice]++;
        customerHall[count] = hallchoice;
        customer_name[count] = name;
        customer_age[count] = age;
        customermovie_name[count] = movie_name;
        customermovie_price[count] = selected_price;
        count++;
        savecustomer();
        savehall();
        cout << "================================" << endl;
        cout << "|      BOOKING Confirmed       |" << endl;
        cout << "================================" << endl;
        cout << "Customer\t" << name << endl;
        cout << "Age \t" << age << endl;
        cout << "Movie:\t" << movie_name << endl;
        cout << "Price:\tRs." << selected_price << endl;
        cout << "Hall  :\t" << movie_theater[hallchoice] << endl;
        cout << "Seat  :\t" << hallcapacity[hallchoice] << "/3" << endl;
    }

    cout << "Press any key to continue " << endl;
    getch();
}
//--------------------------Data structure ends
int main()
{ // body of main started
    while (true)
    { // main while loop started
        system("cls");
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "^^^^^^^MOVIE THEATER MANAGEMENT SYSTEM^^^^^^^" << endl;
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        int choice;
        cout << "1. Admin " << endl;
        cout << "2. Management " << endl;
        cout << "3. Customer " << endl;
        cout << "4. Exit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        { // choice1 start
            adminmenu();
        } // choice1 ended
        else if (choice == 2)
        { // choice2 start
            managementmenu();
        } // choice2 ended
        else if (choice == 3)
        { // choice3 start
            customermenu();
        } // choice3 ended
        else if (choice == 4)
        { // choice4 start
            cout << "Thank you for visiting movie theater " << endl;

            break;
        } // choice4 ended
        else
        {
            cout << "Enter a valid choice ";
            getch();
        }

    } // main while loop ended
} // body of main ended
