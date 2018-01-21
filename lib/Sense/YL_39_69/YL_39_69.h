#ifndef YL_39_69_H
#define YL_39_69_H

#include "CityOS.h"

class YL_39_69 : public CityOS {
public:
    YL_39_69(int power, int read);
    YL_39_69(int power);

    int moisture;

    struct _pin {
        int power;
        int read;
    } pin;

    void interval();

private:
    void setup(int power, int read);
};
#endif /* ifndef DHT_22_H */