#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

int main()
{
    std::string inputFile = "input.bin";   // the source file
    std::string outputFile = "output.bin"; // the source file

    size_t sizeFile = std::filesystem::file_size(inputFile);  //checking the file siza

    std::ifstream inFile;  // openin the source file for reading
    inFile.open(inputFile, std::ios::binary | std::ios::in);

    char* buffer = new char[sizeFile];   // allocating space for an array in the heap

    inFile.read(buffer, sizeof(sizeFile));   // reading the contents of the file
    inFile.close();

    for(int i = 0; i < sizeFile/2; ++i) // rotating the contents of the file
    {
        char tmp = buffer[i];
        buffer[i] = buffer[sizeFile - 1 - i];
        buffer[sizeFile - 1 -i] = tmp;
    }

    std::ofstream outFile(outputFile, std::ios::binary | std::ios::out);  // opening the output file for writing

    outFile.write(buffer, sizeFile);
    outFile.close();
    delete[] buffer;
    return 0;
}
