/*
Isabelle N Puwo 
1326733
Project 5.
*/
#include<iostream> 
#include<fstream>
#include<sstream>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;

//Define the structure for storing patient information
struct Patient {
    int patientID;
    char firstName[50];
    char lastName[50];
    char dateofBirth[11];
    char insurance[50];
    char username[50];
    char password[50];
    char Doctor[50];
    char bill[50];
};

// function prototypes 
bool readPatientsFromFile(Patient p[], int& count);
void displayMenu();
bool login(Patient p[], int count);
bool resetPassword(Patient p[], int count);
bool createAccount(Patient p[], int &count);
bool validatePassword(char password[]);
void displayInfo(Patient p[]);
void SaveToFile(Patient p[], int count);


int main(){
   int count = 0;
   Patient patients[100];
   readPatientsFromFile(patients, count); //read data from file to array 
   int choice;
    while(true){
    displayMenu();
    cin >> choice;
    cin.ignore();
    
    switch(choice){
        case 1: 
        if(!login(patients, count)) {
        // if the login is false, the option to rest password is given 
        cout<< "Would you like to reset your password ? (y/n)" << endl;
        char answer;
        cin>> answer;
        cin.ignore();
        if(answer == 'y'){
            resetPassword(patients, count);
        }
        }
        break;
        case 2:
        resetPassword(patients, count);

        break;

        case 3: 
        if(createAccount(patients, count)){
            cout<< "Account created successfuly." << endl;
        }else{
            cout<< "Account creation failed. " << endl;
        }
        break;
        case 4: 
        SaveToFile(patients, count);
        cout<< "Data saved to file." << endl;
        break;
        case 5: 
        cout<< "Exiting program...." << endl;
        break;
        default:
        
        cout << "Invalid choice.Please enter a number between 1 and 5. " << endl;
    }
   }

   readPatientsFromFile(patients, count);
    
     return 0;
}



void displayMenu(){
    cout<< "\nMAIN MENU\n";
    cout<< "1. Login\n";
    cout<< "2. Reset Password\n";
    cout<< "3. Create Account\n";
    cout<< "4. Save Data\n";
    cout<< "5. Exit\n";
    cout<< "Enter your choice: ";
}

bool login(Patient p[], int count){
    char username[50];
    char password[50];
    bool x= false;
    cout<< "Enter your username:  ";
    cin.getline(username, 50);
    cout<< "Enter your password: ";
    cin.getline(password, 50);
    for(int i = 0; i < count; i++){
        if(strcmp(p[i].username, username)== 0 && strcmp(p[i].password, password)== 0){
            //check if the inputed username and password matches database 
            displayInfo(p); // display patients information if match is found
            x=true;
            //return x;
        }
    }
    if(x == false){
    cout << "Invalid username or password." << endl;
    }
    return x;
}

