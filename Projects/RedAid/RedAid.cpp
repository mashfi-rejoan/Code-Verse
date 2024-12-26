#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <thread>
#include <windows.h>
#include <chrono>
#include <regex>
#include <iomanip>
#include <ctime>
#include <conio.h>
using namespace std;

void entry_dashboard();
void refresh_screen();
bool choice_menu();
bool isValidEmail(const string& email);
void join_red_army(string blood_group, string phone);
bool hasJoinedRedArmy(const string& blood_group, const string& phone);
void view_donation_history(const string& blood_group, const string& phone);
void search_donor();
void register_user();
void login_dashboard(string blood_group, string phone);
void login_user();
void welcome();
void exit_message();

void refresh_screen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
bool isPhoneNumberRegistered(const string& phone, const string& blood_group) {
    ifstream file(blood_group + ".txt");
    if (!file.is_open()) {
        return false; // If the file doesn't exist, the phone number can't be registered
    }

    string line;
    while (getline(file, line)) {
        size_t pos = line.find(',');
        if (pos != string::npos) {
            string existingPhone = line.substr(0, pos);
            if (existingPhone == phone) {
                return true; // Phone number found, already registered
            }
        }
    }
    return false; // Phone number not found, can register
}
string getHiddenPassword(const string& prompt) {
    string password;
    char ch;
    cout << prompt;

    while ((ch = _getch()) != '\r') {
        if (ch == '\b' && !password.empty()) {
            password.pop_back();
            cout << "\b \b";
        } else if (ch != '\b') {
            if (!password.empty()) {

                cout << "\b*";
            }
            password += ch;
            cout << ch;
        }
    }

    if (!password.empty()) {
        cout << "\b*";
    }
    cout << endl;
    return password;
}
bool isPasswordValid(const string& password) {
    if (password.length() < 8) return false;


    regex hasUppercase("[A-Z]");
    regex hasLowercase("[a-z]");
    regex hasSpecialChar("[^A-Za-z0-9]");


    return regex_search(password, hasUppercase) &&
           regex_search(password, hasLowercase) &&
           regex_search(password, hasSpecialChar);
}
bool choice_menu()
{
    int choice;
    cout << "1. Yes\n";
    cout << "2. No\n";
    cout << "Enter your choice (1/2): ";
    cin >> choice;

    return (choice == 1);
}


bool isValidEmail(const string& email) {

    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email, pattern);
}

