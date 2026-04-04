#include <iostream>
#include <conio.h>
using namespace std;

main()
{

  int TOTAL_STUDENTS = 1000; // total size
  int index = 7;

  // data strutures

  string nameArray[TOTAL_STUDENTS] = {"ali", "ammar", "sara", "usman", "zara", "bilal", "hina"};
  int ageArray[TOTAL_STUDENTS] = {19, 20, 18, 21, 19, 20, 18};
  float matricArray[TOTAL_STUDENTS] = {1050, 890, 970, 1020, 760, 880, 995};
  float interArray[TOTAL_STUDENTS] = {980, 850, 910, 870, 820, 940, 860};
  float ecatArray[TOTAL_STUDENTS] = {350, 200, 290, 310, 180, 260, 320};
  string pref1Array[TOTAL_STUDENTS] = {"CE", "CS", "EE", "CS", "CE", "EE", "CS"};
  string pref2Array[TOTAL_STUDENTS] = {"CS", "CE", "CS", "CE", "CS", "CS", "CE"};
  string pref3Array[TOTAL_STUDENTS] = {"EE", "CS", "CE", "EE", "EE", "CE", "EE"};
  float aggreArray[TOTAL_STUDENTS];

  // CRUD  Create,Read,Update,Delete
  while (true)
  {
    // main header of ums
    system("cls");
    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "-----University Admission Management System-----" << endl;
    cout << "------------------------------------------------" << endl;

    cout << "User menu " << endl;
    cout << "1 Admin " << endl;
    cout << "2 Student" << endl;
    cout << "3 to Exit " << endl;
    cout << "Choose option : ";
    int userOption;
    cin >> userOption;

    cout << "You choose " << userOption;
    if (userOption == 1)
    {

      // write here the admin code
      for (int i = 0; i < 3; i++)
      {
        system("cls");
        cout << "Admin menu : Login attempt " << i + 1 << endl;
        cout << "Enter username:" << endl;
        string username;
        cin >> username;
        cout << "Enter password :" << endl;
        string password;
        cin >> password;
        if (username == "admin" && password == "123")
        {
          cout << " login success " << endl;
          while (true)

          {
            system("cls");
            cout << "1 show all students " << endl;
            cout << "2 search students " << endl;
            cout << "3 update student record " << endl;
            cout << "4 Generate Merit List :" << endl;
            cout << "5 Delete Record" << endl;
            cout << " 6 Logout" << endl;
            cout << "Choose the option :";
            int adminoption;
            cin >> adminoption;
            if (adminoption == 1)
            {
              cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3 " << endl;
              for (int i = 0; i < index; i++)
              {
                if (nameArray[i] != "")
                {
                  cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t" << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                }
              }
            }
            else if (adminoption == 2)
            {
              // find student by name
              cout << "Enter the Name You  want search";
              string name;
              cin >> name;
              bool found = false;
              int foundindex = -1;
              for (int i = 0; i < index; i = i + 1)
              {
                if (nameArray[i] == name)
                {
                  foundindex = i;
                  found = true;
                }
              }
              if (found == false)
              {
                cout << "record not found against name" << name << endl;
              }
              else
              {
                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3 " << endl;
                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
              }
            }
            else if (adminoption == 3)
            { // update record
              cout << "enter name you want to update  record of " << endl;

              string name;
              cin >> name;
              bool found = false;
              int foundindex = -1;
              for (int i = 0; i < index; i = i + 1)
              {
                if (nameArray[i] == name)
                {
                  foundindex = i;
                  found = true;
                }
              }
              if (found == true)
              {
                cout << "------ old record------" << endl;
                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3 " << endl;
                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                cout << "Enter new record for update " << endl;
                cout << "Enter your name  : ";
                string name;
                cin >> name;
                cout << "Enter age  : ";
                int age;
                cin >> age;
                cout << "Enter Matric Marks : ";
                float matric;
                cin >> matric;

                cout << "Enter FSC Marks : ";
                float fsc;
                cin >> fsc;
                cout << "Enter ECAT Marks : ";
                float ecat;
                cin >> ecat;
                cout << "Enter CS, CE,EE as your prefrences " << endl;

                cout << "Enter 1st prefrence : ";
                string pref1;
                cin >> pref1;

                cout << "Enter 2nd prefrence : ";
                string pref2;
                cin >> pref2;
                cout << "Enter 3rd prefrence : ";
                string pref3;
                cin >> pref3;

                nameArray[foundindex] = name;
                ageArray[foundindex] = age;
                matricArray[foundindex] = matric;
                interArray[foundindex] = fsc;
                ecatArray[foundindex] = ecat;
                pref1Array[foundindex] = pref1;
                pref2Array[foundindex] = pref2;
                pref3Array[foundindex] = pref3;
              }
              else
              {
                cout << " record not found" << endl;
              }
            }
            else if (adminoption == 4)
            {
              // generate merit list
              for (int i = 0; i < index; i = i + 1)
              {
                float aggre = matricArray[i] / 1100.0 * 100 * 0.30 + interArray[i] / 1100.0 * 100 * 0.4 + ecatArray[i] / 400 * 100 * 0.3;
                ageArray[i] = aggre;
              }
              // 77 ,  90 ,29, 33
              // sorting the data on basis of aggregate
              for (int i = 0; i < index; i++)
              {
                for (int j = i; j < index; j++)
                {
                  if (aggreArray[i] < aggreArray[j])
                  {
                    // swaping of name
                    string temp = nameArray[i];
                    nameArray[i] = nameArray[j];
                    nameArray[j] = temp;

                    // swaping of matric
                    float tempMatric = matricArray[i];
                    matricArray[i] = matricArray[j];
                    matricArray[j] = tempMatric;

                    // swaping of inter
                    float tempInter = interArray[i];
                    interArray[i] = interArray[j];
                    interArray[j] = tempInter;
                    // swaping of ecat
                    float tempEcat = ecatArray[i];
                    ecatArray[i] = ecatArray[j];
                    interArray[j] = tempEcat;

                    // swaping prefrences
                    string tempPref1 = pref1Array[i];
                    pref1Array[i] = pref1Array[j];
                    pref1Array[j] = tempPref1;

                    string tempPref2 = pref2Array[i];
                    pref2Array[i] = pref2Array[j];
                    pref2Array[j] = tempPref2;

                    string tempPref3 = pref3Array[i];
                    pref3Array[i] = pref3Array[j];
                    pref3Array[j] = tempPref3;

                    float tempaggre = aggreArray[i];
                    aggreArray[i] = aggreArray[j];
                    aggreArray[j] = tempaggre;
                  }
                }
              }

              // code to display all data with aggregate
              
              cout << "Name\tAge\tAggregate " << endl;
              for (int i = 0; i < index; i++)
              {
                if (nameArray[i] != "")
                {
                  cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggreArray[i] << endl;
                }

                // admit student into disciplines
                
              }
            }
            else if (adminoption == 5)
            {
              // delete student record"\t" << interArray
              cout << "enter name you want to delete  record of " << endl;

              string name;
              cin >> name;
              bool found = false;
              int foundindex = -1;
              for (int i = 0; i < index; i = i + 1)
              {
                if (nameArray[i] == name)
                {
                  foundindex = i;
                  found = true;
                }
              }
              if (found == true)
              {
                nameArray[foundindex] = "";
                ageArray[foundindex] = 0;
                matricArray[foundindex] = 0;
                interArray[foundindex] = 0;
                ecatArray[foundindex] = 0;
                pref1Array[foundindex] = "";
                pref2Array[foundindex] = "";
                pref3Array[foundindex] = "";
                cout << "Record of " << name << "Deleted" << endl;
              }
              else
              {
                cout << "record not found" << endl;
              }
            }

            else if (adminoption == 6)
            {
              break;
            }
            else
            {
              cout << "Wrong option selected " << endl;
            }
            cout << "press any key to continue " << endl;
            getch();
          }
          cout << "press any key to continue " << endl;
          getch();
          break;
        }
        else
        {
          cout << "Usename or password is invalid :" << endl;
        }
        cout << "Press any key to continue.. " << endl;

        getch();
      }
    }
    else if (userOption == 2)
    {
      // write here the stuent code
      system("cls");
      cout << "Welcome to UMS Student Menu" << endl;
      cout << "Enter your name  : ";
      string name;
      cin >> name;
      cout << "Enter age  : ";
      int age;
      cin >> age;
      cout << "Enter Matric Marks : ";
      float matric;
      cin >> matric;

      cout << "Enter FSC Marks : ";
      float fsc;
      cin >> fsc;
      cout << "Enter ECAT Marks : ";
      float ecat;
      cin >> ecat;
      cout << "Enter CS, CE,EE as your prefrences " << endl;

      cout << "Enter 1st prefrence : ";
      string pref1;
      cin >> pref1;

      cout << "Enter 2nd prefrence : ";
      string pref2;
      cin >> pref2;
      cout << "Enter 3rd prefrence : ";
      string pref3;
      cin >> pref3;
      nameArray[index] = name;
      ageArray[index] = age;
      matricArray[index] = matric;
      interArray[index] = fsc;
      ecatArray[index] = ecat;
      pref1Array[index] = pref1;
      pref2Array[index] = pref2;
      pref3Array[index] = pref3;
      index = index + 1;
      cout << "your data has been saved ";
      cout << "Press any key to continue ..";
      getch();
    }
    else if (userOption == 3)
    {
      break;
    }
    else
    {
      cout << "You entered wrong option " << endl;
    }
  } // end of our main while loop

  cout << endl
       << "Thanks for using this software ";
}
