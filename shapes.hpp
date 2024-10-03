#pragma once
namespace shapes
{
struct Shape
{
    double pos = 0.0;
    double vel = 0.0;
    enum Type type;
};
enum Type
{
    Box, Sphere, None
};
void hello();
};