void join_red_army(string blood_group, string phone) {
    string email;
    int age;
    int weight;
    bool isFirstTime;
    string lastDonationTime = "N/A";
    bool hasDisease;


    do {
        cout << "\t\t\t\t\tEnter your email address: ";
        cin >> email;

        if (!isValidEmail(email)) {
            cout << "\t\t\t\t\tInvalid email format. Please try again.\n";
        } else {

            ifstream checkFile(blood_group + ".txt");
            string line;
            bool emailExists = false;

            while (getline(checkFile, line)) {
                if (line.find(email) != string::npos) {
                    emailExists = true;
                    break;
                }
            }
            checkFile.close();

            if (emailExists) {
                cout << "\t\t\t\t\tThis email is already registered. Please use a different email.\n";
                continue;
            }
            break;
        }
    } while (true);


    do {
        cout << "\t\t\t\t\tEnter your age: ";
        cin >> age;

        if (cin.fail() || age < 18 || age > 65) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\t\t\tInvalid age. You must be between 18 and 65 years old to donate blood.\n";
        } else {
            break;
        }
    } while (true);

    do {
        cout << "\t\t\t\t\tEnter your weight (in kg): ";
        cin >> weight;

        if (cin.fail() || weight < 50) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\t\t\tInvalid weight. You must weigh at least 50 kg to donate blood.\n";
        } else {
            break;
        }
    } while (true);


    cout << "\t\t\t\t\tIs this your first donation?\n";
    isFirstTime = choice_menu();
    cin.ignore();

    if (!isFirstTime) {
        bool validDate;
        do {
            cout << "\t\t\t\t\tWhen was your last donation? (YYYY-MM-DD): ";
            getline(cin, lastDonationTime);


            regex datePattern("\\d{4}-\\d{2}-\\d{2}");
            validDate = regex_match(lastDonationTime, datePattern);
            if (!validDate) {
                cout << "\t\t\t\t\tInvalid date format. Please use YYYY-MM-DD format.\n";
            }
        } while (!validDate);
    }


    cout << "\t\t\t\t\tPlease answer the following health questions:\n\n";

    bool hasAnyDisease = false;

    cout << "\t\t\t\t\tDo you have or have you ever had any of the following:\n";
    cout << "\t\t\t\t\t1. HIV/AIDS?\n";
    hasAnyDisease |= choice_menu();

    cout << "\t\t\t\t\t2. Hepatitis B or C?\n";
    hasAnyDisease |= choice_menu();

    cout << "\t\t\t\t\t3. Any blood disorders or blood-related diseases?\n";
    hasAnyDisease |= choice_menu();

    cout << "\t\t\t\t\t4. Any chronic diseases?\n";
    hasAnyDisease |= choice_menu();

    if (hasAnyDisease) {
        cout << "\n\t\t\t\t\tWe apologize, but due to safety protocols, you are not eligible\n";
        cout << "\t\t\t\t\tto join the Red Army at this time. Please consult with a healthcare\n";
        cout << "\t\t\t\t\tprovider for more information.\n";
        Sleep(3000);
        refresh_screen();
        login_dashboard(blood_group, phone);
        return;
    }

    vector<string> lines;
    string line;
    bool userFound = false;

    ifstream inputFile(blood_group + ".txt");
    if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            size_t pos = line.find(",");
            string storedPhone = line.substr(0, pos);

            if (storedPhone == phone) {

                size_t lastComma = line.find_last_of(",");
                string baseInfo = line.substr(0, lastComma + 1);

                line = baseInfo + email + "," +
                       to_string(age) + "," +
                       to_string(weight) + "," +
                       (isFirstTime ? "Yes" : "No") + "," +
                       lastDonationTime + "," +
                       (hasAnyDisease ? "Yes" : "No");
                userFound = true;
            }
            lines.push_back(line);
        }
        inputFile.close();
    }

    if (!userFound) {
        cout << "\t\t\t\t\tError: User record not found.\n";
        Sleep(2000);
        refresh_screen();
        login_dashboard(blood_group, phone);
        return;
    }


    ofstream outputFile(blood_group + ".txt");
    if (outputFile.is_open()) {
        for (const string& updatedLine : lines) {
            outputFile << updatedLine << endl;
        }
        outputFile.close();

        cout << "\n\t\t\t\t\tCongratulations! You have successfully joined the Red Army!\n";
        cout << "\t\t\t\t\tThank you for your commitment to saving lives.\n\n";
        cout << "\t\t\t\t\tYour next eligible donation date will be calculated based on\n";
        cout << "\t\t\t\t\tyour last donation date.\n";

        Sleep(3000);
        refresh_screen();
        login_dashboard(blood_group, phone);
    } else {
        cout << "\t\t\t\t\tError: Could not update your information.\n";
        Sleep(2000);
        refresh_screen();
        login_dashboard(blood_group, phone);
    }
}


bool hasJoinedRedArmy(const string& blood_group, const string& phone) {
    ifstream file(blood_group + ".txt");
    string line;

    while (getline(file, line)) {
        size_t pos = line.find(",");
        string storedPhone = line.substr(0, pos);

        if (storedPhone == phone) {

            int commaCount = count(line.begin(), line.end(), ',');
            return commaCount > 3;
        }
    }
    return false;
}

//

