/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // ------------------ Writing to the File ------------------ //

    // Declare an ofstream object for writing to the file
    ofstream outFile;

    // Open the file in output mode (ios::out) to overwrite or create a new file
    outFile.open("data.txt", ios::out);

    // Check if the file was opened successfully
    if (!outFile)
    {
        cout << "Error: File could not be opened for writing." << endl;
        return 1; // Exit the program if the file could not be opened
    }

    // Write some data to the file
    outFile << "Hello, world!\n";
    outFile << "This is a test file for C++ file handling.\n";
    outFile << "Each time this program runs, the contents will be overwritten.\n";

    // Close the file after writing
    outFile.close();

    cout << "Data successfully written to the file." << endl;

    // ------------------ Reading from the File ------------------ //

    // Declare an ifstream object for reading from the file
    ifstream inFile;

    // Open the file in input mode (ios::in)
    inFile.open("data.txt", ios::in);

    // Check if the file was opened successfully
    if (!inFile)
    {
        cout << "Error: File could not be opened for reading." << endl;
        return 1; // Exit the program if the file could not be opened
    }

    // Variable to store each line from the file
    string line;

    cout << "\nReading from the file:" << endl;

    // Read the file line by line using getline() and display it on the console
    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    // Close the file after reading
    inFile.close();

    return 0;
}

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // ------------------ Writing to the File ------------------ //
    
    // Create an ofstream object for writing
    ofstream outFile("example.txt", ios::out);

    // Check if the file was opened successfully
    if (!outFile) {
        cout << "Error: File could not be opened for writing!" << endl;
        return 1;
    }

    // Write data to the file
    outFile << "Line 1: Hello, world!\n";
    outFile << "Line 2: This is a test.\n";
    outFile << "Line 3: Checking the eof() function.\n";

    // Close the file after writing
    outFile.close();
    
    cout << "Data successfully written to the file.\n";

    // ------------------ Reading from the File ------------------ //
    
    // Create an ifstream object for reading
    ifstream inFile("example.txt", ios::in);

    // Check if the file was opened successfully
    if (!inFile) {
        cout << "Error: File could not be opened for reading!" << endl;
        return 1;
    }

    // Variable to hold each line of the file
    string line;

    cout << "\nReading from the file using eof():" << endl;

    // Loop to read the file until we reach the end of the file
    while (!inFile.eof()) {
        getline(inFile, line);  // Read each line
        if (!inFile.eof())      // Avoid printing an extra empty line at the end
            cout << line << endl;
    }

    // Close the file after reading
    inFile.close();

    return 0;
}
