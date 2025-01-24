#include <iostream>
    using namespace std;

class MKS_Dist;
class FPS_Dist;

double compare(MKS_Dist, FPS_Dist);

class MKS_Dist
{
private:
    double a;

public:
    MKS_Dist(double x) : a(x) {}
    friend double compare(MKS_Dist, FPS_Dist);
};

class FPS_Dist
{
private:
    double b;

public:
    FPS_Dist(double y) : b(y) {}
    friend double compare(MKS_Dist, FPS_Dist);
};

double compare(MKS_Dist o1, FPS_Dist o2)
{
    double m = o1.a * 3.2804;
    double f = o2.b;

    if (m > f)
    {
        return 1.0;
    }
    else if (m < f)
    {
        return -1.0;
    }
    else
    {
        return 0.0;
    }
}

int main()
{
    MKS_Dist mks(0.2);
    FPS_Dist fps(17.4);

    double result = compare(mks, fps);

    if (result > 0)
    {
        cout << "m is greater than f" << endl;
    }
    else if (result < 0)
    {
        cout << "m is lesser than f" << endl;
    }
    else
    {
        cout << "m is equal to f" << endl;
    }

    return 0;
}
