#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>
void ReadCsv(std::string FileName, std::vector<std::vector<std::string>>& Data) {
    std::ifstream ifs;
    ifs.open(FileName);
    if (!ifs.is_open()) return;
    std::string LineString = "";
    std::string Delimeter = ",";
    while (getline(ifs, LineString))
    {
        std::vector<std::string> RowData;
        unsigned int nPos = 0, nFindPos;
        do {
            nFindPos = LineString.find(Delimeter, nPos);
            if (nFindPos == std::string::npos) nFindPos = LineString.length();
            RowData.push_back(LineString.substr(nPos, nFindPos - nPos));
            nPos = nFindPos + 1;
        } while (nFindPos < LineString.length());
        Data.push_back(RowData);
    }
    ifs.close();
}
void Print(std::vector<std::vector<std::string>>& Data) {
    for (int i = 0; i < Data[0].size(); i++)
        std::cout << Data[0][i] << " ";
    std::cout << std::endl;
    for (int i = 1; i < Data.size(); i++) {
        for (int j = 1; j < Data[i].size(); j++) {
            std::cout << std::setw(8) << Data[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main() {
    std::string FileName = "diabetes.csv";
    std::vector<std::vector<std::string>> Data;
    ReadCsv(FileName, Data);
    Print(Data);
}
