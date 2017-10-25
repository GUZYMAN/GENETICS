#include "data.h"


Data* Data::instance = NULL;

Data::Data(void)
{
}
Data::~Data(void)
{
}

const string &Data::getData() const {
    return data;
}

void Data::setData(const string &data) {
    Data::data = data;
}
