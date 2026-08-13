#include <cmath>
class WelcomeText: public GameObject {
    public:
    int frame = 0;
    virtual void render(){
         DrawText("Congrats! You created your first window!", 190, 200 + int( 10.0 * std::sin(double(frame) * 0.02)), 20, LIGHTGRAY);
    };
    virtual void process(){
        frame += 1;
    };
};