#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
class CSV{
  public:
    vector<vector<string>> Data;
    void loadfromFile(string filename,CSV* csv)
    {
      ifstream file;
      file.open(filename);
      string line;
      string word;
      vector<string> row;
      while(getline(file,line))
      {
        for(int i = 0;i <= sizeof(line)-1;i++)
        {
          if (line[i] != ',')
          {
            word = word+line[i];
          }else{
            row.push_back(word);
            word = "";
          }
        }
            row.push_back(word);
            word = "";
          csv->Data.push_back(row);
          row = {};
      }
    }
    string String(CSV csv){
      string output;
      for (int y = 0; y <= csv.Data.size()-1;y++)
      {
        output = output + csv.Data[y][0];
        for (int x = 1;x <= csv.Data[y].size()-1;x++)
        {
          output = output + "," + csv.Data[y][x];
        }
        output = output + "\n";
      }
      return output;
    }
    
    void stringToCSV(CSV *csv,string data)
    {
      istringstream sData(data);
      vector<vector<string>> output;
      string line;
      string word;
      vector<string> row;
      while(getline(sData,line))
      {
        for(int i = 0;i <= sizeof(line)-1;i++)
        {
          if (line[i] != ',')
          {
            word = word+line[i];
          }else{
            row.push_back(word);
            word = "";
          }
        }
            row.push_back(word);
            word = "";
          csv->Data.push_back(row);
          row = {};
      }
    }
};
