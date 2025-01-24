/*
#include <fstream>  // Required for file handling

File Stream Classes ::
ifstream (Input File Stream): For reading files.
ofstream (Output File Stream): For writing to files.
fstream (File Stream): For both reading and writing.

// Opening a file modes ::
ifstream inputFile("example.txt");  // Open for reading
ofstream outputFile("output.txt");  // Open for writing
fstream file("data.txt", ios::in | ios::out);  // Open for reading and writing

File Open Modes (ios Flags) ::
ios::in – Open for reading.
ios::out – Open for writing.
ios::app – Append to the end of the file.
ios::ate – Move the file pointer to the end upon opening.
ios::trunc – Truncate the file to zero length (if it exists).
ios::binary – Open in binary mode.

File Position Manipulation ::
tellg(): Get the current position for input.
tellp(): Get the current position for output.
seekg(): Move the input position.
seekp(): Move the output position.

example:
std::ifstream file("example.txt", std::ios::binary);
file.seekg(0, std::ios::end);  // Move to the end of the file
std::streampos size = file.tellg();  // Get the position (file size)
std::cout << "File size: " << size << " bytes" << std::endl;
file.close();

Error Handling ::
eof(): Check if the end of file is reached.
fail(): Check if an operation has failed.
bad(): Check if a serious error has occurred.

eof -> end of file
Example 1: Using eof() with ifstream
#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("example.txt");

    if (file.is_open()) {
        std::string line;

        while (!file.eof()) {
            std::getline(file, line);  // Read line by line
            if (!line.empty()) {
                std::cout << line << std::endl;  // Output each line
            }
        }

        file.close();
    } else {
        std::cerr << "Unable to open the file!" << std::endl;
    }

    return 0;
}

Example 2: Better Approach (Avoiding eof() directly)
#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("example.txt");

    if (file.is_open()) {
        std::string line;

        // Read while lines are available
        while (std::getline(file, line)) {
            std::cout << line << std::endl;  // Output each line
        }

        file.close();
    } else {
        std::cerr << "Unable to open the file!" << std::endl;
    }

    return 0;
}

Example 3: Using eof() with get()

#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("example.txt");

    if (file.is_open()) {
        char ch;

        while (!file.eof()) {
            file.get(ch);  // Read character by character
            if (!file.eof()) {
                std::cout << ch;
            }
        }

        file.close();
    } else {
        std::cerr << "Unable to open the file!" << std::endl;
    }

    return 0;
}

*/

#include <iostream>
#include <fstream> // For file handling
#include <string>

using namespace std;

int main()
{
    // File names
    const string fileName = "example.txt";
    const string appendFileName = "append_example.txt";

    // Writing to a file
    ofstream outFile(fileName);
    if (!outFile)
    {
        cerr << "Error: Unable to create or open the file for writing!" << endl;
        return 1;
    }
    outFile << "This is the first line in the file.\n";
    outFile << "This is the second line.\n";
    outFile.close();
    cout << "Data written to file successfully.\n";

    // Reading from a file
    ifstream inFile(fileName);
    if (!inFile)
    {
        cerr << "Error: Unable to open the file for reading!" << endl;
        return 1;
    }
    cout << "\nReading from the file:\n";
    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }
    inFile.close();

    // Appending to a file
    ofstream appendFile(appendFileName, ios::app);
    if (!appendFile)
    {
        cerr << "Error: Unable to open the file for appending!" << endl;
        return 1;
    }
    appendFile << "Appending new line 1.\n";
    appendFile << "Appending new line 2.\n";
    appendFile.close();
    cout << "\nData appended to file successfully.\n";

    // Reading appended file
    ifstream readAppendFile(appendFileName);
    if (!readAppendFile)
    {
        cerr << "Error: Unable to open the appended file for reading!" << endl;
        return 1;
    }
    cout << "\nReading from the appended file:\n";
    while (getline(readAppendFile, line))
    {
        cout << line << endl;
    }
    readAppendFile.close();

    // Random access in a file (reading specific positions)
    fstream randomAccessFile(fileName, ios::in | ios::out);
    if (!randomAccessFile)
    {
        cerr << "Error: Unable to open the file for random access!" << endl;
        return 1;
    }
    randomAccessFile.seekg(0, ios::end);           // Move to the end of the file
    streampos fileSize = randomAccessFile.tellg(); // Get the size of the file
    cout << "\nSize of the file: " << fileSize << " bytes.\n";

    randomAccessFile.seekg(0, ios::beg); // Move to the beginning
    cout << "Reading first 10 characters from the file:\n";
    char buffer[11] = {0};
    randomAccessFile.read(buffer, 10);
    cout << buffer << endl;

    randomAccessFile.close();

    // Error handling with files
    ifstream errorFile("non_existent_file.txt");
    if (!errorFile)
    {
        cerr << "\nError: File 'non_existent_file.txt' does not exist or cannot be opened.\n";
    }

    return 0;
}