bool resetPassword(Patient p[], int count){
    char username[50];
    char firstName[50];
    char lastName[50];
    char dateOfBirth[50];
    bool x = false;
    cout<< "Enter your username: ";
    cin.getline(username, 50);
    cout<< "Enter your first name: ";
    cin.getline(firstName, 50);
    cout<< "Enter last name: ";
    cin.getline(lastName, 50);
    cout<< "Enter your date of birth (mm/dd/yyyy): ";
    cin.getline(dateOfBirth, 50);
    for(int i = 0; i < count; i++){
        if(strcmp(p[i].username, username)== 0 && strcmp(p[i].firstName, firstName)== 0 && strcmp(p[i].lastName, lastName)==0 && strcmp(p[i].dateofBirth, dateOfBirth)== 0){
            // check if inputed information matches database 
            char newPassword[50];
            cout<< "Enter your new password: ";
            cin.getline(newPassword, 50);
            while(!validatePassword(newPassword)){
            // loops until meets requirements
            cout<< "Invalid password. Password must at least 8 characters long and include one uppercase letter and one lowercase letter, and one digit. No special characters allowed. " << endl;
            cout<< "Enter your new password: ";
            cin.getline(newPassword, 50);
            }
            strcpy(p[i].password, newPassword); // update the patient's password
            cout<< "Password successfully updated. " << endl;
            SaveToFile(p, count); // save changes to file 
        }
    } if(x == false){
    cout<< "Invalid information. password reset failed." << endl;
    }
return x;
}
bool validatePassword(char password[]){
    int length = strlen(password);
    bool has_upper = false, has_lower = false, has_digit = false;

    if (length < 8) {
        return false;
    }

    for (int i = 0; i < length; i++) {
        if (isspace(password[i])) {
            continue; // spaces are allowed
        }
        if (isupper(password[i])) {
            has_upper = true;
        }
        if (islower(password[i])) {
            has_lower = true;
        }
        if (isdigit(password[i])) {
            has_digit = true;
        }
        if (!isalnum(password[i])) {
            return false;
        }
    }
    return has_upper && has_lower && has_digit;
}
bool createAccount(Patient p[], int &count) {
    cout << "Welcome to our system! Let's get you set up with an account.\n";
    cout << "Please enter your first name: ";
    cin.getline(p[count].firstName, 50);
    cout << "Please enter your last name: ";
    cin.getline(p[count].lastName, 50);
    cout << "Please enter your date of birth (MM/DD/YYYY): ";
    cin.getline(p[count].dateofBirth, 11);
    cout << "Please enter your insurance company name: ";
    cin.getline(p[count].insurance, 50);
    p[count].patientID = count + 1;
    cout << "Your account has been set up successfully!\n";
    cout << "Your username is: " << p[count].firstName << p[count].patientID << endl;
    cout << "Please choose a password for your account: ";
    cin.getline(p[count].password, 50);
    
    while(validatePassword(p[count].password)== false){
    cout << "Invalid password. Password must at least 8 characters long and include one uppercase letter and one lowercase letter, and one digit. No special characters allowed. " << endl;
    cin.getline(p[count].password, 50); 
        
    }

    return true;
}
void displayInfo(Patient p[]){
    int size;
    for(int i = 0; i < size; i++){
    cout << "Username: " << p[i].username << endl;
    cout << "Password: " << p[i].password << endl;
    cout << "Patient ID: " << p[i].patientID << endl;
    cout << "First Name: " << p[i].firstName << endl;
    cout << "Last Name: " << p[i].lastName << endl;
    cout << "Date of Birth: " << p[i].dateofBirth << endl;
    cout << "Insurance: " << p[i].insurance << endl;
    cout<< "Doctor: "<< p[i].Doctor << endl;
    cout<< "Bill: "<< p[i].bill << endl;
}
}
bool readPatientsFromFile(Patient p[], int& count) {
    // reads patient data from csv file and stores it in an array of patient object 
    int choice;
    Patient patients[100];
    ifstream infile("CSDP222_Project5.csv");
    // ifstream is used to open the csv file 
    if (!infile) {
        cout << "Error opening file." << endl;
        return false;
    }
    string line;
    getline(infile, line);  // skip header line
    count = 0;
    while (getline(infile, line)) {
        // reads each line using getline function of the ifstream 
        // stores the comma seperated fields into the temporary string using stringstream
        stringstream ss(line);
        string field;
        int i = 0;
        while (getline(ss, field, ',')) {
            // fields are assigned to the corresponding data members of the 'patient' object 
            switch (i) {
                case 0: strcpy(p[count].username, field.c_str()); break;
                case 1: strcpy(p[count].password, field.c_str()); break;
                case 2: p[count].patientID=stoi(field); break;
                case 3: strcpy(p[count].firstName, field.c_str()); break;
                case 4: strcpy(p[count].lastName, field.c_str()); break;
                case 5: strcpy(p[count].dateofBirth, field.c_str()); break;
                case 6: strcpy(p[count].insurance, field.c_str()); break;
                case 7: strcpy(p[count].Doctor, field.c_str()); break;
                case 8: strcpy(p[count].bill, field.c_str()); break;
                cout << endl;
            }
            i++;
        }
        count++;
    }
    return false;
}
void SaveToFile(Patient p[], int count){
    // saves the patient info from an array to csv file 
    ofstream ofile; 
    // string message to store the patients info in csv file 
    string message= " ";
    string patientID, firstName, lastName, dateofBirth, insurance, username, password, Doctor, bill;
    ofile<< "Patient ID, First Name, Last Name, Date of Birth, Insurance, Username, Password, Doctor, Bill " << endl;
    for(int i = 0; i < count; i++){
        //loops through the array and appends the patient information to the message string
        strcpy(p[i].username, username.c_str());
        message += username;
        message += " , ";
        strcpy(p[i].password, password.c_str());
        message += password;
        message += " , ";
        message += to_string(p[i].patientID);
        message += patientID;
        message += " , ";
        strcpy(p[i].firstName, firstName.c_str());
        message += firstName;
        message += " , ";
        strcpy(p[i].lastName, lastName.c_str());
        message += lastName; 
        message += " , ";
        strcpy(p[i].dateofBirth, dateofBirth.c_str());
        message += dateofBirth;
        message += " , ";
        strcpy(p[i].insurance, insurance.c_str());
        message += insurance;
        message += " , ";
        strcpy(p[i].Doctor, Doctor.c_str());
        message += Doctor;
        message += " , ";
        strcpy(p[i].bill, bill.c_str());
        message += bill;
        message += " \n ";
    }
    ofile << message;
    ofile.close();
}