void update_profile(const string& blood_group, const string& phone) {
    refresh_screen();
    cout << "\t\t\t\t\t*****************************************\n";
    cout << "\t\t\t\t\t*            Update Profile             *\n";
    cout << "\t\t\t\t\t*****************************************\n\n";


    vector<string> lines;
    string line;
    bool user_found = false;
    string current_data;

    ifstream file(blood_group + ".txt");
    if (!file.is_open()) {
        cout << "\t\t\t\t\tError: Unable to access user records.\n";
        Sleep(2000);
        login_dashboard(blood_group, phone);
        return;
    }


    while (getline(file, line)) {
        size_t pos = line.find(",");
        string stored_phone = line.substr(0, pos);

        if (stored_phone == phone) {
            user_found = true;
            current_data = line;
            break;
        }
    }
    file.close();

    if (!user_found) {
        cout << "\t\t\t\t\tUser  not found. Please verify your credentials.\n";
        Sleep(2000);
        login_dashboard(blood_group, phone);
        return;
    }

    // Parse current data
    vector<string> current_info;
    stringstream ss(current_data);
    string item;
    while (getline(ss, item, ',')) {
        current_info.push_back(item);
    }

    refresh_screen();
    cout << "\t\t\t\t\t-----------------------------------------\n";
    cout << "\t\t\t\t\t*         Current Information           *\n";
    cout << "\t\t\t\t\t-----------------------------------------\n\n";

    cout << "\t\t\t\t\tName: " << current_info[2] << "\n";
    cout << "\t\t\t\t\tPhone: " << current_info[0] << "\n";
    cout << "\t\t\t\t\tBlood Group: " << current_info[3] << "\n\n";

    cout << "\t\t\t\t\tWhat would you like to update?\n";
    cout << "\t\t\t\t\t1. Email\n";
    cout << "\t\t\t\t\t2. Age\n";
    cout << "\t\t\t\t\t3. Weight\n";
    cout << "\t\t\t\t\t4. Last Donation Date\n";
    cout << "\t\t\t\t\t5. Back to Dashboard\n";

    int update_choice;
    cout << "\t\t\t\t\tEnter your choice: ";
    cin >> update_choice;
    cin.ignore();

    string new_value;
    bool update_successful = false;

    switch (update_choice) {
        case 1: {
            cout << "\t\t\t\t\tEnter new email: ";
            getline(cin, new_value);
            if (isValidEmail(new_value)) {
                current_info[4-1] = new_value;
                update_successful = true;
            } else {
                cout << "\t\t\t\t\tInvalid email format.\n";
            }
            break;
        }
        case 2: {
            cout << "\t\t\t\t\tEnter new age: ";
            getline(cin, new_value);
            if (stoi(new_value) >= 18 && stoi(new_value) <= 65) {
                current_info[5-1] = new_value;
                update_successful = true;
            } else {
                cout << "\t\t\t\t\tInvalid age. Must be between 18 and 65.\n";
            }
            break;
        }
        case 3: {
            cout << "\t\t\t\t\tEnter new weight: ";
            getline(cin, new_value);
            if (stoi(new_value) >= 50) {
                current_info[6-1] = new_value;
                update_successful = true;
            } else {
                cout << "\t\t\t\t\tInvalid weight. Must be at least 50 kg.\n";
            }
            break;
        }
        case 4: {
            cout << "\t\t\t\t\tEnter new last donation date (YYYY-MM-DD): ";
            getline(cin, new_value);

            regex datePattern("\\d{4}-\\d{2}-\\d{2}");
            if (regex_match(new_value, datePattern)) {
                current_info[8-1] = new_value;
                update_successful = true;
            } else {
                cout << "\t\t\t\t\tInvalid date format. Please use YYYY-MM-DD.\n";
            }
            break;
        }
        case 5: {
            cout << "\t\t\t\t\tEnter new eligibility status (Yes/No): ";
            getline(cin, new_value);
            if (new_value == "Yes" || new_value == "No") {
                current_info[9-1] = new_value;
                update_successful = true;
            } else {
                cout << "\t\t\t\t\tInvalid input. Please enter 'Yes' or 'No'.\n";
            }
            break;
        }
        case 6: {
            login_dashboard(blood_group, phone);
            return;
        }
        default: {
            cout << "\t\t\t\t\tInvalid choice. Returning to dashboard...\n";
            Sleep(2000);
            login_dashboard(blood_group, phone);
            return;
        }
    }

    if (update_successful) {

        ifstream read_file(blood_group + ".txt");
        vector<string> updated_lines;
        while (getline(read_file, line)) {
            if (line.find(phone + ",") == 0) {

                string updated_line = "";
                for (size_t i = 0; i < current_info.size(); i++) {
                    updated_line += current_info[i];
                    if (i < current_info.size() - 1) {
                        updated_line += ",";
                    }
                }
                updated_lines.push_back(updated_line);
            } else {
                updated_lines.push_back(line);
            }
        }
        read_file.close();


        ofstream write_file(blood_group + ".txt");
        for (const string& updated_line : updated_lines) {
            write_file << updated_line << endl;
        }
        write_file.close();

        cout << "\n\t\t\t\t\tProfile updated successfully!\n";
        Sleep(2000);
    }

    login_dashboard(blood_group, phone);
}


//

bool isEligibleDonor(const string& last_donation_date) {

    int year, month, day;
    char dash1, dash2;
    stringstream date_stream(last_donation_date);
    date_stream >> year >> dash1 >> month >> dash2 >> day;


    tm last_donation_tm = {};
    last_donation_tm.tm_year = year - 1900;
    last_donation_tm.tm_mon = month - 1;
    last_donation_tm.tm_mday = day;


    time_t last_donation_time = mktime(&last_donation_tm);


    time_t current_time = time(nullptr);


    double seconds_diff = difftime(current_time, last_donation_time);
    int days_diff = seconds_diff / (60 * 60 * 24);


    return days_diff >= 120;
}
void displayBloodGroupMenu() {
    cout << "\n\t\t\t\t   -----------------------------------------\n";
    cout << "\t\t\t\t   *          Search Blood Donors          *\n";
    cout << "\t\t\t\t   -----------------------------------------\n";
    cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\t*   Select the Blood Group    *\n";
    cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\t*   No   |   Blood Group      *\n";
    cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\t*   1    |     A+             *\n";
    cout << "\t\t\t\t\t*   2    |     A-             *\n";
    cout << "\t\t\t\t\t*   3    |     B+             *\n";
    cout << "\t\t\t\t\t*   4    |     B-             *\n";
    cout << "\t\t\t\t\t*   5    |     AB+            *\n";
    cout << "\t\t\t\t\t*   6    |     AB-            *\n";
    cout << "\t\t\t\t\t*   7    |     O+             *\n";
    cout << "\t\t\t\t\t*   8    |     O-             *\n";
    cout << "\t\t\t\t\t-------------------------------\n";
}

