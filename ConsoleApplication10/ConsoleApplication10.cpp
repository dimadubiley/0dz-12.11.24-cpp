#include<iostream>
using namespace std;
class CPU
{
    string model;
    double Gghz;
public:
    CPU() = default;
    CPU(const char* mod, double ghz)
    {
        model.append(mod);
        Gghz = ghz;
    }
    void Print()
    {
        cout << "Model CPU -> " << model << "\t " << Gghz << endl;
    }
};
class SSD
{
    string model;
    double val;
public:
    SSD() = default;
    SSD(const char* mod, double v)
    {
        model.append(mod);
        val = v;
    }
    void Print()
    {
        cout << "Model SSD -> " << model << "\t " << val << endl;
    }
};
class RAM
{
    string model;
    double val;
public:
    RAM() = default;
    RAM(const char* mod, double v)
    {
        model.append(mod);
        val = v;
    }
    void Print()
    {
        cout << "Model RAM -> " << model << "\t " << val << endl;
    }
};
class GPU
{
    string model;
    double val;
public:
    GPU() = default;
    GPU(const char* mod, double v)
    {
        model.append(mod);
        val = v;
    }
    void Print()
    {
        cout << "Model GPU -> " << model << "\t " << val << endl;
    }
};
class Mouse
{
    string model;
public:
    Mouse() = default;
    Mouse(const char* mod)
    {
        model.append(mod);
    }
    void Print()
    {
        cout << "Model mouse: " << model << endl;
    }
};

class Laptop
{
    // композиция 
    CPU cpu;
    SSD ssd;
    RAM ram;
    GPU gpu;
    //-----------


};
int main()
{
    Mouse m;

    Laptop lap;
}