#include <iostream>
#include <vector>

struct Workout;

typedef struct Workout Workout;

class Routine
{
    vector<Workout> workout_vector;
private:
    /* data */
public:
    Routine(/* args */);
    ~Routine();
};

Routine::Routine(/* args */)
{
}

Routine::~Routine()
{
}

