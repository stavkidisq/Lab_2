#ifndef CSVREADER_H
#define CSVREADER_H

#include <employe.h>
#include<QString>
#include<QFile>
#include <iostream>
#include <fstream>


class CSVReader
{
    std::ifstream fin;
public:
    CSVReader(const QString& fileName);
    ~CSVReader();

    bool is_open ()const { return fin.is_open(); }

    std::vector<Employe> readAll();
    Employe getEmploye(std::vector<QString> employeLine);
    std::vector<QString> split(const QString& str, char c);
};

#endif // CSVREADER_H
