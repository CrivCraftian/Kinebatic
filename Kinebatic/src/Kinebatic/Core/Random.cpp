#include "kbpdh.h"
#include "Random.h"

namespace kb
{
    // Generate a random integer in the range [min, max]
    int Random::getInt(int min, int max) {
        if (min > max)
        {
            std::swap(min, max);
        }

        std::uniform_int_distribution<int> distribution(min, max);
        return distribution(generator);
    }

    // Generate a random float in the range [min, max)
    float Random::getFloat(float min, float max) {
        if (min > max)
        {
            std::swap(min, max);
        }

        std::uniform_real_distribution<float> distribution(min, max);
        return distribution(generator);
    }

    // Generate a random double in the range [min, max)
    double Random::getDouble(double min, double max) {
        if (min > max)
        {
            std::swap(min, max);
        }

        std::uniform_real_distribution<double> distribution(min, max);
        return distribution(generator);
    }
}