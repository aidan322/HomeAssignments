#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string inputFile = "input.bin";
    std::string outputFile = "output.bin";
    size_t sizeFile = std::filesystem::file_size(inputFile);
    std::ifstream inFile;
    inFile.open(inputFile, std::ios::binary | std::ios::in);
    char* buffer = new char[sizeFile];
    inputFile.read((char*) buffer, sizeof(buffer));
    inputFile.close();
    for(int i = 0; i < fileSize/2; ++i)
    {
        char tmp = buffer[i];
        buffer[i] = buffer[fileSize - 1 - i];
        buffer[fileSize - 1 -i] = tmp;
    }
    std::ofstream outfile(outputFile, std::ios::binary | std::ios::out);
    outputFile.write((char*)&buffer, sizeof(buffer));
    outFile.close();
    delete[] buffer;
    return 0;
}
