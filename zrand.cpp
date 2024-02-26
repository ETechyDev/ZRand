#include<iostream>
#include"zrand.h"
using namespace std;

class zrand
{
    public: static char GetRandomChar(string text)
    {
        const int length = text.length();

        char* split = new char[length + 1];

        strcpy(split, text.c_str());

        srand(time(0));
        int u = rand() % length;

        return split[u];
    }

    public: static string GetRandomString(string text[])
    {        
        int n = 1;
        for(int i = 0; i < n; i++)
        {
            if(text[i] != "")
            {
                n += 1;
            }
        }
        srand(sin(time(0)) / 0.01);
        int y = rand() % (n-1);
        
        return text[y];
    }

    public: static int GetRandomLimitedInt(int min , int max)
    {
        srand(time(0));
        int y = rand() % max;
        while(y < min)
        {
            y = rand() % max;
        }
        return y;
    }

    public: static float GetRandomLimitedFloat(float min, float max)
    {
        srand(time(0));
        float y = (pow((rand() % int(max)), 2)) / max;
        while(y < min || y > max)
        {
            srand(time(0));
            y = (pow((rand() % int(max)), 2)) / max;
        }
        return y;
    }
};

static zrand ZRand;
