#include <iostream>

using namespace std;
struct Point3D
{
    private:
        int x;
        int y;
        int z;
    public:
        Point3D(int in_x, int in_y, int in_z){x = in_x; y = in_y; z = in_z;}
        void show_x(){cout << "x = " << x << endl;}
        void show_y(){cout << "y = " << y << endl;}
        void show_z(){cout << "z = " << z << endl;}
        void show_all(){cout << "x = " << x << " y = " << y << " z = " << z << endl;}
        void change_x(int new_x){ x = new_x;}
        void change_y(int new_y){ y = new_y;}
        void change_z(int new_z){ z = new_z;}
};
int main()
{
    Point3D first(1,0,3);
    Point3D second(2,6,4);
    first.change_x(5);
    first.change_z(9);
    second.change_y(7);
    first.show_x();
    first.show_y();
    first.show_z();
    second.show_all();
    return 0;
}
