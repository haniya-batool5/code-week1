#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int total = 100;
    int index = 10;
    int count = 0;
    int count_movie = 0;
    int movie_count = 10;
    string movie_action[total] = {"John Wick", "Mad Max: Fury Road", "The Dark Knight", "Gladiator", "Mission: Impossible _ Fallout", "Avengers: Endgame", "Die Hard", "The Matrix", "Extraction", "Fast & Furious 7"};
    int movie_actionprice[total] = {1000, 1300, 490, 670, 875, 999, 445, 278, 890, 500};
    string movie_animation[total] = {"Toy Story", "Frozen", "Finding Nemo", "The Lion King", "Shrek", "Kung Fu Panda", "Spider-Man: Into the Spider-Verse", "Coco", "Despicable Me", "How to Train Your Dragon"};
    int movie_animationprice[total] = {850, 790, 550, 900, 1100, 1500, 2000, 1800, 2500, 1600};
    string movie_comedy[total] = {"The Hangover", "Superbad", "Step Brothers", "Dumb and Dumber", "21 Jump Street", "Rush Hour", "Home Alone", "The Mask", "Mean Girls", "We're the Millers"};
    int movie_comedyprice[total] = {1000, 1300, 490, 670, 875, 999, 445, 278, 890, 500};
    string movie_crime[total] = {"The Godfather", "Pulp Fiction", "The Dark Knight", "Goodfellas", "The Departed", "Scarface", "Se7en", "Casino", "Heat", "American Gangster"};
    int movie_crimeprice[total] = {850, 790, 550, 900, 1100, 1500, 2000, 1800, 2500, 1600};
    string movie_fantasy[total] = {"The Lord of the Rings: The Fellowship of the Ring", "Harry Potter and the Sorcerer's Stone", "The Hobbit: An Unexpected Journey", "Pirates of the Caribbean: The Curse of the Black Pearl", "Pan's Labyrinth", "The Chronicles of Narnia: The Lion, the Witch and the Wardrobe", "Doctor Strange", "Stardust", "Clash of the Titans", "Alice in Wonderland"};
    int movie_fantasyprice[total] = {1000, 1300, 490, 670, 875, 999, 445, 278, 890, 500};
    string movie_historical[total] = {"Gladiator", "Braveheart", "Schindler's List", "12 Years a Slave", "The Patriot", "Lincoln", "Troy", "Kingdom of Heaven", "Dunkirk", "The Imitation Game"};
    int movie_historicalprice[total] = {850, 790, 550, 900, 1100, 1500, 2000, 1800, 2500, 1600};
    string movie_horror[total] = {"The Conjuring", "Insidious", "The Exorcist", "A Nightmare on Elm Street", "The Ring", "Hereditary", "IT", "The Nun", "Halloween", "The Texas Chain Saw Massacre"};
    int movie_horrorprice[total] = {1000, 1300, 490, 670, 875, 999, 445, 278, 890, 500};
    string movie_sciencefiction[total] = {"Interstellar", "Inception", "The Matrix", "Blade Runner 2049", "Arrival", "Avatar", "Star Wars: A New Hope", "The Martian", "Minority Report", "Ex Machina"};
    int movie_sciencefictionprice[total] = {450, 630, 980, 770, 555, 390, 1000, 950, 999, 1700};
    string movie_thriller[total] = {"Se7en", "Gone Girl", "Shutter Island", "The Silence of the Lambs", "Fight Club", "Prisoners", "Zodiac", "The Sixth Sense", "Oldboy", "Nightcrawler"};
    int movie_thrillerprice[total] = {850, 790, 550, 900, 1100, 1500, 2000, 1800, 2500, 1600};
    string movie_theater[3] = {"Lost in the spotlight", "echo stage ", " Dreams capes"};
    string customer_name[total];
    int customer_age[total];
    string customermovie_name[total];
    int customermovie_price[total];
    string usernameadmin;
    int passwordadmin;
    int hallCapacity[3] = {0, 0, 0};
    int customerHall[100] = {0};

    while (true)
    { // beginning of the loop
        system("cls");
        // main haeder of movie theater
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "^^^^^^^MOVIE THEATER MANAGEMENT SYSTEM^^^^^^^" << endl;
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "1. Admin menu " << endl;
        cout << "2. Management menu " << endl;
        cout << "3. Customer menu " << endl;
        cout << "4. Exit " << endl;
        int userchoice;
        cout << "Enter the choice (1-4) : ";
        cin >> userchoice;
        if (userchoice == 1)
        {
            // admin menu option
            int countattempt = 3;
            for (int i = 0; i < countattempt; i++)
            {
                system("cls");
                cout << "Admin menu : Login attempt  " << i + 1 << endl;
                cout << "Enter username ";
                cin >> usernameadmin;
                cout << "Enter password ";
                cin >> passwordadmin;
                if (passwordadmin == 12345 && usernameadmin == "admin")
                {
                    cout << " Login Successful" << endl;
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
                        int admin_choice;
                        cout << "Enter the choice (1-7) ";
                        cin >> admin_choice;
                        if (admin_choice == 1)
                        {
                            // add movie
                            system("cls");
                            int genrechoice;
                            cout << "These are  the category  "<<endl;
                            cout << "1. Action Genre " << endl;
                            cout << "2. Animation Genre " << endl;
                            cout << "3. Comedy Genre " << endl;
                            cout << "4. Crime Genre " << endl;
                            cout << "5. Fantasy Genre " << endl;
                            cout << "6. Historical Genre " << endl;
                            cout << "7. Horror Genre " << endl;
                            cout << "8. Science Fiction " << endl;
                            cout << "9. Thriller Genre " << endl;
                            cout << "Enter the Genre that you want to add movie ";
                            cin >> genrechoice;
                            string newmovie;
                            int newprice;
                            cout << "Enter the movie name ";
                            cin.ignore();
                            getline(cin, newmovie);
                            cout << "Enter the price of movie ";
                            cin >> newprice;

                            if (genrechoice == 1)
                            {
                                movie_action[index] = newmovie;
                                movie_actionprice[index] = newprice;
                            }
                            else if (genrechoice == 2)
                            {
                                movie_animation[index] = newmovie;
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
                            cout << "\n Movie added successfully!" << endl;
                            cout << "Press any key to continue...";
                            getch();
                        }

                        else if (admin_choice == 2)
                        {
                            // update movie
                            system("cls");
                            int type;
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
                            cout << "Enter the Genre that you want to upgrade movie ";
                            cin >> type;
                            if (type == 1)
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
                                    cout << "Your new upgraded record for movie added successfully " << endl;
                                    cout << "Press any key to continue " << endl;
                                    getch();
                                }
                                else
                                {
                                    cout << " record not found" << endl;
                                }
                            }
                            else if (type == 2)
                            {
                                system("cls");
                                cin.ignore();
                                string moviename;
                                cout << "Enter the movie name that you want to upgrade ";
                                getline(cin, moviename);
                                // cin.ignore();
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
                                    cout << "Your new upgraded record for movie added successfully " << endl;
                                    cout << "Press any key to continue " << endl;
                                    getch();
                                }
                                else
                                {
                                    cout << " record not found" << endl;
                                }
                            }
                            else if (type == 3)
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
                                    cout << "Your new upgraded record for movie added successfully " << endl;
                                    cout << "Press any key to continue " << endl;
                                    getch();
                                }
                                else
                                {
                                    cout << " record not found" << endl;
                                }
                            }
                            else if (type == 4)
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
                                    cout << "Your new upgraded record for movie added successfully " << endl;
                                    cout << "Press any key to continue " << endl;
                                    getch();
                                }
                                else
                                {
                                    cout << " record not found" << endl;
                                }
                            }
                            else if (type == 5)
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
                                    cout << "Your new upgraded record for movie added successfully " << endl;
                                    cout << "Press any key to continue " << endl;
                                    getch();
                                }
                                else
                                {
                                    cout << " record not found" << endl;
                                }
                            }
                            else if (type == 6)
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
                                    cout << "Your new upgraded record for movie added successfully " << endl;
                                    cout << "Press any key to continue " << endl;
                                    getch();
                                }
                                else
                                {
                                    cout << " record not found" << endl;
                                }
                            }
                            else if (type == 7)
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
                                    cout << "Your new upgraded record for movie added successfully " << endl;
                                    cout << "Press any key to continue " << endl;
                                    getch();
                                }
                                else
                                {
                                    cout << " record not found" << endl;
                                }
                            }
                            else if (type == 8)
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
                                    cout << "Your new upgraded record for movie added successfully " << endl;
                                    cout << "Press any key to continue " << endl;
                                    getch();
                                }
                                else
                                {
                                    cout << " record not found" << endl;
                                }
                            }
                            else if (type == 9)
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
                                    int movie;
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
                                    cout << "Your new upgraded record for movie added successfully " << endl;
                                    cout << "Press any key to continue " << endl;
                                    getch();
                                }
                                else
                                {
                                    cout << " record not found" << endl;
                                }
                            }
                            else
                            {
                                cout << "Invalid Choice.Enter the valid choice " << endl;
                            }
                        }
                        else if (admin_choice == 3)
                        {
                            // delete movie
                            system("cls");
                            int type;
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
                            cout << "Enter the Genre that you want to upgrade movie ";
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
                                }
                                else
                                {
                                    cout << "Record not found " << endl;
                                }
                            }
                            else
                            {
                                cout << "Invalid choice.Enter the valid choice " << endl;
                            }
                        }
                        else if (admin_choice == 4)
                        {
                            // view movie
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

                        else if (admin_choice == 5)
                        {
                            //  add hall

                            system("cls");
                            cout << "=== Add Hall ===" << endl;
                            cout << "Current Halls:" << endl;
                            for (int i = 0; i < 3; i++)
                            {
                                cout << i + 1 << ".\t" << movie_theater[i] << "\t[" << hallCapacity[i] << "/3]" << endl;
                            }
                            cout << "\nWhich hall name to update? (1-3): ";
                            int hallno;
                            cin >> hallno;
                            hallno--;
                            cout << "Enter new hall name: ";
                            cin.ignore();
                            getline(cin, movie_theater[hallno]);
                            cout << "Hall updated successfully!" << endl;
                            cout << "Press any key to continue...";
                            getch();
                        }
                        else if (admin_choice == 6)
                        {
                            // delete hall

                            system("cls");
                            cout << "=== Delete Hall ===" << endl;
                            for (int i = 0; i < 3; i++)
                            {
                                cout << i + 1 << ".\t" << movie_theater[i] << "\t[" << hallCapacity[i] << " customers]" << endl;
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
                            hallCapacity[hallno] = 0;
                            cout << "Hall cleared successfully!" << endl;
                            cout << "Press any key to continue...";
                            getch();
                        }
                        else if (admin_choice == 7)
                        {
                            // view hall

                            system("cls");
                            cout << "=== Hall Status ===" << endl;
                            for (int i = 0; i < 3; i++)
                            {
                                cout << "\nHall " << i + 1 << ": " << movie_theater[i] << endl;
                                cout << "Seats Filled: " << hallCapacity[i] << "/3" << endl;

                                // show customers in this hall
                                for (int j = 0; j < count; j++)
                                {
                                    if (customerHall[j] == i && customer_name[j] != "")
                                    {
                                        cout << "  - " << customer_name[j] << "\t" << customermovie_name[j] << "\tRs." << customermovie_price[j] << endl;
                                    }
                                }

                                if (hallCapacity[i] >= 3)
                                    cout << "Status: FULL" << endl;
                                else
                                    cout << "Status: " << 3 - hallCapacity[i] << " seats available" << endl;
                            }
                            cout << "\nPress any key to continue...";
                            getch();
                        }
                        else if (admin_choice == 8)
                        {
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
        else if (userchoice == 2)
        {
            system("cls");
            int attempt = 3;
            bool manage_attempt = false;
            for (int i = 0; i < attempt; i++)
            {
                int manage_pass;
                string manage_user;
                cout << "Management menu : Login attempt  " << i + 1 << endl;
                cout << "Enter the management username ";
                cin >> manage_user;
                cout << "Enter the management password ";
                cin >> manage_pass;
                if (manage_user == "management" && manage_pass == 12345)
                {
                    cout << " Login Successful" << endl;
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
                        cout << "Enter the management choice ";
                        cin >> manage_choice;
                        if (manage_choice == 1)
                        {
                            // all customer bookings
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
                        else if (manage_choice == 2)
                        {
                            // search customer by name
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
                        else if (manage_choice == 3)
                        {
                            // view total revenue
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
                        else if (manage_choice == 4)
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
                        
                        else if (manage_choice == 5)
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
                        else if (manage_choice == 6)
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
                                }
                            }
                            cout << "Press any key to continue " << endl;
                            getch();
                        }
                        else if (manage_choice == 7)
                        {
                            system("cls");
                            cout << "Discounted offer " << endl;

                            cout << "1. Action Genre " << endl;
                            cout << "2. Animation Genre " << endl;
                            cout << "3. Comedy Genre " << endl;
                            cout << "4. Crime Genre " << endl;
                            cout << "5. Fantasy Genre " << endl;
                            cout << "6. Historical Genre " << endl;
                            cout << "7. Horror Genre " << endl;
                            cout << "8. Science Fiction " << endl;
                            cout << "9. Thriller Genre " << endl;
                            cout << "Select the Category " << endl;
                            int selection;
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
                                        cout << "Press any key to continue ";
                                        getch();
                                        break;
                                    }
                            }
                        }
                        else if (manage_choice == 8)
                        {
                            cout << "Thank you for using management menu " << endl;
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

        else if (userchoice == 3)
        {
            // customer menu
            system("cls");
            string name;
            cout << "Enter your name ";
            cin >> name;
            int age;
            cout << "Enter your age ";
            cin >> age;
            // customer_name[count] = name;
            // customer_age[count] = age;
            // count++;
            cout << "Press any key to continue ";
            getch();
            system("cls");
            cout << "Welcome to the  Movie Theater " << endl;

            {
                // movies menu
                system("cls");
                cout << "What type of movie you want to watch " << endl;
                cout << "1. Action Genre " << endl;
                cout << "2. Animation Genre " << endl;
                cout << "3. Comedy Genre " << endl;
                cout << "4. Crime Genre " << endl;
                cout << "5. Fantasy Genre " << endl;
                cout << "6. Historical Genre " << endl;
                cout << "7. Horror Genre " << endl;
                cout << "8. Science Fiction " << endl;
                cout << "9. Thriller Genre " << endl;
                int moviechoice;
                cout << "Enter the movie you want to see : ";
                cin >> moviechoice;
                if (moviechoice == 1)
                {
                    // action genre menu
                    system("cls");
                    cout << "Action movies  \n";
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_action[i] != "")
                        {
                            cout << i + 1 << "\t " << movie_action[i] << " : " << movie_actionprice[i] << endl;
                        }
                    }
                }
                else if (moviechoice == 2)
                {
                    // animation genre menu
                    system("cls");
                    cout << "Animation movies  \n";
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_animation[i] != "")
                        {
                            {
                                cout << i + 1 << "\t " << movie_animation[i] << " : " << movie_actionprice[i] << endl;
                            }
                        }
                    }
                }
                else if (moviechoice == 3)
                {
                    // comedy genre menu
                    system("cls");
                    cout << "Comedy movies  \n";
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_comedy[i] != "")
                        {
                            cout << i + 1 << "\t " << movie_comedy[i] << " : " << movie_comedyprice[i] << endl;
                        }
                    }
                }
                else if (moviechoice == 4)
                {
                    // crime genre
                    system("cls");
                    cout << "Crime movies  \n";
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_crime[i] != "")
                            cout << i + 1 << "\t " << movie_crime[i] << " : " << movie_crimeprice[i] << endl;
                    }
                }
                else if (moviechoice == 5)
                {
                    // fantasy genre
                    system("cls");
                    cout << "Fantasy movies  \n";
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_fantasy[i] != "")
                        {
                            cout << i + 1 << "\t " << movie_fantasy[i] << " : " << movie_fantasyprice[i] << endl;
                        }
                    }
                }
                else if (moviechoice == 6)
                {
                    // historical genre
                    system("cls");
                    cout << "Historical movies  \n";
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_historical[i] != "")
                        {
                            cout << i + 1 << "\t " << movie_historical[i] << " : " << movie_historicalprice[i] << endl;
                        }
                    }
                }
                else if (moviechoice == 7)
                {
                    // horror genre
                    system("cls");
                    cout << "Horror movies  \n";
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_horror[i] != "")
                        {
                            cout << i + 1 << "\t " << movie_horror[i] << " : " << movie_horrorprice[i] << endl;
                        }
                    }
                }
                else if (moviechoice == 8)
                {
                    // science fiction
                    system("cls");
                    cout << "Science Fiction movies  \n";
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_sciencefiction[i] != "")
                        {
                            cout << i + 1 << "\t " << movie_sciencefiction[i] << " : " << movie_sciencefictionprice[i] << endl;
                        }
                    }
                }
                else if (moviechoice == 9)
                {
                    // thriller genre
                    system("cls");
                    cout << "Thriller movies  \n";
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_thriller[i] != "")
                        {
                            cout << i + 1 << "\t " << movie_thriller[i] << " :" << movie_thrillerprice[i] << endl;
                        }
                    }
                }
                string movie_name;
                cout << "Enter the movie name you want to watch ";
                cin.ignore();
                getline(cin, movie_name);
                int Selected_price;
                bool found = false;
                if (moviechoice == 1)
                {
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_action[i] == movie_name)
                        {
                            Selected_price = movie_actionprice[i];
                            found = true;
                            break;
                        }
                    }
                }
                else if (moviechoice == 2)
                {
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_animation[i] == movie_name)
                        {
                            Selected_price = movie_animationprice[i];
                            found = true;
                            break;
                        }
                    }
                }
                else if (moviechoice == 3)
                {
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_comedy[i] == movie_name)
                        {
                            Selected_price = movie_comedyprice[i];
                            found = true;
                            break;
                        }
                    }
                }
                else if (moviechoice == 4)
                {
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_crime[i] == movie_name)
                        {
                            Selected_price = movie_crimeprice[i];
                            found = true;
                            break;
                        }
                    }
                }
                else if (moviechoice == 5)
                {
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_fantasy[i] == movie_name)
                        {
                            Selected_price = movie_fantasyprice[i];
                            found = true;
                            break;
                        }
                    }
                }
                else if (moviechoice == 6)
                {
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_historical[i] == movie_name)
                        {
                            Selected_price = movie_historicalprice[i];
                            found = true;
                            break;
                        }
                    }
                }
                else if (moviechoice == 7)
                {
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_horror[i] == movie_name)
                        {
                            Selected_price = movie_horrorprice[i];
                            found = true;
                            break;
                        }
                    }
                }
                else if (moviechoice == 8)
                {
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_sciencefiction[i] == movie_name)
                        {
                            Selected_price = movie_sciencefictionprice[i];
                            found = true;
                            break;
                        }
                    }
                }
                else if (moviechoice == 9)
                {
                    for (int i = 0; i < movie_count; i++)
                    {
                        if (movie_thriller[i] == movie_name)
                        {
                            Selected_price = movie_thrillerprice[i];
                            found = true;
                            break;
                        }
                    }
                }
                cout << "\n--- Select Hall ---" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << i + 1 << ".\t" << movie_theater[i];
                    if (hallCapacity[i] >= 3)
                        cout << "\t[FULL]" << endl;
                    else
                        cout << "\t[Seats left: " << 3 - hallCapacity[i] << "]" << endl;
                }

                int hallchoice;
                cout << "Choose Hall (1-3): ";
                cin >> hallchoice;
                hallchoice--; // make it 0-based
                if (hallCapacity[hallchoice] >= 3)
                {
                    cout << "Hall full! Moving to next available hall..." << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        if (hallCapacity[i] < 3)
                        {
                            hallchoice = i;
                            break;
                        }
                    }
                }

                hallCapacity[hallchoice]++;
                customerHall[count] = hallchoice;
                if (found)
                {
                    system("cls");
                    customer_name[count] = name;
                    customer_age[count] = age;
                    customermovie_name[count] = movie_name;
                    customermovie_price[count] = Selected_price;
                    count++;
                    cout << "================================" << endl;
                    cout << "|      BOOKING Confirmed       |" << endl;
                    cout << "================================" << endl;
                    cout << "Customer\t" << name << endl;
                    cout << "Age \t" << age << endl;
                    cout << "Movie:\t" << movie_name << endl;
                    cout << "Price:\tRs." << Selected_price << endl;
                    cout << "Hall  :\t" << movie_theater[hallchoice] << endl;
                    cout << "Seat  :\t" << hallCapacity[hallchoice] << "/3" << endl;
                }
                else
                {
                    cout << "Movie not found. Booking not confirmed." << endl;
                }
            }

            cout << "Press any key to continue " << endl;
            getch();
        }

        else if (userchoice == 4)
        {
            // exit
            break;
        }
        else
        {
            cout << "Your choice is invalid. Please enter the choice (1-4)" << endl;
        }
    }
    cout << "Thanks for visiting the movie theater " << endl;
} // end of loop
