/*
            Transport tree
                  Group Members
            466-M.fezan
            628-Umer malik
        sir it might not work as desired because the files location are provided as per my system.
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>
using namespace std;
class metro_bus {
protected:
    string starting_time, lastdeparture_time, headway_time, name;
    double base_ticket;
    int number_bus, number_station, serial_number;
public:
    metro_bus(string starttime, string endtime, string headwaytime, double basefare, int numberbus, int numberstation, int serialnumber)
        : starting_time(starttime), lastdeparture_time(endtime), headway_time(headwaytime), base_ticket(basefare),
          number_bus(numberbus), number_station(numberstation), serial_number(serialnumber) {}
    void display_info() {
        cout << "\t\t\t\t\t-------------------------\n";
        cout << "\t\t\t\t\tDisplaying Metro Bus Information\n";
        cout << "\t\t\t\t\t-------------------------\n";
        cout << "|       Total Buses:        | " << number_bus << " Buses\n";
        cout << "|       Total Stations:     | " << number_station << " Stations\n";
        cout << "|       Starting Time:      | " << starting_time << "\n";
        cout << "|       Last Departure Time:| " << lastdeparture_time << "\n";
        cout << "|       Headway Time:       | " << headway_time << "\n";
        cout << "|       Base Ticket:        | " << base_ticket << " PKR\n";
        cout << "\t\t\t\t\t-------------------------\n";
    }
    void display_station(string location) {
        cout << "All the Stations are given below:\n\n";
        string line;
        ifstream file(location);
        if (file.is_open()) {
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cout << "Unable to open file" << endl;
        }
    }

    void ticket_generator(string tlocation) {
        ifstream file(tlocation);
        if (file.is_open()) {
            file >> serial_number;
            file.close();
        } else {
            serial_number = 1;
        }
        cout << " Ticket Generated Successfully:\n";
        cout << "----------------------" << endl;
        cout << "| Transport Ticket     |" << endl;
        cout << "| Serial Number: " << serial_number << "   |" << endl;
        cout << "| Ticket Price: " << base_ticket << " PKR |" << endl;
        cout << "----------------------" << endl;
        serial_number++;
        ofstream file_out(tlocation);
        file_out << serial_number;
        file_out.close();
    }
    
void favourite(string metro_station_file,string favourite_folder) {
	
    cout << "\t\t\t\tPlease Enter your Name for Metro Bus Favourite File\n";
    cout << "\t\t\t\t-----------------------------------------\n";
    cout << "\t\t\t\t Name:-----------------------------\n";
    cout << "\t\t\t\t|                                       |\n";
    cout << "\t\t\t\t|  ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, name);
    cout << "\t\t\t\t-----------------------------------------\n";
    cout << "\n\t\t\t\t------------- File Created Successfully-------------\n";
    cout << "\n\t\t\t\t------------- Welcome " << name << " -------------\n";
    ofstream obj("C:\\Users\\ST\\Desktop\\files\\signin_details.txt", ios_base::app);
    obj << "\nUser's Name: " << name << endl;
    obj.close();

    while (true) {
        int id;
        display_station(metro_station_file);
        cout << "Please Enter the ID of Station you want to add to favourite\n";
        cin >> id;

        if (cin.fail() ||id==0|| (cin.peek() != EOF && cin.peek() != '\n')) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        ifstream file(metro_station_file);
        string line, station;
        int stationId;
        bool stationFound = false;

        if (file.is_open()) {
            while (getline(file, line)) {
                stringstream ss(line);
                ss >> stationId >> station;
                if (stationId == id) {
                    stationFound = true;
                    cout << "The station corresponding to ID " << id << " is :" << station << endl;
                    ofstream obj((favourite_folder + name + ".txt").c_str(), ios_base::app);
                    obj << id << "                " << station << endl;
                    cout << "Station Added Successfully!\n";
                    obj.close();
                    break;
                }
            }
            file.close();
        } else {
            cout << "Unable to open file" << endl;
        }

        if (!stationFound) {
            cout << "Station not found. Please try again.\n";
            continue;
        }

        while (true) {
            int temp;
            cout << "Enter 1 to add more stations to the Favourite list || Enter any other integer to exit:\n";
            cin >> temp;

            if (cin.fail() || (cin.peek() != EOF && cin.peek() != '\n')) {
                cout << "Invalid input! Please enter a valid number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (temp == 1) {
                break; 
            } else {
                return;
            }
        }
    }
}
    void show_fav(string location) {
        cout << "Please Enter the name of file of Favourite file:\n";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, name);

        ifstream obj(location + name + ".txt");
        if (obj.is_open()) {
            cout << "\t\t\t\t---------------Welcome Back " << name << "---------------" << endl;
            cout << "Here is your Favourite List:\nStation id\tStation Name\n\n";
            string s;
            while (getline(obj, s)) {
                cout << s << endl;
            }
            obj.close();
        } else {
            cout << "File does not exist." << endl;
        }
    }

void delete_favourite(string loc) {
    int ID;
    show_fav(loc);
    ifstream fin(loc + name + ".txt");
    ofstream file(loc + "COPY.TXT", ios::out | ios::app);

    if (!fin) {
        cout << "NO SUCH FILE EXISTS." << endl;
        return;
    }

    while (true) {
        cout << "ENTER STATION ID TO DELETE: ";
        cin >> ID;

        if (cin.fail() || (cin.peek() != EOF && cin.peek() != '\n')) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        break;
    }

    string line;
    bool idFound = false;
    while (getline(fin, line)) {
        stringstream ss(line);
        string idStr;
        getline(ss, idStr, ' ');
        int id = atoi(idStr.c_str());
        if (ID == id) {
            idFound = true;
            continue;  
        } else {
            file << line << "\n";  
        }
    }
    fin.close();
    file.close();
    if (!idFound) {
        cout << "INVALID ID. NO STATION FOUND CORRESPONDING WITH THIS ID." << endl;
    } else {
        cout << "SUCCESSFULLY DELETED." << endl;
    }
    remove((loc + name + ".txt").c_str());
    rename((loc + "COPY.TXT").c_str(), (loc + name + ".txt").c_str());
}
};
class speedo_bus : public metro_bus {
public:
    speedo_bus(string starttime, string endtime, string headwaytime, double basefare, int numberbus, int numberstation, int serialnumber)
        : metro_bus(starttime, endtime, headwaytime, basefare, numberbus, numberstation, serialnumber) {}

    void display_info() {
        cout << "\t\t\t\t\t-------------------------\n";
        cout << "\t\t\t\t\tDisplaying Speedo Bus Information\n";
        cout << "\t\t\t\t\t-------------------------\n";
        cout << "|       Total Buses:        | " << number_bus << " Buses\n";
        cout << "|       Total Routes:       | " << number_station << " Routes\n";
        cout << "|       Starting Time:      | " << starting_time << "\n";
        cout << "|       Last Departure Time:| " << lastdeparture_time << "\n";
        cout << "|       Headway Time:       | " << headway_time << "\n";
        cout << "|       Base Ticket:        | " << base_ticket << " PKR\n";
        cout << "\t\t\t\t\t-------------------------\n";
    }

    void display_station(string location) {
        metro_bus::display_station(location);
    }

    void ticket_generator(string tlocation) {
        metro_bus::ticket_generator(tlocation);
    }

    void favourite() {
        metro_bus::favourite("C:/Users/ST/Desktop/files/speedo_bus.txt","C:\\Users\\ST\\Desktop\\favourite\\sfav\\");
    }

    void show_fav() {
        metro_bus::show_fav("C:\\Users\\ST\\Desktop\\favourite\\sfav\\");
    }

    void delete_favourite() {
        metro_bus::delete_favourite("C:\\Users\\ST\\Desktop\\favourite\\sfav\\");
    }
    void show_station() {
    int id;
    s2label:
    cout << "\nEnter the Id of Route for Stations:\n";
    cin >> id;
   if(cin.fail()||(cin.peek() != EOF && cin.peek() != '\n' )) {
    	cout<<"\t\t\t\tInvalid! Please Enter a Valid input for Proceding Futher.\n";
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(), '\n');
    	goto s2label;
	}
    string filename = "C:\\Users\\ST\\Desktop\\files\\speedo_station\\" +to_string(id) + ".txt";
    ifstream obj(filename.c_str());  
    if (obj.is_open()) {
        string temp;
        while (getline(obj, temp)) {
            cout << temp << endl;
        }
        obj.close();
    } else {
        cout << "Route_Number Does not Exist!\n";
    }
}
};
class orange_train : public metro_bus {
public:
    orange_train(string starttime, string endtime, string headwaytime, double basefare, int numbertrain, int numberstation, int serialnumber)
        : metro_bus(starttime, endtime, headwaytime, basefare, numbertrain, numberstation, serialnumber) {}

    void display_info() {
        cout << "\t\t\t\t\t-------------------------\n";
        cout << "\t\t\t\t\tDisplaying Orange Train Information\n";
        cout << "\t\t\t\t\t-------------------------\n";
        cout << "|       Total Trains:       | " << number_bus << " Trains\n";
        cout << "|       Total Stations:     | " << number_station << " Stations\n";
        cout << "|       Starting Time:      | " << starting_time << "\n";
        cout << "|       Last Departure Time:| " << lastdeparture_time << "\n";
        cout << "|       Headway Time:       | " << headway_time << "\n";
        cout << "|       Base Ticket:        | " << base_ticket << " PKR\n";
        cout << "\t\t\t\t\t-------------------------\n";
    }

    void display_station(string location) {
        metro_bus::display_station(location);
    }

    void ticket_generator(string tlocation) {
        metro_bus::ticket_generator(tlocation);
    }

    void favourite() {
        metro_bus::favourite("C:/Users/ST/Desktop/files/orange_train.txt","C:\\Users\\ST\\Desktop\\favourite\\ofav\\");
    }

    void show_fav() {
        metro_bus::show_fav("C:\\Users\\ST\\Desktop\\favourite\\ofav\\");
    }

    void delete_favourite() {
        metro_bus::delete_favourite("C:\\Users\\ST\\Desktop\\favourite\\ofav\\");
    }
};
int main() {
	metro_bus metro("6:15 AM", "10:00 PM", "2-3 Min", 30.0, 64, 27, 1);
    int input;
    cout << "\t\t\t\tWelcome to Transport Tree (Public Transit Authority)\n";
label:
    cout << "\n\n\t\t\t\t------------- Select Your Preference -------------\n\n";
    cout << "\t\t\t_______________        _______________       _______________ \n";
    cout << "\t\t\t|              |       |              |      |              |\n";
    cout << "\t\t\t|  Metro Bus   |       |  Speedo Bus  |      |  Orange Train|\n";
    cout << "\t\t\t|______________|       |______________|      |______________|\n";
    cout << "\n\n\t\t\t\tSelect Your Transport:\n";
    cout << "\t\t\t\t 1 - Metro Bus \n";
    cout << "\t\t\t\t 2 - Speedo Bus \n";
    cout << "\t\t\t\t 3 - Orange Train \n";
    cout << "\t\t\t\t 4 - Exit \n";
    cin >> input;
    if (cin.fail() || (cin.peek() != EOF && cin.peek() != '\n')) {
        cout << "Invalid input! Please enter a valid number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto label;
    }
    if (input == 1) {
        int get;
    label1:
        cout << "\t\t\t\t_________________________\n";
        cout << "\t\t\t\t|                        |\n";
        cout << "\t\t\t\t|  Welcome to Metro Bus  |\n";
        cout << "\t\t\t\t|                        |\n";
        cout << "\t\t\t\t|________________________|\n";
        cout << "-------------------------\n";
        cout << "Please Select options according to your preferences\n";
        cout << "-------------------------\n";
        cout << "|       1       | Display Information about Metro bus\n";
        cout << "|       2       | Display All Stations\n";
        cout << "|       3       | Generate Ticket\n";
        cout << "|       4       | Add Station to your Favourite List\n";
        cout << "|       5       | Show your favourite list\n";
        cout << "|       6       | Delete Station from your favourite list\n";
        cout << "|       7       | Go to starting point\n";
        cout << "-------------------------\n";
        cin >> get;

        if (cin.fail() || (cin.peek() != EOF && cin.peek() != '\n')) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto label1;
        }

        switch (get) {
            case 1:
                metro.display_info();
                break;
            case 2:
                metro.display_station("C:/Users/ST/Desktop/files/metro_bus.txt");
                break;
            case 3:
            	cout<<"\t\t\t\t\tGenerating Metro-Bus ticket\n";
                metro.ticket_generator("C:\\Users\\ST\\Desktop\\files\\serial_numberm.txt");
                break;
            case 4:
                metro.favourite("C:/Users/ST/Desktop/files/metro_bus.txt","C:\\Users\\ST\\Desktop\\favourite\\mfav\\");
                break;
            case 5:
                metro.show_fav("C:\\Users\\ST\\Desktop\\favourite\\mfav\\");
                break;
            case 6:
                metro.delete_favourite("C:\\Users\\ST\\Desktop\\favourite\\mfav\\");
                break;
            case 7:
                goto label;
            default:
                cout << "Invalid Input Please Select the Correct Input.\n";
                break;
        }
        system("pause");
        goto label1;

    } else if (input == 2) {
        int get;
        speedo_bus speedo("6:00 AM", "10:00 PM", "2-3 Min", 25.0, 200, 34, 1);

    label2:
        cout << "\t\t\t\t_________________________\n";
        cout << "\t\t\t\t|                        |\n";
        cout << "\t\t\t\t|  Welcome to Speedo Bus |\n";
        cout << "\t\t\t\t|                        |\n";
        cout << "\t\t\t\t|________________________|\n";
        cout << "-------------------------\n";
        cout << "Please Select options according to your preferences\n";
        cout << "-------------------------\n";
        cout << "|       1       | Display Information about Speedo bus\n";
        cout << "|       2       | Display All Routes\n";
        cout << "|       3       | Display stations of Routes\n";
        cout << "|       4       | Generate Ticket\n";
        cout << "|       5       | Add Route to your favourite list\n";
        cout << "|       6       | Show your favourite list\n";
        cout << "|       7       | Delete Route from your favourite list\n";
        cout << "|       8       | Go to starting point\n";
        cout << "-------------------------\n";
        cin >> get;

        if (cin.fail() || (cin.peek() != EOF && cin.peek() != '\n')) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto label2;
        }
        switch (get) {
            case 1:
                speedo.display_info();
                break;
            case 2:
                metro.display_station("C:/Users/ST/Desktop/files/speedo_bus.txt");
                break;
            case 3:
                metro.display_station("C:/Users/ST/Desktop/files/speedo_bus.txt");
                speedo.show_station();
                break;
            case 4:
            	cout<<"\t\t\t\t\tGenerating Speedo-Bus ticket\n";
                speedo.ticket_generator("C:\\Users\\ST\\Desktop\\files\\serial_numbers.txt");
                break;
            case 5:
                speedo.favourite();
                break;
            case 6:
                speedo.show_fav();
                break;
            case 7:
                speedo.delete_favourite();
                break;
            case 8:
                goto label;
            default:
                cout << "Invalid Input Please Select the Correct Input.\n";
                break;
        }
        system("pause");
        goto label2;

    } else if (input == 3) {
        int get;
        orange_train orange("7:30 AM", "11:00 PM", "2-3 Min",40, 27, 26, 1);
    label3:
        cout << "\t\t\t\t_________________________\n";
        cout << "\t\t\t\t|                        |\n";
        cout << "\t\t\t\t| Welcome to Orange Train|\n";
        cout << "\t\t\t\t|                        |\n";
        cout << "\t\t\t\t|________________________|\n";
        cout << "-------------------------\n";
        cout << "Please Select options according to your preferences\n";
        cout << "-------------------------\n";
        cout << "|       1       | Display Information about Orange Train\n";
        cout << "|       2       | Display All Stations\n";
        cout << "|       3       | Generate Ticket\n";
        cout << "|       4       | Add Station to your favourite list\n";
        cout << "|       5       | Show your favourite list\n";
        cout << "|       6       | Delete station from your favourite list\n";
        cout << "|       7       | Go to starting point\n";
        cout << "-------------------------\n";
        cin >> get;

        if (cin.fail() || (cin.peek() != EOF && cin.peek() != '\n')) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto label3;
        }
        switch (get) {
            case 1:
                orange.display_info();
                break;
            case 2:
                orange.display_station("C:/Users/ST/Desktop/files/orange_train.txt");
                break;
            case 3:
            	cout<<"\t\t\t\t\tGenerating Orange-Train ticket\n";
                orange.ticket_generator("C:\\Users\\ST\\Desktop\\files\\serial_numbero.txt");
                break;
            case 4:
                orange.favourite();
                break;
            case 5:
                orange.show_fav();
                break;
            case 6:
                orange.delete_favourite();
                break;
            case 7:
                goto label;
            default:
                cout << "Invalid Input Please Select the Correct Input.\n";
                break;
        }
        system("pause");
        goto label3;

    } else if (input == 4) {
        cout << "THANK YOU FOR USING OUR PROGRAM\nExiting...";
        return 0;
    } else {
        cout << "Invalid! Please Enter valid input.\n";
        goto label;
    }
}
