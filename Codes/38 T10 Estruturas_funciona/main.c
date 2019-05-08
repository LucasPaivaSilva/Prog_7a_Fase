

struct Ponto2D{
    int x;
    int y;
    };
struct Retangulo{
    struct Ponto2D PSE;
    struct Ponto2D PID;
};

int main()
{
    struct Retangulo r1 = {{0,10},{3,1}};

    return 0;
}
