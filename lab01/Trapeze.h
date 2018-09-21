class Trapeze
{
public:
    Trapeze(double a, double b, double h);
    void Print();
    ~Trapeze();

private:
    double side_a;
    double side_b;
    double height;
    double FigureSquare();
};