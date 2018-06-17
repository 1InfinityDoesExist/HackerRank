
#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    protected:
        int width;
        int height;
    public:
        Rectangle();

        void read_input();
        void display(){}
};
Rectangle::Rectangle(){}
void Rectangle::read_input()
{
    int x, y;
    cin >> x >> y;
    width = x;
    height = y;

    cout << width <<" "<< height << endl;
}
class RectangleArea : public Rectangle{
    private:
    public:
        RectangleArea();
        void display(){
            cout << width*height << endl;
        }
};
RectangleArea::RectangleArea(){}

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}
