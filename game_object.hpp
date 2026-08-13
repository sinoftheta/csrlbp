class GameObject {
    public:
    // mem for a texture perhaps?
    // ideally memory we define in derrived classes can be modified in their process() function
    //bool visible; // cheeky
    virtual void render(){};
    virtual void process(){};

    // virtual void init(): maybe this goes in the constructor?

    // define all game signals here... fug doesn't quite work with sub/pub
    virtual void on_signal_fired(){};
    // maybe the singleton can have a "signal args" array that can act as the signal args
};