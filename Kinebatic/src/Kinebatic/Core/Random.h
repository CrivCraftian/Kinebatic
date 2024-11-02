#pragma once
#include "Kinebatic\Core.h"

namespace kb
{
    class KB_API Random {
    public:
        // Constructor with optional seed initialization
        Random(unsigned int seed = std::random_device{}()) : generator(seed) {}

        // Generate a random integer in the range [min, max]
        int getInt(int min, int max);

        // Generate a random float in the range [min, max)
        float getFloat(float min, float max);

        // Generate a random double in the range [min, max)
        double getDouble(double min, double max);

    private:
        std::mt19937 generator;  // Mersenne Twister random number engine
    };
}

