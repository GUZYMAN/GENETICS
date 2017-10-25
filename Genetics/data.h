//
// Created by gerald on 23/10/17.
//
#include <iostream>
using namespace std;
class Data
{
private:
    Data(void);
    static Data* instance;
    string data;

public:
    ~Data(void);
    const string &getData() const;

    void setData(const string &data);
    static Data *getInstance()
    {
        if(instance == NULL)
            instance = new Data();

        return instance;
    }
};