void search_donor(const string user_phone) {
      int blood_group_choice;
    string blood_group;

    displayBloodGroupMenu();

    // Prompt user to select a blood group
    do {
        cout << "Enter the number corresponding to the blood group: ";
        cin >> blood_group_choice;

        switch (blood_group_choice) {
            case 1: blood_group = "A+"; break;
            case 2: blood_group = "A-"; break;
            case 3: blood_group = "B+"; break;
            case 4: blood_group = "B-"; break;
            case 5: blood_group = "AB+"; break;
            case 6: blood_group = "AB-"; break;
            case 7: blood_group = "O+"; break;
            case 8: blood_group = "O-"; break;
            default:
                cout << "Invalid choice. Please select a valid number between 1 and 8.\n";
        }
    } while (blood_group.empty());

    ifstream file(blood_group + ".txt");
    if (!file.is_open()) {
        refresh_screen();
        cout << "\n\t\t\t\t\tError: Unable to access donor records for blood group " << blood_group << ".\n";
        return;
    }
    vector<vector<string>> eligible_donors;
    string line;

    // Read through the file and search for eligible donors
    while (getline(file, line)) {
        stringstream ss(line);
        string item;
        vector<string> donor_info;

        while (getline(ss, item, ',')) {
            donor_info.push_back(item);
        }

        if (donor_info.size() == 9 && donor_info[8] == "No") {
            if (isEligibleDonor(donor_info[7])) {
                eligible_donors.push_back(donor_info);
            }
        }
    }
    file.close();


    if (eligible_donors.empty()) {
        refresh_screen();
        cout << "\t\t\t\t\t____________________________________________________________\n";
        cout << "\t\t\t\t\t     No eligible donors found for      \n";
        cout << "\t\t\t\t\t     Blood Group: " << setw(10) << left << blood_group << "            \n";
        cout << "\t\t\t\t\t____________________________________________________________\n";
    } else {
        refresh_screen();
        cout << "\t\t\t\t\t____________________________________________________________\n";
        cout << "\t\t\t\t\t     Eligible donors found for         \n";
        cout << "\t\t\t\t\t     Blood Group: " << setw(10) << left << blood_group << "            \n";
        cout << "\t\t\t\t\t     Total Eligible Donors: " << eligible_donors.size() << "\n";
        cout << "\t\t\t\t\t____________________________________________________________\n";

        // Display each donor in a separate box
        for (const auto& donor : eligible_donors) {
            string status = isEligibleDonor(donor[7]) ? "Eligible" : "Not Eligible";

            cout << "\t\t\t\t\t____________________________________________________________\n";
            cout << "\t\t\t\t\t                      Donor Details                       \n";
            //cout << "\t\t\t\t\t*****************************************\n";
            cout << "\t\t\t\t\t Name         :    " << setw(20) << left << donor[0] << "\n";
            //cout << "\t\t\t\t\t*                                       *\n";
            //cout << "\t\t\t\t\t*****************************************\n";
            cout << "\t\t\t\t\t Phone        :    " << setw(20) << left << donor[2] << "\n";
            //cout << "\t\t\t\t\t*                                       *\n";
            //cout << "\t\t\t\t\t*****************************************\n";
            cout << "\t\t\t\t\t Email        :    " << setw(20) << left << donor[3] << "\n";
            //cout << "\t\t\t\t\t*                                       *\n";
            //cout << "\t\t\t\t\t*****************************************\n";
            cout << "\t\t\t\t\t Status       :    " << setw(20) << left << status << "\n";
            //cout << "\t\t\t\t\t*                                       *\n";
            // cout << "\t\t\t\t\t____________________________________________________________\n\n";
        }
    }

    cout << "\n\t\t\tPress any key to return to dashboard...";
    cin.ignore();
    cin.get();

    login_dashboard(blood_group, user_phone);
}



