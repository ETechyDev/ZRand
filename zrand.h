#include<iostream>
using namespace std;

class zrand
{
    public: static char GetRandomChar(string text);

    public: static string GetRandomString(string text[]);

    public: static int GetRandomLimitedInt(int min , int max);

    public: static float GetRandomLimitedFloat(float min, float max);
};

static zrand ZRand;