//
void register_user()
{

    cout << "\t\t\t\t   -----------------------------------------\n";
    cout << "\t\t\t\t   *               Registration            *\n";
    cout << "\t\t\t\t   -----------------------------------------\n\n";

    string name, phone, blood_group, password,confirmPassword;
    bool isValid = false;
    cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\t*   Select your blood group   *\n";
    cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\t*   No   |   Blood Group      *\n";
    cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\t*   1    |     " << setw(5) << "A+" << "          *\n";
    //cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\t*   2    |     " << setw(5) << "A-" << "          *\n";
    //cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\t*   3    |     " << setw(5) << "B+" << "          *\n";
    //cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\t*   4    |     " << setw(5) << "B-" << "          *\n";
    //cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\t*   5    |     " << setw(6) << "AB+" << "         *\n";
    //cout << "\t\t\t\t\t--------------------------------\n";
    cout << "\t\t\t\t\t*   6    |     " << setw(6) << "AB-" << "         *\n";
    //cout << "\t\t\t\t\t--------------------------------\n";
    cout << "\t\t\t\t\t*   7    |     " << setw(5) << "O+" << "          *\n";
    //cout << "\t\t\t\t\t--------------------------------\n";
    cout << "\t\t\t\t\t*   8    |     " << setw(5) << "O-" << "          *\n";
    cout << "\t\t\t\t\t--------------------------------\n";

    int blood_group_choice;
    do
    {
        cout << "Enter the number corresponding to your blood group: ";
        cin >> blood_group_choice;
        switch (blood_group_choice)
        {
        case 1:
            blood_group = "A+";
            break;
        case 2:
            blood_group = "A-";
            break;
        case 3:
            blood_group = "B+";
            break;
        case 4:
            blood_group = "B-";
            break;
        case 5:
            blood_group = "AB+";
            break;
        case 6:
            blood_group = "AB-";
            break;
        case 7:
            blood_group = "O+";
            break;
        case 8:
            blood_group = "O-";
            break;
        default:
            cout << "Invalid blood_group_choice. Please select a valid blood group.\n";
        }
    } while (blood_group.empty());

    // Get name
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);

    // Validate phone number
        // Get phone number and check for duplicates
    do {

        cout << "Enter your phone (01xxxxxxxxx): ";
        cin >> phone;

        if (phone.length() != 11 || !regex_match(phone, regex("[0-9]+"))) {
            cout << "Invalid phone number. Please enter exactly 11 digits.\n";
        }
        else if (phone.substr(0, 2) != "01") {
        cout << "Phone number must start with '01'.\n";
        }
        else if (isPhoneNumberRegistered(phone, blood_group)) {
            cout << "This phone number is already registered. Please use a different number.\n";
        }
        else {
            break; // Valid and not registered
        }

    } while (true);

    // Validate password
    do {

        // Step 1: Enter password
        password = getHiddenPassword("Enter password: ");

        // Step 2: Validate password
        if (!isPasswordValid(password)) {
            cout << "Invalid password! Ensure it has at least 8 characters, one uppercase, one lowercase, and one special character." << endl;
            continue; // Restart the loop
        }

        // Step 3: Re-enter password
        confirmPassword = getHiddenPassword("Re-enter password to confirm: ");

        // Step 4: Check if passwords match
        if (password != confirmPassword) {
            cout << "Passwords do not match. Please try again." << endl;
        } else {
            isValid = true;
            cout << "Password confirmed and valid!" << endl;
        }

    } while (!isValid);


    // Save to file
    ofstream file(blood_group + ".txt", ios::app);
    file << phone << "," << password << "," << name << "," << blood_group << "\n";
    file.close();

    refresh_screen();

    // Display dashboard header
    cout << "\t\t\t\t\t*****************************************\n";
    cout << "\t\t\t\t\t*       Registration Successful         *\n";
    cout << "\t\t\t\t\t*****************************************\n\n";

    cout << "\t\t\t\t\t\t **********************\n";
    cout << "\t\t\t\t\t\t *    Your Details    *\n";
    cout << "\t\t\t\t\t*****************************************\n";
    cout << "\t\t\t\t\t* Name         :    " << setw(20) << left << name << "*\n";
    cout << "\t\t\t\t\t*                                       *\n";
    //cout << "\t\t\t\t\t*****************************************\n";
    cout << "\t\t\t\t\t* Phone        :    " << setw(20) << left << phone << "*\n";
    cout << "\t\t\t\t\t*                                       *\n";
    //cout << "\t\t\t\t\t*****************************************\n";
    cout << "\t\t\t\t\t* Blood Group  :    " << setw(20) << left << blood_group << "*\n";
    cout << "\t\t\t\t\t*                                       *\n";
    cout << "\t\t\t\t\t*****************************************\n\n";

    Sleep(4000);
    refresh_screen();
    entry_dashboard();
}

// Modified login_dashboard function
void login_dashboard(string blood_group, string phone) {
    bool isRedArmyMember = hasJoinedRedArmy(blood_group, phone);

    refresh_screen();
    cout << "\t\t\t\t\t =========================================\n";
    cout << "\t\t\t\t\t||               Dashboard               ||\n";
    cout << "\t\t\t\t\t =========================================\n\n";

    // Display different options based on membership status
    if (!isRedArmyMember) {
        cout << "\t\t\t\t\t\t __________________________\n";
        cout << "\t\t\t\t\t\t |   [1] Join Red Army    |\n";
        cout << "\t\t\t\t\t\t __________________________\n\n";
    } else {
        cout << "\t\t\t\t\t\t __________________________\n";
        cout << "\t\t\t\t\t\t |   [1] View Donation    |\n";
        cout << "\t\t\t\t\t\t |       History          |\n";
        cout << "\t\t\t\t\t\t __________________________\n\n";
    }

    cout << "\t\t\t\t\t\t __________________________\n";
    cout << "\t\t\t\t\t\t |   [2] Update Profile   |\n";
    cout << "\t\t\t\t\t\t __________________________\n\n";

    cout << "\t\t\t\t\t\t __________________________\n";
    cout << "\t\t\t\t\t\t |   [3] Search Blood     |\n";
    cout << "\t\t\t\t\t\t __________________________\n\n";

    cout << "\t\t\t\t\t\t __________________________\n";
    cout << "\t\t\t\t\t\t |   [4] Logout           |\n";
    cout << "\t\t\t\t\t\t __________________________\n\n";

    cout << "\t\t\t\t\t\t Enter your choice: ";
    int dashboard_option;
    cin >> dashboard_option;
    refresh_screen();

    switch (dashboard_option) {
        case 1:
            if (!isRedArmyMember) {
                join_red_army(blood_group, phone);
            } else {
                view_donation_history(blood_group, phone);
            }
            break;
        case 2:
            update_profile(blood_group, phone);
            break;
        case 3:
            search_donor(phone);
            break;
        case 4:
            cout << "\nLogging out... Please wait.\n";
            Sleep(2000);
            refresh_screen();
            entry_dashboard();
            break;
        default:
            cout << "\t\t\t\t\t\t  Invalid input. Please try again.\n";
            Sleep(2000);
            login_dashboard(blood_group, phone);
    }
}

// New function to view donation history
void view_donation_history(const string& blood_group, const string& phone) {
    ifstream file(blood_group + ".txt");
    string line;
    bool found = false;

    // Clear screen for better presentation
    refresh_screen();

    cout << "\n\n";
    cout << "\t\t===============================================\n";
    cout << "\t\t                DONATION HISTORY               \n";
    cout << "\t\t===============================================\n\n";

    while (getline(file, line)) {
        size_t pos = line.find(",");
        string storedPhone = line.substr(0, pos);

        if (storedPhone == phone) {
            found = true;
            vector<string> data;
            stringstream ss(line);
            string item;

            while (getline(ss, item, ',')) {
                data.push_back(item);
            }

            if (data.size() >= 9) {
                // Personal Information Section
                cout << "\t\t-----------------------------------------------\n";
                cout << "\t\t                Personal Information           \n";
                cout << "\t\t-----------------------------------------------\n";
                cout << "\t\t Name         : " << data[2] << "\n";
                cout << "\t\t Blood Group  : " << data[3] << "\n";
                cout << "\t\t Age          : " << data[4] << "\n";
                cout << "\t\t Weight       : " << data[5] << " kg\n";
                cout << "\t\t-----------------------------------------------\n\n";

                // Donation Information Section
                cout << "\t\t-----------------------------------------------\n";
                cout << "\t\t              Donation Information            \n";
                cout << "\t\t-----------------------------------------------\n";
                cout << "\t\t First Time Donor  : " << (data[6] == "1" ? "Yes" : "No") << "\n";
                cout << "\t\t Last Donation     : " << (data[7] == "N/A" ? "No previous donation" : data[7]) << "\n";

                // Calculate next eligible donation date
                if (data[7] != "N/A") {
                    try {
                        // Parse last donation date (assuming format: YYYY-MM-DD)
                        istringstream ss(data[7]);
                        tm date = {};
                        string year, month, day;
                        getline(ss, year, '-');
                        getline(ss, month, '-');
                        getline(ss, day);

                        date.tm_mday = stoi(day);
                        date.tm_mon = stoi(month) - 1;
                        date.tm_year = stoi(year) - 1900;

                        // Add 3 months to get next eligible date
                        date.tm_mon += 3;
                        mktime(&date);  // Normalize the date

                        char next_date[11];
                        strftime(next_date, sizeof(next_date), "%Y-%m-%d", &date);

                        cout << "\t\t Next Eligible Date: " << next_date << "\n";
                    } catch (...) {
                        cout << "\t\t Next Eligible Date: Unable to calculate\n";
                    }
                } else {
                    cout << "\t\t Next Eligible Date: Eligible Now\n";
                }
                cout << "\t\t-----------------------------------------------\n\n";

                // Health Status Section
                cout << "\t\t-----------------------------------------------\n";
                cout << "\t\t                 Health Status                \n";
                cout << "\t\t-----------------------------------------------\n";
                cout << "\t\t Medical Conditions: " << (data[8] == "0" ? "None" : "Eligible") << "\n";
                cout << "\t\t-----------------------------------------------\n";
            }
            break;
        }
    }

    if (!found) {
        cout << "\n\t\t===============================================\n";
        cout << "\t\t              Record Not Found!               \n";
        cout << "\t\t===============================================\n";
    }

    cout << "\n\t\t Press any key to return to dashboard...";
    cin.ignore();
    cin.get();
    login_dashboard(blood_group, phone);
}

void login_user()
{
label3:
    refresh_screen();
    cout << "\t\t\t\t   *****************************************\n";
    cout << "\t\t\t\t   *               Log In                  *\n";
    cout << "\t\t\t\t   *****************************************\n\n";

    string blood_group;
    string phone, password;

    // Display blood group selection
    cout << "\t\t\t\t\t*******************************\n";
    cout << "\t\t\t\t\t*   Select your blood group   *\n";
    //cout << "\t\t\t\t\t*******************************\n";
    cout << "\t\t\t\t\t*   No   |   Blood Group      *\n";
    //cout << "\t\t\t\t\t*******************************\n";
    cout << "\t\t\t\t\t*   1    |     " << setw(5) << "A+" << "          *\n";
    //cout << "\t\t\t\t\t*******************************\n";
    cout << "\t\t\t\t\t*   2    |     " << setw(5) << "A-" << "          *\n";
    //cout << "\t\t\t\t\t*******************************\n";
    cout << "\t\t\t\t\t*   3    |     " << setw(5) << "B+" << "          *\n";
    //cout << "\t\t\t\t\t*******************************\n";
    cout << "\t\t\t\t\t*   4    |     " << setw(5) << "B-" << "          *\n";
    //cout << "\t\t\t\t\t*******************************\n";
    cout << "\t\t\t\t\t*   5    |     " << setw(6) << "AB+" << "         *\n";
    //cout << "\t\t\t\t\t*******************************\n";
    cout << "\t\t\t\t\t*   6    |     " << setw(6) << "AB-" << "         *\n";
    //cout << "\t\t\t\t\t*******************************\n";
    cout << "\t\t\t\t\t*   7    |     " << setw(5) << "O+" << "          *\n";
    //cout << "\t\t\t\t\t*******************************\n";
    cout << "\t\t\t\t\t*   8    |     " << setw(5) << "O-" << "          *\n";
    cout << "\t\t\t\t\t*******************************\n";

    int blood_group_choice;
    do
    {
        cout << "Enter the number corresponding to your blood group: ";
        cin >> blood_group_choice;

        switch (blood_group_choice)
        {
        case 1:
            blood_group = "A+";
            break;
        case 2:
            blood_group = "A-";
            break;
        case 3:
            blood_group = "B+";
            break;
        case 4:
            blood_group = "B-";
            break;
        case 5:
            blood_group = "AB+";
            break;
        case 6:
            blood_group = "AB-";
            break;
        case 7:
            blood_group = "O+";
            break;
        case 8:
            blood_group = "O-";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (blood_group.empty());

    // Get user credentials
    cout << "Enter your phone (user ID): ";
    cin >> phone;
    password = getHiddenPassword("Enter your password: ");

    // Open the file corresponding to the selected blood group
    ifstream file(blood_group + ".txt");
    if (!file.is_open())
    {
        cout << "No records found for the selected blood group.\n";
        Sleep(2000);
        refresh_screen();
        entry_dashboard();
        return;
    }

    string line;
    bool user_found = false;

    // Check the credentials in the file
    while (getline(file, line))
    {
        size_t pos1 = line.find(",");
        string stored_phone = line.substr(0, pos1);

        size_t pos2 = line.find(",", pos1 + 1);
        string stored_password = line.substr(pos1 + 1, pos2 - pos1 - 1);

        size_t pos3 = line.find(",", pos2 + 1);
        string stored_name = line.substr(pos2 + 1, pos3 - pos2 - 1);

        if (stored_phone == phone && stored_password == password)
        {
            refresh_screen();
            cout << "\t\t\t\t\t==========================================\n";
            cout << "\t\t\t\t\t||                 Welcome              ||\n";
            cout << "\t\t\t\t\t==========================================\n\n";
            cout << "\t\t\t\t\t  Welcome back, " << stored_name << "!\n\n";
            user_found = true;
            break;
        }
    }
    file.close();

    if (user_found)
    {
        refresh_screen();
        cout << "Login successful! Redirecting to your dashboard...\n";
        Sleep(2000);
        refresh_screen();
        login_dashboard(blood_group, phone);
    }
    else
    {
        cout << "Invalid phone number or password. Please try again.\n";
        Sleep(3000);
        goto label3; // Redirect back to the login
    }
}

void exit_message() {
    refresh_screen();  // Clear screen

    cout << "\n\n";
    cout << "\t\t=================================================\n";
    cout << "\t\t   THANK YOU FOR USING BLOOD DONATION SYSTEM     \n";
    cout << "\t\t=================================================\n\n";

    cout << "\t\t-------------------------------------------------\n";
    cout << "\t\t|                                               |\n";
    cout << "\t\t|     Your contribution helps save lives!       |\n";
    cout << "\t\t|                                               |\n";
    cout << "\t\t|   * One donation can save up to 3 lives       |\n";
    cout << "\t\t|   * Every 2 seconds someone needs blood       |\n";
    cout << "\t\t|   * Be a hero - Donate blood regularly        |\n";
    cout << "\t\t|                                               |\n";
    cout << "\t\t|      Emergency Blood Service Contacts:        |\n";
    cout << "\t\t|      Contact: 0189-7911901                    |\n";
    cout << "\t\t|      Email: rejoansaikat01@gmail.com          |\n";
    cout << "\t\t|                                               |\n";
    cout << "\t\t-------------------------------------------------\n\n";

    cout << "\t\t-------------------------------------------------\n";
    cout << "\t\t    Developed by: Mashfi Rejoan Saikat          \n";
    cout << "\t\t    Developed by: Mashfi Rejoan Saikat          \n";
    cout << "\t\t    Developed by: Mashfi Rejoan Saikat          \n";
    cout << "\t\t    Version: 1.0.0                              \n";
    cout << "\t\t-------------------------------------------------\n\n";

    cout << "\t\t Press any key to exit...";
    cin.get();  // Wait for any key press
}

void entry_dashboard()
{
    cout << "\t\t\t\t\t=========================================\n";
    cout << "\t\t\t\t\t|               Dashboard               |\n";
    cout << "\t\t\t\t\t=========================================\n\n";

    // Sign Up button
    cout << "\t\t\t\t\t\t  ______________________\n";
    cout << "\t\t\t\t\t\t  |     [1] Register   |\n";
    cout << "\t\t\t\t\t\t  ______________________\n\n";

    // Log In button
    cout << "\t\t\t\t\t\t  ______________________\n";
    cout << "\t\t\t\t\t\t  |     [2] Log In     |\n";
    cout << "\t\t\t\t\t\t  ______________________\n\n";

    // Exit button
    cout << "\t\t\t\t\t\t  _____________________-\n";
    cout << "\t\t\t\t\t\t  |      [3] Exit      |\n";
    cout << "\t\t\t\t\t\t  _____________________\n\n";

    cout << "\t\t\t\t\t\t  Enter your choice: ";
    int dashboard_option;
label2:
    cin >> dashboard_option;
    refresh_screen();

    if (dashboard_option == 1)
    {
        register_user();
    }
    else if (dashboard_option == 2)
    {
        login_user();
    }
    else if (dashboard_option == 3)
    {
        exit_message();
        exit(0);
    }
    else
    {
        // Centered error message
        cout << "\t\t\t\t\t\t  Invalid input. Enter again: ";
        goto label2;
    }
}

void welcome()
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Get the console handle
    SetConsoleTextAttribute(hConsole, 11);
    cout << "\t\t\t ____________________________________________________________________\n";
    cout << "\t\t\t|                                                                    |\n";
    cout << "\t\t\t|                             WELCOME TO                             |\n";
    cout << "\t\t\t|                               RedAid                               |\n";
    cout << "\t\t\t|                  A Centralized Blood Solution Platform             |\n";
    cout << "\t\t\t|                                                                    |\n";
    cout << "\t\t\t|____________________________________________________________________|\n\n";

    cout << "\t\t\t\t\t\"Bound by Blood, Driven by Compassion\"\n\n\n";
    cout << "\t\t\t\tAuthors:\n";
    cout << "\t\t\t\t  - Mashfi Rejoan Saikat\n";
    cout << "\t\t\t\t  - Akif Uz Zaman\n";
    cout << "\t\t\t\t  - Nowshin Ashrafi\n\n";

    Sleep(2000);
    refresh_screen();

    entry_dashboard();
}

int main()
{
    welcome();
    return 0;
}
